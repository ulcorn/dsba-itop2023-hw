#include "editdialog.h"
#include "ui_editdialog.h"

EditDialog::EditDialog(const Book& book, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditDialog)
{
    ui->setupUi(this);
    ui->editTitle->setText(book.title);
    ui->editAuthor->setText(book.author);
    ui->editRating->setText(QString::number(book.rating));
    ui->editVoters->setText(QString::number(book.voters));
    ui->editPrice->setText(QString::number(book.price));
    ui->editCurrency->setText(book.currency);
    ui->editDescription->setText(book.description);
    ui->editPublisher->setText(book.publisher);
    ui->editPageCount->setText(QString::number(book.page_count));
    ui->editGenres->setText(book.genres);
    ui->editISBN->setText(book.isbn);
    ui->editLanguage->setText(book.language);
    ui->editDate->setMinimumDate(QDate(1, 1, 1));
    ui->editDate->setDate(book.published_date);
    connect(ui->editAccept, &QPushButton::clicked, this, &EditDialog::accept);
}

EditDialog::~EditDialog()
{
    delete ui;
}

QString EditDialog::getTitle() const
{
    return ui->editTitle->text();
}

QString EditDialog::getAuthor() const
{
    return ui->editAuthor->text();
}
float EditDialog::getRating() const
{
    return ui->editRating->text().toFloat();
}

int EditDialog::getVoters() const
{
    return ui->editVoters->text().toInt();
}

float EditDialog::getPrice() const
{
    return ui->editPrice->text().toFloat();
}
QString EditDialog::getCurrency() const
{
    return ui->editCurrency->text();
}
QString EditDialog::getDescription() const
{
    return ui->editDescription->toPlainText();
}
QString EditDialog::getPublisher() const
{
    return ui->editPublisher->text();
}
int EditDialog::getPageCount() const
{
    return ui->editPageCount->text().toInt();
}
QString EditDialog::getGenres() const
{
    return ui->editGenres->text();
}
QString EditDialog::getIsbn() const
{
    return ui->editISBN->text();
}
QString EditDialog::getLanguage() const
{
    return ui->editLanguage->text();
}
QDate EditDialog::getPublishedDate() const
{
    return ui->editDate->date();
}
