/********************************************************************************
** Form generated from reading UI file 'infoDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_infoDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *Vse;
    QHBoxLayout *PAinnedetails;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *BooktitleGraph;
    QLabel *label;
    QLabel *AuthorGraph;
    QVBoxLayout *PainPricRatingDescr;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *RatingGraph;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *PriceGraph;
    QTableWidget *TableDescriptionGenres;
    QHBoxLayout *CartDetails;
    QTableWidget *TableDetails;
    QPushButton *CartButton;

    void setupUi(QDialog *infoDialog)
    {
        if (infoDialog->objectName().isEmpty())
            infoDialog->setObjectName("infoDialog");
        infoDialog->resize(636, 620);
        gridLayout = new QGridLayout(infoDialog);
        gridLayout->setObjectName("gridLayout");
        Vse = new QVBoxLayout();
        Vse->setObjectName("Vse");
        PAinnedetails = new QHBoxLayout();
        PAinnedetails->setObjectName("PAinnedetails");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(infoDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        BooktitleGraph = new QLabel(infoDialog);
        BooktitleGraph->setObjectName("BooktitleGraph");

        verticalLayout->addWidget(BooktitleGraph);

        label = new QLabel(infoDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        AuthorGraph = new QLabel(infoDialog);
        AuthorGraph->setObjectName("AuthorGraph");

        verticalLayout->addWidget(AuthorGraph);


        PAinnedetails->addLayout(verticalLayout);

        PainPricRatingDescr = new QVBoxLayout();
        PainPricRatingDescr->setObjectName("PainPricRatingDescr");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(infoDialog);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        RatingGraph = new QLabel(infoDialog);
        RatingGraph->setObjectName("RatingGraph");

        verticalLayout_2->addWidget(RatingGraph);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(infoDialog);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        PriceGraph = new QLabel(infoDialog);
        PriceGraph->setObjectName("PriceGraph");

        verticalLayout_3->addWidget(PriceGraph);


        horizontalLayout_2->addLayout(verticalLayout_3);


        PainPricRatingDescr->addLayout(horizontalLayout_2);

        TableDescriptionGenres = new QTableWidget(infoDialog);
        TableDescriptionGenres->setObjectName("TableDescriptionGenres");

        PainPricRatingDescr->addWidget(TableDescriptionGenres);


        PAinnedetails->addLayout(PainPricRatingDescr);


        Vse->addLayout(PAinnedetails);

        CartDetails = new QHBoxLayout();
        CartDetails->setObjectName("CartDetails");
        TableDetails = new QTableWidget(infoDialog);
        TableDetails->setObjectName("TableDetails");

        CartDetails->addWidget(TableDetails);

        CartButton = new QPushButton(infoDialog);
        CartButton->setObjectName("CartButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CartButton->sizePolicy().hasHeightForWidth());
        CartButton->setSizePolicy(sizePolicy);

        CartDetails->addWidget(CartButton);


        Vse->addLayout(CartDetails);


        gridLayout->addLayout(Vse, 2, 0, 1, 1);


        retranslateUi(infoDialog);

        QMetaObject::connectSlotsByName(infoDialog);
    } // setupUi

    void retranslateUi(QDialog *infoDialog)
    {
        infoDialog->setWindowTitle(QCoreApplication::translate("infoDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("infoDialog", "Book Title:", nullptr));
        BooktitleGraph->setText(QString());
        label->setText(QCoreApplication::translate("infoDialog", "Author:", nullptr));
        AuthorGraph->setText(QString());
        label_4->setText(QCoreApplication::translate("infoDialog", "Rating:", nullptr));
        RatingGraph->setText(QString());
        label_3->setText(QCoreApplication::translate("infoDialog", "Price:", nullptr));
        PriceGraph->setText(QString());
        CartButton->setText(QCoreApplication::translate("infoDialog", "add to cart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class infoDialog: public Ui_infoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
