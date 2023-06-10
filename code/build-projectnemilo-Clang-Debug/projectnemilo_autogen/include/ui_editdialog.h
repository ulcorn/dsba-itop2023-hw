/********************************************************************************
** Form generated from reading UI file 'editdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labeltitle;
    QLineEdit *editTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *editAuthor;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *editRating;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *editVoters;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *editPrice;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *editCurrency;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QTextEdit *editDescription;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *editPublisher;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *editPageCount;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *editGenres;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *editISBN;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *editLanguage;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QDateEdit *editDate;
    QPushButton *editAccept;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName("EditDialog");
        EditDialog->resize(353, 498);
        gridLayout = new QGridLayout(EditDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labeltitle = new QLabel(EditDialog);
        labeltitle->setObjectName("labeltitle");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labeltitle->sizePolicy().hasHeightForWidth());
        labeltitle->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(labeltitle);

        editTitle = new QLineEdit(EditDialog);
        editTitle->setObjectName("editTitle");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editTitle->sizePolicy().hasHeightForWidth());
        editTitle->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(editTitle);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(EditDialog);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_5);

        editAuthor = new QLineEdit(EditDialog);
        editAuthor->setObjectName("editAuthor");
        sizePolicy1.setHeightForWidth(editAuthor->sizePolicy().hasHeightForWidth());
        editAuthor->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(editAuthor);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(EditDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_3);

        editRating = new QLineEdit(EditDialog);
        editRating->setObjectName("editRating");
        sizePolicy1.setHeightForWidth(editRating->sizePolicy().hasHeightForWidth());
        editRating->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(editRating);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(EditDialog);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_2);

        editVoters = new QLineEdit(EditDialog);
        editVoters->setObjectName("editVoters");
        sizePolicy1.setHeightForWidth(editVoters->sizePolicy().hasHeightForWidth());
        editVoters->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(editVoters);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(EditDialog);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label);

        editPrice = new QLineEdit(EditDialog);
        editPrice->setObjectName("editPrice");
        sizePolicy1.setHeightForWidth(editPrice->sizePolicy().hasHeightForWidth());
        editPrice->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(editPrice);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(EditDialog);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_4);

        editCurrency = new QLineEdit(EditDialog);
        editCurrency->setObjectName("editCurrency");
        sizePolicy1.setHeightForWidth(editCurrency->sizePolicy().hasHeightForWidth());
        editCurrency->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(editCurrency);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(EditDialog);
        label_7->setObjectName("label_7");
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(label_7);

        editDescription = new QTextEdit(EditDialog);
        editDescription->setObjectName("editDescription");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(editDescription->sizePolicy().hasHeightForWidth());
        editDescription->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(editDescription);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(EditDialog);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label_8);

        editPublisher = new QLineEdit(EditDialog);
        editPublisher->setObjectName("editPublisher");
        sizePolicy1.setHeightForWidth(editPublisher->sizePolicy().hasHeightForWidth());
        editPublisher->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(editPublisher);


        gridLayout->addLayout(horizontalLayout_8, 7, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_9 = new QLabel(EditDialog);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(label_9);

        editPageCount = new QLineEdit(EditDialog);
        editPageCount->setObjectName("editPageCount");
        sizePolicy1.setHeightForWidth(editPageCount->sizePolicy().hasHeightForWidth());
        editPageCount->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(editPageCount);


        gridLayout->addLayout(horizontalLayout_9, 8, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_10 = new QLabel(EditDialog);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(label_10);

        editGenres = new QLineEdit(EditDialog);
        editGenres->setObjectName("editGenres");
        sizePolicy1.setHeightForWidth(editGenres->sizePolicy().hasHeightForWidth());
        editGenres->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(editGenres);


        gridLayout->addLayout(horizontalLayout_10, 9, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_11 = new QLabel(EditDialog);
        label_11->setObjectName("label_11");
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(label_11);

        editISBN = new QLineEdit(EditDialog);
        editISBN->setObjectName("editISBN");
        sizePolicy1.setHeightForWidth(editISBN->sizePolicy().hasHeightForWidth());
        editISBN->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(editISBN);


        gridLayout->addLayout(horizontalLayout_11, 10, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_12 = new QLabel(EditDialog);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(label_12);

        editLanguage = new QLineEdit(EditDialog);
        editLanguage->setObjectName("editLanguage");
        sizePolicy1.setHeightForWidth(editLanguage->sizePolicy().hasHeightForWidth());
        editLanguage->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(editLanguage);


        gridLayout->addLayout(horizontalLayout_12, 11, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_13 = new QLabel(EditDialog);
        label_13->setObjectName("label_13");
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(label_13);

        editDate = new QDateEdit(EditDialog);
        editDate->setObjectName("editDate");
        sizePolicy1.setHeightForWidth(editDate->sizePolicy().hasHeightForWidth());
        editDate->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(editDate);


        gridLayout->addLayout(horizontalLayout_13, 12, 0, 1, 1);

        editAccept = new QPushButton(EditDialog);
        editAccept->setObjectName("editAccept");

        gridLayout->addWidget(editAccept, 13, 0, 1, 1);


        retranslateUi(EditDialog);

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QCoreApplication::translate("EditDialog", "Dialog", nullptr));
        labeltitle->setText(QCoreApplication::translate("EditDialog", "Title", nullptr));
        label_5->setText(QCoreApplication::translate("EditDialog", "Author", nullptr));
        label_3->setText(QCoreApplication::translate("EditDialog", "Rating", nullptr));
        label_2->setText(QCoreApplication::translate("EditDialog", "Voters", nullptr));
        label->setText(QCoreApplication::translate("EditDialog", "Price", nullptr));
        label_4->setText(QCoreApplication::translate("EditDialog", "Currency", nullptr));
        label_7->setText(QCoreApplication::translate("EditDialog", "Description", nullptr));
        label_8->setText(QCoreApplication::translate("EditDialog", "Publisher", nullptr));
        label_9->setText(QCoreApplication::translate("EditDialog", "Page Count", nullptr));
        label_10->setText(QCoreApplication::translate("EditDialog", "Genres", nullptr));
        label_11->setText(QCoreApplication::translate("EditDialog", "ISBN", nullptr));
        label_12->setText(QCoreApplication::translate("EditDialog", "Language", nullptr));
        label_13->setText(QCoreApplication::translate("EditDialog", "Date", nullptr));
        editAccept->setText(QCoreApplication::translate("EditDialog", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
