#include "gotocelldialog.h"
#include "ui_mydialog.h"

gotocelldialog::gotocelldialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GoToCellDialog)
{
    ui->setupUi(this);
}

gotocelldialog::~gotocelldialog()
{
    delete ui;
}

void gotocelldialog::on_okButton_clicked()
{
    ui->label->setText("xren");

}

void gotocelldialog::on_cancelButton_clicked()
{

}
