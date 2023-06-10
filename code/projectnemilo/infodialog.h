#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>
#include "bookmodel.h"

namespace Ui {
class infoDialog;
}

class infoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit infoDialog(QWidget *parent = nullptr);
    ~infoDialog();

    void setBook(const Book& book);

private:
    Ui::infoDialog *ui;
    Book currentBook;
};

#endif // INFODIALOG_H
