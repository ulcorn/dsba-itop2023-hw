#include "projectinfodialog.h"
#include "ui_projectinfodialog.h"
#include <QObject>

#include <QPainter>

ProjectInfoDialog::ProjectInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjectInfoDialog)
{
    ui->setupUi(this);
    setWindowTitle("Project Information");
    projectInfoLabel = new QLabel(this);
    ui->textEdit->setReadOnly(true);
    ui->textEdit->setText("Guide to Using the Qt Application for Managing Books\n\n"
                       "The Qt application is designed to help you manage information about books, including their title, author, and price. Here's a short description:\n\n"
                       "- The book model is displayed in a table, with columns representing the different fields of each book (title, author and price).\n"
                       "- You can browse through the books by scrolling vertically or horizontally in the table. You can also edit info about the book, addd new books and remove them\n\n"
                       "a) Editing Book Information:\n"
                       "- To edit the information of a specific book, highlight the field you want to modify. You can do this by clicking on the corresponding cell in the table.\n"
                       "- Once the field is selected, click on the \"Edit\" button. A dialog or a form will appear, allowing you to modify the selected field.\n"
                       "- Make the necessary changes and confirm the edits. The updated information will be saved automatically.\n\n"
                       "b) Removing a Book:\n"
                       "- If you want to remove a book entirely, simply click on any field of that book in the table.\n"
                       "- Once selected, click on the \"Remove\" button. A confirmation prompt may appear to ensure that you want to delete the book.\n"
                       "- Confirm the removal, and the book will be deleted from the book model.\n\n"
                       "c) Saving the Modified Book Model:\n"
                       "- After making changes to the book model, you can save the modifications as a CSV file.\n"
                       "- Click on \"Save\" in the menu bar and select \"Save As.\"\n"
                       "- Choose a location on your device to save the file, provide a name, and click \"Save.\"\n"
                       "- The modified book model will be saved in the selected location in CSV format.\n\n"
                       "d. Viewing Detailed Book Information:\n"
                       "- If you want to see all the fields of a book in detail, select the book by clicking on any of its fields in the table.\n"
                       "- Once the book is selected, click on the \"Info\" button. A dialog or a separate window will open, displaying all the fields of the book.\n"
                       "- You can review the information and close the dialog or window when you're done.\n\n"
                       "That's it! You should now be able to navigate and use the Qt application for managing books effectively. Remember to save your changes regularly to ensure that your modifications are retained.");

    ui->verticalLayout->addWidget(projectInfoLabel);
    connect(ui->close, &QPushButton::clicked, this, &ProjectInfoDialog::accept);
}


ProjectInfoDialog::~ProjectInfoDialog()
{
    delete ui;
}
