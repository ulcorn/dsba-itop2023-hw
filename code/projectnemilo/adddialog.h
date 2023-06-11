#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
namespace Ui {
class AddDialog;
}
class AddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDialog(QWidget *parent = nullptr);
    ~AddDialog();
    QString getTitle() const;
    QString getAuthor() const;
    float getRating() const;
    int getVoters() const;
    float getPrice() const;
    QString getCurrency() const;
    QString getDescription() const;
    QString getPublisher() const;
    int getPageCount() const;
    QString getGenres() const;
    QString getIsbn() const;
    QString getLanguage() const;
    QDate getPublishedDate() const;
    QDate parseDateFromLineEdit(const QString& dateString) const;

private:
    Ui::AddDialog *ui;
};


#endif // ADDDIALOG_H
