#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include "widget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    label = new QLabel("<h2><i>Hello</i>" "<font color=red>Qt!</font></h2>");



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
  label->show();
}

void MainWindow::on_pushButton_clicked()
{
    wi.show();
}
