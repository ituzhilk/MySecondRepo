#include <QtGui/QApplication>
//#include "mainwindow.h"
//#include "widget.h"
//#include "finddialog.h"
#include <QDialog>
#include "gotocelldialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gotocelldialog d;
    d.show();

//    Ui::GoToCellDialog ui;
//    QDialog *dialog = new QDialog;
//    ui.setupUi(dialog);
//    dialog->show();


//    MainWindow w;
//    w.show();
//    FindDialog *dialog= new FindDialog;
//    dialog->show();


    return a.exec();
}
