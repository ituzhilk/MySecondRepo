#ifndef FINDDIALOG_H
#define FINDDIALOG_H
//my commit for test
//master

#include <QDialog>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog
{
    Q_OBJECT
public:
    FindDialog(QWidget *parent = 0);

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrev(const QString &str, Qt::CaseSensitivity cs);

public slots:
private slots:
    void findClicked();
    void enableFindButton(const QString &text);

};

#endif // FINDDIALOG_H
