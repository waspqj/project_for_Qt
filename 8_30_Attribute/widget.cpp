#include "widget.h"
#include "ui_widget.h"
#include "QLabel"
#include "QFont"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 创建label
    QLabel *label = new QLabel(this);
    label->setText("啦啦啦啦啦，库里库里库里库里");
    // 创建字体对象
    QFont font;
    // 设置字体
    font.setFamily("仿宋");
    font.setPointSize(50);
    font.setBold(true);    // 设置字体加粗
    font.setItalic(true);  // 设置斜体
    font.setUnderline(true);//设置下划线
    font.setStrikeOut(true);//设置删除线
    // 设置字体对象到 label上
    label->setFont(font);

}

Widget::~Widget()
{
    delete ui;
}

