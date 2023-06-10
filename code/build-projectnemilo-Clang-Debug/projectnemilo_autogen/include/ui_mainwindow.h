/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *body;
    QSpacerItem *probelup;
    QLabel *label;
    QPushButton *cart;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QPushButton *Search;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *editButton;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *addToCart;
    QPushButton *infoButton;
    QTableView *tableView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        body = new QHBoxLayout();
        body->setObjectName("body");
        probelup = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        body->addItem(probelup);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        body->addWidget(label);

        cart = new QPushButton(centralwidget);
        cart->setObjectName("cart");

        body->addWidget(cart);


        gridLayout->addLayout(body, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout_2->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        verticalLayout_4->addWidget(label_3);

        Search = new QPushButton(centralwidget);
        Search->setObjectName("Search");

        verticalLayout_4->addWidget(Search);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        editButton = new QPushButton(centralwidget);
        editButton->setObjectName("editButton");

        horizontalLayout_3->addWidget(editButton);

        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");

        horizontalLayout_3->addWidget(addButton);

        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName("removeButton");

        horizontalLayout_3->addWidget(removeButton);

        addToCart = new QPushButton(centralwidget);
        addToCart->setObjectName("addToCart");

        horizontalLayout_3->addWidget(addToCart);

        infoButton = new QPushButton(centralwidget);
        infoButton->setObjectName("infoButton");

        horizontalLayout_3->addWidget(infoButton);


        verticalLayout->addLayout(horizontalLayout_3);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "BOOKSHOP", nullptr));
        cart->setText(QCoreApplication::translate("MainWindow", "cart", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Sort by:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Title", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Author ", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Price", nullptr));

        label_3->setText(QString());
        Search->setText(QCoreApplication::translate("MainWindow", "searcher", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "Edit book", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add a book", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "Remove book", nullptr));
        addToCart->setText(QCoreApplication::translate("MainWindow", "Add to cart", nullptr));
        infoButton->setText(QCoreApplication::translate("MainWindow", " Show more info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
