#include "widget.h"
#include "ui_widget.h"
#include "QResizeEvent"
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置label里的图片，并占满整个窗口，可随窗口变化
    QPixmap pixmap(":/cursor.webp");
    ui->label->setPixmap(pixmap);
    ui->label->setScaledContents(true); // 图片占满控件
    QRect widgetRect = this->geometry();
    ui->label->setGeometry(0,0,widgetRect.width(), widgetRect.height());

    // test不同的文本格式
    ui->label_2->setTextFormat(Qt::PlainText);
    ui->label_2->setText("<b> llll \n </b>");
    ui->label_3->setTextFormat(Qt::RichText);
    ui->label_3->setText("<b> waspqj </b>");
    ui->label_4->setTextFormat(Qt::MarkdownText);
    ui->label_4->setText("## zzzzz");

    // 设置伙伴
    ui->label_5->setBuddy(ui->radioButton);
    ui->label_6->setBuddy(ui->radioButton_2);
}

void Widget::resizeEvent(QResizeEvent *event)
{
    ui->label->setGeometry(0, 0, event->size().width(), event->size().height());
    qDebug() << event->size().width()<< event->size().height();
}

Widget::~Widget()
{
    delete ui;
}

