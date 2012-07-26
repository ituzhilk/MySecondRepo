#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QDialog>

namespace Ui {
    class GoToCellDialog;
}

class gotocelldialog : public QDialog
{
    Q_OBJECT

public:
    explicit gotocelldialog(QWidget *parent = 0);
    ~gotocelldialog();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::GoToCellDialog *ui;
};

#endif // GOTOCELLDIALOG_H
