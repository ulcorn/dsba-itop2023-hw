#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>
#include "QtWidgets/qlineedit.h"
#include "bookmodel.h"


namespace Ui {
class EditDialog;
}

class EditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditDialog(const Book& book, QWidget *parent = nullptr);
    ~EditDialog();
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
    Ui::EditDialog *ui; // The UI form object
};
#endif // EDITDIALOG_H
