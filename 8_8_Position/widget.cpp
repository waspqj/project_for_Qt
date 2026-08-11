#include "widget.h"
#include "ui_widget.h"

#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton* myButton = new QPushButton(this);
    myButton->setText("wasPqj");
    myButton->move(300, 300);

    this->move(100, 0);
}

Widget::~Widget()
{
    delete ui;
}

