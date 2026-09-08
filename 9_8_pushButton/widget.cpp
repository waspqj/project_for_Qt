#include "widget.h"
#include "ui_widget.h"
#include "QIcon"
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置pushButton图标
//    // 创建图标
//    QIcon icon(":/picture/pental.jpg");
//    // 设置图标
//    ui->pushButton->setIcon(icon);

//    QRect rect = ui->pushButton->geometry();
//    ui->pushButton->setGeometry(rect.x(), rect.y(), 300, 50); //这是设置空间位置和大小
//    // 设置图标大小
//    ui->pushButton->setIconSize(QSize(50, 50));

    // 设置标签图片
    const QRect& rect = ui->label->geometry();
    ui->label->setGeometry(rect.x(), rect.y(), 200, 150); //这是设置空间位置和大小
    ui->label->setPixmap(QPixmap(":/picture/pental.jpg"));
    ui->label->setScaledContents(true);

    // 设置方向控件图标
    QIcon icon_up(":/picture/up.png");
    QIcon icon_down(":/picture/down.png");
    QIcon icon_left(":/picture/left.png");
    QIcon icon_right(":/picture/right.png");
    ui->pushButton_up->setIcon(icon_up);
    ui->pushButton_down->setIcon(icon_down);
    ui->pushButton_left->setIcon(icon_left);
    ui->pushButton_right->setIcon(icon_right);
    ui->pushButton_up->setIconSize(QSize(80, 60));
    ui->pushButton_down->setIconSize(QSize(80, 60));
    ui->pushButton_right->setIconSize(QSize(80, 60));
    ui->pushButton_left->setIconSize(QSize(80, 60));

    // 设置方向控件连续触发
    ui->pushButton_up->setAutoRepeat(true);
    ui->pushButton_down->setAutoRepeat(true);
    ui->pushButton_right->setAutoRepeat(true);
    ui->pushButton_left->setAutoRepeat(true);

    // 设置快捷键
    ui->pushButton_up->setShortcut(Qt::Key_Up);
    ui->pushButton_down->setShortcut(Qt::Key_Down);
    ui->pushButton_left->setShortcut(Qt::Key_Left);
    ui->pushButton_right->setShortcut(Qt::Key_Right);
    // 也可直接选中对应字母
    ui->pushButton_up->setShortcut(QKeySequence("w"));
    ui->pushButton_down->setShortcut(QKeySequence("s"));  //setShortcut不可同时设置同一个快捷键
    ui->pushButton_left->setShortcut(QKeySequence("a"));
    ui->pushButton_right->setShortcut(QKeySequence("d"));

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_up_clicked()
{
    const QRect &rect = ui->label->geometry();
    ui->label->setGeometry(rect.x(), rect.y() - 5, rect.width(), rect.height());
    qDebug() << "up";
}

void Widget::on_pushButton_left_clicked()
{
    const QRect &rect = ui->label->geometry();
    ui->label->setGeometry(rect.x() - 5, rect.y(), rect.width(), rect.height());
    qDebug() << "up";
}

void Widget::on_pushButton_right_clicked()
{
    const QRect &rect = ui->label->geometry();
    ui->label->setGeometry(rect.x() + 5, rect.y(), rect.width(), rect.height());
    qDebug() << "up";
}

void Widget::on_pushButton_down_clicked()
{
    const QRect &rect = ui->label->geometry();
    ui->label->setGeometry(rect.x(), rect.y() + 5, rect.width(), rect.height());
    qDebug() << "up";
}
