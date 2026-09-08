#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置提示文字和提示显示时间
    ui->pushButton_curry->setToolTip("lalalalala,kuli kuli kuli kuli");
    ui->pushButton_curry->setToolTipDuration(3000);
    ui->pushButton_lebron->setToolTip("乐邦乐邦，见母时~");
    ui->pushButton_lebron->setToolTipDuration(1000);

    // 设置按键焦距
    ui->pushButton->setFocusPolicy(Qt::StrongFocus);
    ui->pushButton_2->setFocusPolicy(Qt::TabFocus);
    ui->pushButton_curry->setFocusPolicy(Qt::ClickFocus);
    ui->pushButton_lebron->setFocusPolicy(Qt::NoFocus);
}

Widget::~Widget()
{
    delete ui;
}

