/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labeltitle;
    QLineEdit *addTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *addAuthor;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *addRating;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *addVoters;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label;
    QLineEdit *addPrice;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QLineEdit *addCurrency;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_7;
    QTextEdit *addDescription;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QLineEdit *addPublisher;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLineEdit *addPageCount;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *addGenres;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *addISBN;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QLineEdit *addLanguage;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QLineEdit *addDate;
    QPushButton *addAccept;

    void setupUi(QDialog *AddDialog)
    {
        if (AddDialog->objectName().isEmpty())
            AddDialog->setObjectName("AddDialog");
        AddDialog->resize(415, 654);
        gridLayout = new QGridLayout(AddDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labeltitle = new QLabel(AddDialog);
        labeltitle->setObjectName("labeltitle");

        horizontalLayout->addWidget(labeltitle);

        addTitle = new QLineEdit(AddDialog);
        addTitle->setObjectName("addTitle");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addTitle->sizePolicy().hasHeightForWidth());
        addTitle->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(addTitle);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(AddDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        addAuthor = new QLineEdit(AddDialog);
        addAuthor->setObjectName("addAuthor");
        sizePolicy.setHeightForWidth(addAuthor->sizePolicy().hasHeightForWidth());
        addAuthor->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(addAuthor);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(AddDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        addRating = new QLineEdit(AddDialog);
        addRating->setObjectName("addRating");
        sizePolicy.setHeightForWidth(addRating->sizePolicy().hasHeightForWidth());
        addRating->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(addRating);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(AddDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        addVoters = new QLineEdit(AddDialog);
        addVoters->setObjectName("addVoters");
        sizePolicy.setHeightForWidth(addVoters->sizePolicy().hasHeightForWidth());
        addVoters->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(addVoters);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label = new QLabel(AddDialog);
        label->setObjectName("label");

        horizontalLayout_14->addWidget(label);

        addPrice = new QLineEdit(AddDialog);
        addPrice->setObjectName("addPrice");
        sizePolicy.setHeightForWidth(addPrice->sizePolicy().hasHeightForWidth());
        addPrice->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(addPrice);


        gridLayout->addLayout(horizontalLayout_14, 4, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_4 = new QLabel(AddDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_13->addWidget(label_4);

        addCurrency = new QLineEdit(AddDialog);
        addCurrency->setObjectName("addCurrency");
        sizePolicy.setHeightForWidth(addCurrency->sizePolicy().hasHeightForWidth());
        addCurrency->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(addCurrency);


        gridLayout->addLayout(horizontalLayout_13, 5, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_7 = new QLabel(AddDialog);
        label_7->setObjectName("label_7");

        horizontalLayout_12->addWidget(label_7);

        addDescription = new QTextEdit(AddDialog);
        addDescription->setObjectName("addDescription");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addDescription->sizePolicy().hasHeightForWidth());
        addDescription->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(addDescription);


        gridLayout->addLayout(horizontalLayout_12, 6, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_8 = new QLabel(AddDialog);
        label_8->setObjectName("label_8");

        horizontalLayout_11->addWidget(label_8);

        addPublisher = new QLineEdit(AddDialog);
        addPublisher->setObjectName("addPublisher");
        sizePolicy.setHeightForWidth(addPublisher->sizePolicy().hasHeightForWidth());
        addPublisher->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(addPublisher);


        gridLayout->addLayout(horizontalLayout_11, 7, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_9 = new QLabel(AddDialog);
        label_9->setObjectName("label_9");

        horizontalLayout_10->addWidget(label_9);

        addPageCount = new QLineEdit(AddDialog);
        addPageCount->setObjectName("addPageCount");
        sizePolicy.setHeightForWidth(addPageCount->sizePolicy().hasHeightForWidth());
        addPageCount->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(addPageCount);


        gridLayout->addLayout(horizontalLayout_10, 8, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_10 = new QLabel(AddDialog);
        label_10->setObjectName("label_10");

        horizontalLayout_9->addWidget(label_10);

        addGenres = new QLineEdit(AddDialog);
        addGenres->setObjectName("addGenres");
        sizePolicy.setHeightForWidth(addGenres->sizePolicy().hasHeightForWidth());
        addGenres->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(addGenres);


        gridLayout->addLayout(horizontalLayout_9, 9, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_11 = new QLabel(AddDialog);
        label_11->setObjectName("label_11");

        horizontalLayout_8->addWidget(label_11);

        addISBN = new QLineEdit(AddDialog);
        addISBN->setObjectName("addISBN");
        sizePolicy.setHeightForWidth(addISBN->sizePolicy().hasHeightForWidth());
        addISBN->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(addISBN);


        gridLayout->addLayout(horizontalLayout_8, 10, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_12 = new QLabel(AddDialog);
        label_12->setObjectName("label_12");

        horizontalLayout_7->addWidget(label_12);

        addLanguage = new QLineEdit(AddDialog);
        addLanguage->setObjectName("addLanguage");
        sizePolicy.setHeightForWidth(addLanguage->sizePolicy().hasHeightForWidth());
        addLanguage->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(addLanguage);


        gridLayout->addLayout(horizontalLayout_7, 11, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_13 = new QLabel(AddDialog);
        label_13->setObjectName("label_13");

        horizontalLayout_6->addWidget(label_13);

        addDate = new QLineEdit(AddDialog);
        addDate->setObjectName("addDate");
        sizePolicy.setHeightForWidth(addDate->sizePolicy().hasHeightForWidth());
        addDate->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(addDate);


        gridLayout->addLayout(horizontalLayout_6, 12, 0, 1, 1);

        addAccept = new QPushButton(AddDialog);
        addAccept->setObjectName("addAccept");

        gridLayout->addWidget(addAccept, 13, 0, 1, 1);


        retranslateUi(AddDialog);

        QMetaObject::connectSlotsByName(AddDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDialog)
    {
        AddDialog->setWindowTitle(QCoreApplication::translate("AddDialog", "Dialog", nullptr));
        labeltitle->setText(QCoreApplication::translate("AddDialog", "Title", nullptr));
        label_5->setText(QCoreApplication::translate("AddDialog", "Author", nullptr));
        label_3->setText(QCoreApplication::translate("AddDialog", "Rating", nullptr));
        label_2->setText(QCoreApplication::translate("AddDialog", "Voters", nullptr));
        label->setText(QCoreApplication::translate("AddDialog", "Price", nullptr));
        label_4->setText(QCoreApplication::translate("AddDialog", "Currency", nullptr));
        label_7->setText(QCoreApplication::translate("AddDialog", "Description", nullptr));
        label_8->setText(QCoreApplication::translate("AddDialog", "Publisher", nullptr));
        label_9->setText(QCoreApplication::translate("AddDialog", "Page Count", nullptr));
        label_10->setText(QCoreApplication::translate("AddDialog", "Genres", nullptr));
        label_11->setText(QCoreApplication::translate("AddDialog", "ISBN", nullptr));
        label_12->setText(QCoreApplication::translate("AddDialog", "Language", nullptr));
        label_13->setText(QCoreApplication::translate("AddDialog", "Date", nullptr));
        addAccept->setText(QCoreApplication::translate("AddDialog", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDialog: public Ui_AddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
