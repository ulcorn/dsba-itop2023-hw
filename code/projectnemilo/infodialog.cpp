#include "infoDialog.h"
#include "ui_infoDialog.h"
#include <QStandardItemModel>

infoDialog::infoDialog(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}

void infoDialog::setBook(const Book& book)
{
    ui->BooktitleGraph->setText(book.title);
    ui->AuthorGraph->setText(book.author);
    ui->PriceGraph->setText(QString::number(book.price));
    ui->RatingGraph->setText(QString::number(book.rating));
    //первая таблица
    ui->TableDescriptionGenres->setRowCount(2);
    ui->TableDescriptionGenres->setColumnCount(2);
    ui->TableDescriptionGenres->setItem(0, 0, new QTableWidgetItem("Genre"));
    ui->TableDescriptionGenres->setItem(0, 1, new QTableWidgetItem(book.genres));
    ui->TableDescriptionGenres->setItem(1, 0, new QTableWidgetItem("Description"));
    ui->TableDescriptionGenres->setItem(1, 1, new QTableWidgetItem(book.description));
    for (int row = 0; row < ui->TableDescriptionGenres->rowCount(); ++row)
    {
        for (int col = 0; col < ui->TableDescriptionGenres->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->TableDescriptionGenres->item(row, col);
            if (item)
            {
                item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            }
        }
    }


    QFontMetrics fm(ui->TableDescriptionGenres->font());
    int maxRowHeight = 0;


    for (int i = 0; i < ui->TableDescriptionGenres->columnCount(); ++i)
    {
        QTableWidgetItem* item = ui->TableDescriptionGenres->item(1, i);
        if (item)
        {
            int textHeight = fm.boundingRect(QRect(0, 0, ui->TableDescriptionGenres->columnWidth(i), INT_MAX),
                                             Qt::TextWordWrap, item->text()).height();
            maxRowHeight = qMax(maxRowHeight, textHeight);
        }
    }
    ui->TableDescriptionGenres->setRowHeight(1, maxRowHeight);


    for (int i = 0; i < ui->TableDescriptionGenres->columnCount(); ++i)
    {
        ui->TableDescriptionGenres->horizontalHeader()->setSectionResizeMode(i, QHeaderView::Stretch);
    }
    for (int i = 0; i < ui->TableDescriptionGenres->rowCount(); ++i)
    {
        ui->TableDescriptionGenres->verticalHeader()->setSectionResizeMode(i, QHeaderView::Stretch);
    }


    ui->TableDescriptionGenres->verticalHeader()->setVisible(false);
    ui->TableDescriptionGenres->horizontalHeader()->setVisible(false);
    ui->TableDescriptionGenres->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    //вторая


    QStringList headers;
    ui->TableDetails->setRowCount(1);
    ui->TableDetails->setColumnCount(4);
    headers << "Publisher" << "Page Count" << "Language" << "Published Date";
    ui->TableDetails->setHorizontalHeaderLabels(headers);
    ui->TableDetails->setItem(0, 0, new QTableWidgetItem(book.publisher));
    ui->TableDetails->setItem(0, 1, new QTableWidgetItem(QString::number(book.page_count)));
    ui->TableDetails->setItem(0, 2, new QTableWidgetItem(book.language));
    ui->TableDetails->setItem(0, 3, new QTableWidgetItem(book.published_date.toString("MMM d, yyyy")));
    for (int row = 0; row < ui->TableDetails->rowCount(); ++row)
    {
        for (int col = 0; col < ui->TableDetails->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->TableDetails->item(row, col);
            if (item)
            {
                item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            }
        }
    }


    ui->TableDetails->resizeRowsToContents();
    ui->TableDetails->verticalHeader()->setVisible(false);


    for (int i = 0; i < ui->TableDetails->columnCount(); ++i)
    {
        ui->TableDetails->horizontalHeader()->setSectionResizeMode(i, QHeaderView::Stretch);
    }
    ui->TableDetails->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
}
