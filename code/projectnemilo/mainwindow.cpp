#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "bookmodel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model = new BookModel(this);
    model->loadFromCSV("/Users/dreamer/Desktop/cpp project/dsba-itop2023-hw/data/google_books_1299.csv");

    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

