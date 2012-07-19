#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSpinbox>
#include <QSlider>
#include "QHBoxLayout"

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);

signals:

public slots:

private:
    QSpinBox *spinBox;
    QSlider *slider;
    QHBoxLayout *layout;
};

#endif // WIDGET_H
