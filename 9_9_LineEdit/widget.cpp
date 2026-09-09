#include "widget.h"
#include "ui_widget.h"
#include "QDebug"
#include "QRegExpValidator"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置性别默认男
    ui->radioButton_male->setChecked(true);
    // 设置lineEdit_name的默认提示和清空按键
    ui->lineEdit_name->setClearButtonEnabled(true);
    ui->lineEdit_name->setPlaceholderText("请输入姓名");
    // 设置密码回显格式
    ui->lineEdit_password->setClearButtonEnabled(true);
    ui->lineEdit_password->setPlaceholderText("请输入密码");
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    ui->lineEdit_again->setClearButtonEnabled(true);
    ui->lineEdit_again->setPlaceholderText("请再次输入密码");
    ui->lineEdit_again->setEchoMode(QLineEdit::Password);
    // 设置电话号码, 要求3-4-4格式
    ui->lineEdit_number->setClearButtonEnabled(true);
    ui->lineEdit_number->setPlaceholderText("请输入电话号码");
    // ui->lineEdit_number->setInputMask("000-0000-0000");

    // 使用正则表达式设置电话号码的validator 来确保电话号码格式
    ui->lineEdit_number->setValidator(new QRegExpValidator(QRegExp("^1\\d{10}$")));

    // 设置按钮默认不可点击
    ui->pushButton->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString gender = ui->radioButton_male->isChecked() ? "男" : "女";
    qDebug() << "姓名:"<< ui->lineEdit_name->text()
             <<" "<< gender
             <<" 电话号码:"<< ui->lineEdit_number->text()
             <<" 密码: "<< ui->lineEdit_password->text();
}

bool Widget::global_detect()
{
    // 检测两次密码输入相同
    if(ui->lineEdit_password->text() == ui->lineEdit_again->text())
    {
        ui->label_again->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->label_again->setText("");
    }else{
        ui->pushButton->setEnabled(false);
        return false;
    }

    // 检测电话号码格式
    QString number = ui->lineEdit_number->text();
    int pos = 0;
    if(ui->lineEdit_number->validator()->validate(number, pos) == QValidator::Acceptable)
    {
        ui->label_number->setText("");
        ui->label_number->setStyleSheet("background-color: rgb(240, 240, 240)");
    }else{
        ui->pushButton->setEnabled(false);
        return false;
    }

    return true;
}

void Widget::on_lineEdit_number_textEdited(const QString &arg1)
{
    qDebug() << arg1;

    if(global_detect())
    {
        // 全局检测成功, 设置提交按键可用, 取消错误提示
        ui->pushButton->setEnabled(true);
    }else{
        // 填写电话号码时,全局检测失败, 错误提示
        ui->label_number->setStyleSheet("background-color: rgb(240, 148, 181)");
        ui->label_number->setText("电话号码格式错误");
    }
//    QString tmp = arg1;
//    int pos = 0;
//    if(ui->lineEdit_number->validator()->validate(tmp, pos) == QValidator::Acceptable)
//    {
//        ui->pushButton->setEnabled(true);
//    }else{
//        ui->pushButton->setEnabled(false);
//    }
}

void Widget::on_lineEdit_password_textEdited(const QString &arg1)
{
    // 密码行为空
    if(arg1.isEmpty())
    {
        ui->label_password->setStyleSheet("background-color: rgb(240, 148, 181)");
        ui->label_password->setText("密码不可为空");
        return;
    }
    // 密码行不为空
    ui->label_password->setStyleSheet("background-color: rgb(240, 240, 240)");
    ui->label_password->setText("");
    // 全局测试
    if(global_detect())
    {
        ui->pushButton->setEnabled(true);
    }
}

void Widget::on_lineEdit_again_textEdited(const QString &arg1)
{
    // 再次输入密码为空
    if(arg1.isEmpty())
    {
        ui->label_again->setStyleSheet("background-color: rgb(240, 148, 181)");
        ui->label_again->setText("请再次输入密码");
        return;
    }
    // 再次输入密码不为空

    // 全局测试
    if(global_detect())
    {
        ui->pushButton->setEnabled(true);
    }
    else{
        ui->label_again->setStyleSheet("background-color: rgb(240, 148, 181)");
        ui->label_again->setText("与密码不匹配");
    }
}
