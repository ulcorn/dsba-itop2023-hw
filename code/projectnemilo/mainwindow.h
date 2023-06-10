#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bookmodel.h"
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
    BookModel *cart;

private slots:
    void RemoveButtonClicked();
    void onAddButtonClicked();
    void onEditButtonClicked();
    void oninfoButtonClicked();
};

#endif // MAINWINDOW_H
