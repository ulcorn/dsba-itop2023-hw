#ifndef PROJECTINFODIALOG_H
#define PROJECTINFODIALOG_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class ProjectInfoDialog;
}

class ProjectInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProjectInfoDialog(QWidget *parent = nullptr);
    ~ProjectInfoDialog();

private:
    Ui::ProjectInfoDialog *ui;
    QLabel *projectInfoLabel;
};

#endif // PROJECTINFODIALOG_H
