#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    QIcon icon("C:/Users/was/OneDrive/Pictures/pental.jpg"); // 绝对路径,毫无可移植性
    QIcon icon(":/picture/pental.jpg");                        // prc相对路径,移植性
    // 设置窗口图标
    this->setWindowIcon(icon);
    // 设置光标样式
    QPixmap pixmap(":/picture/cursor.webp");
    pixmap = pixmap.scaled(50, 30);
    QCursor cursor(pixmap, 10, 10);
    this->setCursor(cursor);
    ui->label->setCursor(Qt::IBeamCursor);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_upword_clicked()
{
    QRect rect = ui->label->geometry();
    qDebug() << rect;
    ui->label->setGeometry(rect.x(), rect.y() - 10, rect.width(), rect.height());
    this->setWindowTitle("up");

    // 设置窗口透明度
    float opacity = this->windowOpacity();
    if(opacity <= 0.0) return;
    else{
        qDebug() << opacity;
        opacity -= 0.1;
        this->setWindowOpacity(opacity);
    }
}

void Widget::on_down_clicked()
{
    QRect rect = ui->label->geometry();
    qDebug() << rect;
    ui->label->setGeometry(rect.x(), rect.y() + 10, rect.width(), rect.height());
    this->setWindowTitle("down");
    // 设置窗口透明度
    float opacity = this->windowOpacity();
    if(opacity >= 1.0) return;
    else{
        qDebug() << opacity;
        opacity += 0.1;
        this->setWindowOpacity(opacity);
    }
}

void Widget::on_left_clicked()
{
    QRect rect = ui->label->geometry();
    qDebug() << rect;
    ui->label->setGeometry(rect.x() - 10, rect.y(), rect.width(), rect.height());
    this->setWindowTitle("left");
}

void Widget::on_right_clicked()
{
    QRect rect = ui->label->geometry();
    qDebug() << rect;
    ui->label->setGeometry(rect.x() + 10, rect.y(), rect.width(), rect.height());
    this->setWindowTitle("right");
}
