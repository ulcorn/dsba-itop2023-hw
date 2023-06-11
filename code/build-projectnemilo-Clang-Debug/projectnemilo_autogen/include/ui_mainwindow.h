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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSaveAs;
    QAction *actionInfo;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *body;
    QSpacerItem *probelup;
    QLabel *label;
    QPushButton *cart;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *editButton;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *addToCart;
    QPushButton *infoButton;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menuSave_as;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(821, 732);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName("actionSaveAs");
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName("actionInfo");
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
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 821, 37));
        menuSave_as = new QMenu(menuBar);
        menuSave_as->setObjectName("menuSave_as");
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuSave_as->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuSave_as->addAction(actionSaveAs);
        menuAbout->addAction(actionInfo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "BOOKSHOP", nullptr));
        cart->setText(QCoreApplication::translate("MainWindow", "cart", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "Edit book", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add a book", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "Remove book", nullptr));
        addToCart->setText(QCoreApplication::translate("MainWindow", "Add to cart", nullptr));
        infoButton->setText(QCoreApplication::translate("MainWindow", " Show more info", nullptr));
        menuSave_as->setTitle(QCoreApplication::translate("MainWindow", "Save", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
