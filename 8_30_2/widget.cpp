#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->pushButton_curry->setToolTip("lalalalala,kuli kuli kuli kuli");
    ui->pushButton_curry->setToolTipDuration(3000);
    ui->pushButton_lebron->setToolTip("乐邦乐邦，见母时~");
    ui->pushButton_lebron->setToolTipDuration(1000);
}

Widget::~Widget()
{
    delete ui;
}

