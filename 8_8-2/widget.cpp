#include "widget.h"
#include "ui_widget.h"
#include "mylabel.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 建议在堆上创建
    MyLabel* label = new MyLabel(this); //this 给当前对象指定父对象
    label->setText(QString("hello world")); //QString -> Qt自己造的轮子

}

Widget::~Widget()
{
    delete ui;
}

