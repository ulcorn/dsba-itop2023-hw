#include "adddialog.h"
#include "ui_adddialog.h"


AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);
    ui->addDate->setMinimumDate(QDate(1, 1, 1));
    connect(ui->addAccept, &QPushButton::clicked, this, &AddDialog::accept);
}


AddDialog::~AddDialog()
{
    delete ui;
}


QString AddDialog::getTitle() const
{
    return ui->addTitle->text();
}


QString AddDialog::getAuthor() const
{
    return ui->addAuthor->text();
}


float AddDialog::getRating() const
{
    return ui->addRating->text().toFloat();
}


int AddDialog::getVoters() const
{
    return ui->addVoters->text().toInt();
}

float AddDialog::getPrice() const
{
    return ui->addPrice->text().toFloat();
}


QString AddDialog::getCurrency() const
{
    return ui->addCurrency->text();
}


QString AddDialog::getDescription() const
{
    return ui->addDescription->toPlainText();
}


QString AddDialog::getPublisher() const
{
    return ui->addPublisher->text();
}


int AddDialog::getPageCount() const
{
    return ui->addPageCount->text().toInt();
}


QString AddDialog::getGenres() const
{
    return ui->addGenres->text();
}


QString AddDialog::getIsbn() const
{
    return ui->addISBN->text();
}


QString AddDialog::getLanguage() const
{
    return ui->addLanguage->text();
}


QDate AddDialog::getPublishedDate() const
{
    return ui->addDate->date();
}
