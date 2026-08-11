#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->setTitle, &QPushButton::clicked, this, &Widget::changeTitle1);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeTitle1()
{
    this->setWindowTitle("pqj");
}

void Widget::changeTitle2()
{
    this->setWindowTitle("realman");
}


void Widget::on_switchText_clicked()
{
    qDebug() << "switchText";
    disconnect(ui->setTitle, &QPushButton::clicked, this, &Widget::changeTitle1);
    connect(ui->setTitle, &QPushButton::clicked, this, &Widget::changeTitle2);
}
