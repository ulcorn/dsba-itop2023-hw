/********************************************************************************
** Form generated from reading UI file 'dialogtest.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEST_H
#define UI_DIALOGTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Dialogtest
{
public:

    void setupUi(QDialog *Dialogtest)
    {
        if (Dialogtest->objectName().isEmpty())
            Dialogtest->setObjectName("Dialogtest");
        Dialogtest->resize(400, 300);

        retranslateUi(Dialogtest);

        QMetaObject::connectSlotsByName(Dialogtest);
    } // setupUi

    void retranslateUi(QDialog *Dialogtest)
    {
        Dialogtest->setWindowTitle(QCoreApplication::translate("Dialogtest", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogtest: public Ui_Dialogtest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEST_H
