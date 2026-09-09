#include "widget.h"
#include "ui_widget.h"
#include "QTimer"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 初始化倒计时器显示
    ui->lcdNumber->display(10);

    timer = new QTimer(this);

    connect(timer, &QTimer::timeout, this, &Widget::updateTime);
    // 每隔1s发送一次timeout信号
    timer->start(1000);
}

void Widget::updateTime()
{
    int value = ui->lcdNumber->intValue() - 1;
    if(value < 0)
    {
        timer->stop();
        return;
    }
    ui->lcdNumber->display(value);
}

Widget::~Widget()
{
    delete ui;
}

