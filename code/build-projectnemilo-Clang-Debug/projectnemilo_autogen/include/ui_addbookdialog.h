/********************************************************************************
** Form generated from reading UI file 'addbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKDIALOG_H
#define UI_ADDBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddDialog
{
public:
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *addRating;
    QLabel *label_3;
    QLineEdit *addTitle;
    QPushButton *addAccept;
    QLabel *label_11;
    QTextEdit *addDescription;
    QLineEdit *addPublisher;
    QLabel *label_7;
    QLineEdit *addLanguage;
    QLabel *label_13;
    QDateEdit *addDate;
    QLineEdit *addAuthor;
    QLineEdit *addPageCount;
    QLabel *label_9;
    QLabel *label_5;
    QLineEdit *addGenres;
    QLabel *label_12;
    QLineEdit *addVoters;
    QLineEdit *addCurrency;
    QLabel *label_4;
    QLabel *label_10;
    QLineEdit *addISBN;
    QLineEdit *addPrice;
    QLabel *labeltitle;
    QLabel *label;

    void setupUi(QDialog *AddDialog)
    {
        if (AddDialog->objectName().isEmpty())
            AddDialog->setObjectName("AddDialog");
        AddDialog->resize(337, 561);
        label_2 = new QLabel(AddDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 39, 16));
        label_8 = new QLabel(AddDialog);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 340, 56, 16));
        addRating = new QLineEdit(AddDialog);
        addRating->setObjectName("addRating");
        addRating->setGeometry(QRect(100, 70, 221, 21));
        label_3 = new QLabel(AddDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 70, 39, 16));
        addTitle = new QLineEdit(AddDialog);
        addTitle->setObjectName("addTitle");
        addTitle->setGeometry(QRect(100, 10, 221, 21));
        addAccept = new QPushButton(AddDialog);
        addAccept->setObjectName("addAccept");
        addAccept->setGeometry(QRect(10, 520, 321, 32));
        label_11 = new QLabel(AddDialog);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 430, 30, 16));
        addDescription = new QTextEdit(AddDialog);
        addDescription->setObjectName("addDescription");
        addDescription->setGeometry(QRect(100, 191, 221, 141));
        addPublisher = new QLineEdit(AddDialog);
        addPublisher->setObjectName("addPublisher");
        addPublisher->setGeometry(QRect(100, 340, 221, 21));
        label_7 = new QLabel(AddDialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 250, 69, 16));
        addLanguage = new QLineEdit(AddDialog);
        addLanguage->setObjectName("addLanguage");
        addLanguage->setGeometry(QRect(100, 460, 221, 21));
        label_13 = new QLabel(AddDialog);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 490, 28, 16));
        addDate = new QDateEdit(AddDialog);
        addDate->setObjectName("addDate");
        addDate->setGeometry(QRect(100, 490, 221, 21));
        addAuthor = new QLineEdit(AddDialog);
        addAuthor->setObjectName("addAuthor");
        addAuthor->setGeometry(QRect(100, 40, 221, 21));
        addPageCount = new QLineEdit(AddDialog);
        addPageCount->setObjectName("addPageCount");
        addPageCount->setGeometry(QRect(100, 370, 221, 21));
        label_9 = new QLabel(AddDialog);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 370, 70, 16));
        label_5 = new QLabel(AddDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 40, 41, 16));
        addGenres = new QLineEdit(AddDialog);
        addGenres->setObjectName("addGenres");
        addGenres->setGeometry(QRect(100, 400, 221, 21));
        label_12 = new QLabel(AddDialog);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 460, 59, 16));
        addVoters = new QLineEdit(AddDialog);
        addVoters->setObjectName("addVoters");
        addVoters->setGeometry(QRect(100, 100, 221, 21));
        addCurrency = new QLineEdit(AddDialog);
        addCurrency->setObjectName("addCurrency");
        addCurrency->setGeometry(QRect(100, 160, 221, 21));
        label_4 = new QLabel(AddDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 160, 55, 16));
        label_10 = new QLabel(AddDialog);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 400, 43, 16));
        addISBN = new QLineEdit(AddDialog);
        addISBN->setObjectName("addISBN");
        addISBN->setGeometry(QRect(100, 430, 221, 21));
        addPrice = new QLineEdit(AddDialog);
        addPrice->setObjectName("addPrice");
        addPrice->setGeometry(QRect(100, 130, 221, 21));
        labeltitle = new QLabel(AddDialog);
        labeltitle->setObjectName("labeltitle");
        labeltitle->setGeometry(QRect(20, 10, 26, 16));
        label = new QLabel(AddDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 130, 31, 16));

        retranslateUi(AddDialog);

        QMetaObject::connectSlotsByName(AddDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDialog)
    {
        AddDialog->setWindowTitle(QCoreApplication::translate("AddDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("AddDialog", "Voters", nullptr));
        label_8->setText(QCoreApplication::translate("AddDialog", "Publisher", nullptr));
        label_3->setText(QCoreApplication::translate("AddDialog", "Rating", nullptr));
        addAccept->setText(QCoreApplication::translate("AddDialog", "Add", nullptr));
        label_11->setText(QCoreApplication::translate("AddDialog", "ISBN", nullptr));
        label_7->setText(QCoreApplication::translate("AddDialog", "Description", nullptr));
        label_13->setText(QCoreApplication::translate("AddDialog", "Date", nullptr));
        label_9->setText(QCoreApplication::translate("AddDialog", "Page Count", nullptr));
        label_5->setText(QCoreApplication::translate("AddDialog", "Author", nullptr));
        label_12->setText(QCoreApplication::translate("AddDialog", "Language", nullptr));
        label_4->setText(QCoreApplication::translate("AddDialog", "Currency", nullptr));
        label_10->setText(QCoreApplication::translate("AddDialog", "Genres", nullptr));
        labeltitle->setText(QCoreApplication::translate("AddDialog", "Title", nullptr));
        label->setText(QCoreApplication::translate("AddDialog", "Price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDialog: public Ui_AddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKDIALOG_H
