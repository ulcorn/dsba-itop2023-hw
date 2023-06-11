/********************************************************************************
** Form generated from reading UI file 'projectinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTINFODIALOG_H
#define UI_PROJECTINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "/Users/dreamer/Desktop/cpp project/dsba-itop2023-hw/code/projectnemilo/logowidget.h"

QT_BEGIN_NAMESPACE

class Ui_ProjectInfoDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *close;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    LogoWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *ProjectInfoDialog)
    {
        if (ProjectInfoDialog->objectName().isEmpty())
            ProjectInfoDialog->setObjectName("ProjectInfoDialog");
        ProjectInfoDialog->resize(623, 504);
        gridLayout = new QGridLayout(ProjectInfoDialog);
        gridLayout->setObjectName("gridLayout");
        close = new QPushButton(ProjectInfoDialog);
        close->setObjectName("close");

        gridLayout->addWidget(close, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ProjectInfoDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        widget = new LogoWidget(ProjectInfoDialog);
        widget->setObjectName("widget");

        horizontalLayout->addWidget(widget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(ProjectInfoDialog);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);


        gridLayout->addLayout(verticalLayout, 3, 0, 1, 1);


        retranslateUi(ProjectInfoDialog);

        QMetaObject::connectSlotsByName(ProjectInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ProjectInfoDialog)
    {
        ProjectInfoDialog->setWindowTitle(QCoreApplication::translate("ProjectInfoDialog", "Dialog", nullptr));
        close->setText(QCoreApplication::translate("ProjectInfoDialog", "Close", nullptr));
        label->setText(QCoreApplication::translate("ProjectInfoDialog", "Id of the author of the specification: 1679", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectInfoDialog: public Ui_ProjectInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTINFODIALOG_H
