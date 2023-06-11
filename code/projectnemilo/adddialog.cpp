#include "adddialog.h"
#include "ui_adddialog.h"
#include <QDate>
#include <QLineEdit>
#include <QRegularExpression>


AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);
    connect(ui->addAccept, &QPushButton::clicked, this, &AddDialog::accept);
}


QDate AddDialog::parseDateFromLineEdit(const QString& dateString) const
{

    // Regular expression to match date patterns
    QRegularExpression re("(\\d{1,2})\\.(\\d{1,2})\\.(\\d{1,4})");

    QRegularExpressionMatch match = re.match(dateString);
    if (!match.hasMatch()) {
        return QDate();
    }

    int day = match.captured(1).toInt();
    int month = match.captured(2).toInt();
    int year = match.captured(3).toInt();

    return QDate(year, month, day);
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
    return parseDateFromLineEdit(ui->addDate->text());
}
