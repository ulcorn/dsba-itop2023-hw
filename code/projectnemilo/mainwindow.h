#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QtWidgets/qpushbutton.h"
#include "QtWidgets/qtableview.h"
#include "bookmodel.h"
//#include "cartmodel.h"
#include "projectinfodialog.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    BookModel *model;
    ProjectInfoDialog *projectInfoDialog;
private slots:
    void RemoveButtonClicked();
    void AddButtonClicked();
    void EditButtonClicked();
    void infoButtonClicked();
    void SaveAsTriggered();
//    void CartButtonClicked();
//    void AddToCartButtonClicked();
    void InfoTriggered();
    void NewTriggered();

};

#endif // MAINWINDOW_H
