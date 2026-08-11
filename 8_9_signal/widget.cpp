#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(this, &Widget::mySignal, this, &Widget::handleMySig);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleMySig(const QString &text)
{
    this->setWindowTitle(text);
}


void Widget::on_pushButton_clicked()
{
    emit mySignal(ui->pushButton->text());
}

void Widget::on_pushButton_2_clicked()
{
    emit mySignal(ui->pushButton_2->text());
}
