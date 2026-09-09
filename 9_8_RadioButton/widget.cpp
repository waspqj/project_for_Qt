#include "widget.h"
#include "ui_widget.h"
#include "QButtonGroup"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置radiobutton组别
    QButtonGroup *group_hamburger = new QButtonGroup(this);
    group_hamburger->addButton(ui->radioButton);
    group_hamburger->addButton(ui->radioButton_2);
    group_hamburger->addButton(ui->radioButton_3);

    QButtonGroup *group_snack = new QButtonGroup(this);
    group_snack->addButton(ui->radioButton_4);
    group_snack->addButton(ui->radioButton_5);
    group_snack->addButton(ui->radioButton_6);

    QButtonGroup *group_beverage= new QButtonGroup(this);
    group_beverage->addButton(ui->radioButton_7);
    group_beverage->addButton(ui->radioButton_8);
    group_beverage->addButton(ui->radioButton_9);

    // 设置默认选项
    ui->label->setText("你选择的套餐：");
    // 默认汉堡
    ui->radioButton->setChecked(true);
    ui->label_hamburger->setText(ui->radioButton->text());
    // 默认小食
    ui->radioButton_5->setChecked(true);
    ui->label_snack->setText(ui->radioButton_5->text());
    // 默认饮料
    ui->radioButton_8->setChecked(true);
    ui->label_beverage->setText(ui->radioButton_8->text());
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_radioButton_clicked()
{
    ui->label_hamburger->setText(ui->radioButton->text());
}
void Widget::on_radioButton_2_clicked()
{
    ui->label_hamburger->setText(ui->radioButton_2->text());
}
void Widget::on_radioButton_3_clicked()
{
    ui->label_hamburger->setText(ui->radioButton_3->text());
}

void Widget::on_radioButton_6_clicked()
{
    ui->label_snack->setText(ui->radioButton_6->text());
}
void Widget::on_radioButton_5_clicked()
{
    ui->label_snack->setText(ui->radioButton_5->text());
}
void Widget::on_radioButton_4_clicked()
{
    ui->label_snack->setText(ui->radioButton_4->text());
}

void Widget::on_radioButton_8_clicked()
{
    ui->label_beverage->setText(ui->radioButton_8->text());
}
void Widget::on_radioButton_7_clicked()
{
    ui->label_beverage->setText(ui->radioButton_7->text());
}
void Widget::on_radioButton_9_clicked()
{
    ui->label_beverage->setText(ui->radioButton_9->text());
}

void Widget::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
        ui->label_beverage->setText(ui->label_beverage->text() + "(需要餐具)");
}
