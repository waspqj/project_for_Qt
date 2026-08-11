#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

int XX = 0, YY = 0;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    srand((unsigned int)time(NULL));

    connect(ui->pushButton, &QPushButton::clicked, this, [&](){
        XX += rand(), YY += rand();
        XX %= 1000, YY %= 1000;
        this->move(XX, YY);
        ui->pushButton->move(XX/2,YY/2);
        qDebug() << "clicked -> move";
    });

}

Widget::~Widget()
{
    delete ui;
}

