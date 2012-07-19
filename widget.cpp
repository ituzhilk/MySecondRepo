#include "widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    this->setWindowTitle("Enter Your Age");
    spinBox = new QSpinBox;
    slider = new QSlider(Qt::Horizontal);
    spinBox->setRange(0, 130);
    slider->setRange(0, 130);
    QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),spinBox, SLOT(setValue(int)));
    spinBox->setValue(25);
    layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    this->setLayout(layout);
}
