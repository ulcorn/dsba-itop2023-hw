#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "adddialog.h"
#include "bookmodel.h"
#include "editdialog.h"
#include "infoDialog.h"
#include "QFileDialog"

void MainWindow::AddButtonClicked()
{
    AddDialog dialog(this);

    if (dialog.exec() == QDialog::Accepted)
    {
        Book newBook;
        newBook.title = dialog.getTitle();
        newBook.author = dialog.getAuthor();
        newBook.rating = dialog.getRating();
        newBook.voters = dialog.getVoters();
        newBook.price = dialog.getPrice();
        newBook.currency = dialog.getCurrency();
        newBook.description = dialog.getDescription();
        newBook.publisher = dialog.getPublisher();
        newBook.page_count = dialog.getPageCount();
        newBook.genres = dialog.getGenres();
        newBook.isbn = dialog.getIsbn();
        newBook.language = dialog.getLanguage();
        newBook.published_date = dialog.getPublishedDate();
        model->addBook(newBook);
    }
}
void MainWindow::RemoveButtonClicked()
{
    QModelIndex currentIndex = ui->tableView->currentIndex();

    if(currentIndex.isValid())
    {
        model->removeRow(currentIndex.row());
    }
}

void MainWindow::EditButtonClicked()
{
    int selectedRowIndex = ui->tableView->currentIndex().row();
    if (selectedRowIndex >= 0)
    {
        Book &selectedBook = model->getBook(selectedRowIndex);
        EditDialog dialog(selectedBook, this);
        if (dialog.exec() == QDialog::Accepted)
        {
            selectedBook.title = dialog.getTitle();
            selectedBook.author = dialog.getAuthor();
            selectedBook.rating = dialog.getRating();
            selectedBook.voters = dialog.getVoters();
            selectedBook.price = dialog.getPrice();
            selectedBook.currency = dialog.getCurrency();
            selectedBook.description = dialog.getDescription();
            selectedBook.publisher = dialog.getPublisher();
            selectedBook.page_count = dialog.getPageCount();
            selectedBook.genres = dialog.getGenres();
            selectedBook.isbn = dialog.getIsbn();
            selectedBook.language = dialog.getLanguage();
            selectedBook.published_date = dialog.getPublishedDate();
            model->updateBook(selectedRowIndex, selectedBook);
            ui->tableView->update(ui->tableView->currentIndex());
        }
    }
}

void MainWindow::infoButtonClicked()
{
    Book selectedBook = model->getBook(ui->tableView->currentIndex().row());
    infoDialog dialog(this);
    dialog.setBook(selectedBook);
    dialog.exec();
}
void MainWindow::SaveAsTriggered()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Save As", QString(), "CSV Files (*.csv)");

    if (!filePath.isEmpty())
    {
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream stream(&file);


            QStringList headers;
            for (int col = 0; col < model->columnCount(); ++col)
            {
                headers.append(model->headerData(col, Qt::Horizontal).toString());
            }
            stream << headers.join(";") << "\n";


            for (int row = 0; row < model->rowCount(); ++row)
            {
                QStringList rowData;
                for (int col = 0; col < model->columnCount(); ++col)
                {
                    rowData.append(model->data(model->index(row, col)).toString());
                }
                stream << rowData.join(";") << "\n";
            }

            file.close();
        }
    }
}

void MainWindow::InfoTriggered()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Save As", QString(), "CSV Files (*.csv)");

    if (!filePath.isEmpty())
    {
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream stream(&file);


            QStringList headers;
            for (int col = 0; col < model->columnCount(); ++col)
            {
                headers.append(model->headerData(col, Qt::Horizontal).toString());
            }
            stream << headers.join(";") << "\n";


            for (int row = 0; row < model->rowCount(); ++row)
            {
                QStringList rowData;
                for (int col = 0; col < model->columnCount(); ++col)
                {
                    rowData.append(model->data(model->index(row, col)).toString());
                }
                stream << rowData.join(";") << "\n";
            }

            file.close();
        }
    }
}
void MainWindow::NewTriggered()
{
    ProjectInfoDialog *projectInfoDialog = new ProjectInfoDialog(this);
    projectInfoDialog->exec();
}


//void MainWindow::AddToCartButtonClicked()
//{
//    int selectedBookIndex = ui->tableView->currentIndex().row();

//    if (selectedBookIndex >= 1)
//    {
//        Book &selectedBook = model->getBook(selectedBookIndex);
//        int indexInCart = cartModel->indexOfBook(selectedBook);
//        if (indexInCart == 0)
//        {
//            selectedBook.quantity = 1;
//            cartModel->addBook(selectedBook);
//        }
//        else
//        {
//            int newQuantity = cartModel->getBook(indexInCart).quantity + 1;
//            cartModel->updateQuantity(indexInCart, newQuantity);
//        }
//    }
//}

//void MainWindow::CartButtonClicked()
//{
//    ui->tableView->setModel(cartModel);
//}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new BookModel(this);
    model->loadFromCSV("/Users/dreamer/Desktop/cpp project/dsba-itop2023-hw/data/google_books_1299-semicolon.csv");
    ui->tableView->setModel(model);
    model->setHeaderData(0, Qt::Horizontal, tr("Book title"));
    model->setHeaderData(1, Qt::Horizontal, tr("Author"));
    model->setHeaderData(2, Qt::Horizontal, tr("Price"));
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->resizeRowsToContents();;
    for (int i = 0; i < ui->tableView->model()->columnCount(); ++i) {
        ui->tableView->horizontalHeader()->setSectionResizeMode(i, QHeaderView::Stretch);
    }
    connect(ui->removeButton, &QPushButton::clicked, this, &MainWindow::RemoveButtonClicked);
    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::AddButtonClicked);
    connect(ui->editButton, &QPushButton::clicked, this, &MainWindow::EditButtonClicked);
    connect(ui->infoButton, &QPushButton::clicked, this, &MainWindow::infoButtonClicked);
    connect(ui->actionInfo, &QAction::triggered, this, &MainWindow::NewTriggered);
    connect(ui->actionSaveAs, &QAction::triggered, this, &MainWindow::SaveAsTriggered);
}

MainWindow::~MainWindow()
{
    delete ui;
}

