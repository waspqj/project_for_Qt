#include "widget.h"
#include "ui_widget.h"
#include "QTimer"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置进度条初始状态
    ui->progressBar->setValue(0);
    ui->progressBar->setStyleSheet("QProgressBar::chunk {background-color: rgb(255, 100, 151)}");
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::updateProgressBar);
    timer->start(100);
}

void Widget::updateProgressBar()
{
    int curValue = ui->progressBar->value() + 1;
    if(curValue > 100)
    {
        timer->stop();
        return;
    }
    ui->progressBar->setValue(curValue);
}

Widget::~Widget()
{
    delete ui;
}

