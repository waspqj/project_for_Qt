/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_again;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QLineEdit *lineEdit_number;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit_password;
    QLabel *label_4;
    QLabel *label_number;
    QLabel *label_again;
    QLabel *label_password;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        lineEdit_name = new QLineEdit(Widget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(220, 80, 261, 51));
        lineEdit_again = new QLineEdit(Widget);
        lineEdit_again->setObjectName(QString::fromUtf8("lineEdit_again"));
        lineEdit_again->setGeometry(QRect(220, 230, 261, 51));
        radioButton_male = new QRadioButton(Widget);
        radioButton_male->setObjectName(QString::fromUtf8("radioButton_male"));
        radioButton_male->setGeometry(QRect(260, 310, 101, 19));
        radioButton_female = new QRadioButton(Widget);
        radioButton_female->setObjectName(QString::fromUtf8("radioButton_female"));
        radioButton_female->setGeometry(QRect(390, 310, 101, 19));
        lineEdit_number = new QLineEdit(Widget);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));
        lineEdit_number->setGeometry(QRect(220, 350, 261, 51));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 100, 72, 15));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 250, 72, 15));
        label_2->setWordWrap(false);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 370, 72, 15));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 450, 141, 41));
        lineEdit_password = new QLineEdit(Widget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(220, 150, 261, 51));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 170, 72, 15));
        label_4->setWordWrap(false);
        label_number = new QLabel(Widget);
        label_number->setObjectName(QString::fromUtf8("label_number"));
        label_number->setGeometry(QRect(510, 360, 141, 21));
        label_again = new QLabel(Widget);
        label_again->setObjectName(QString::fromUtf8("label_again"));
        label_again->setGeometry(QRect(520, 240, 161, 21));
        label_password = new QLabel(Widget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(520, 160, 161, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        radioButton_male->setText(QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        radioButton_female->setText(QCoreApplication::translate("Widget", "\345\245\263", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "commit", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        label_number->setText(QString());
        label_again->setText(QString());
        label_password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
