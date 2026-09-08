#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

// 设置日间模式
void Widget::on_pushButton_light_clicked()
{
    this->setStyleSheet("background-color: rgb(240, 240, 240)");

    ui->textEdit->setStyleSheet("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0)");
    ui->pushButton_light->setStyleSheet("background-color: rgb(253, 253, 253); color: rgb(0, 0, 0)");
    ui->pushButton_night->setStyleSheet("background-color: rgb(253, 253, 253); color: rgb(0, 0, 0)");
}
// 夜间模式
void Widget::on_pushButton_night_clicked()
{
    this->setStyleSheet("background-color: rgb(40, 40, 40)");

    ui->textEdit->setStyleSheet("background-color: rgb(10, 10, 10); color: rgb(255, 255, 255)");
    ui->pushButton_light->setStyleSheet("color: rgb(200, 200, 200)");
    ui->pushButton_night->setStyleSheet("color: rgb(200, 200, 200)");
}
