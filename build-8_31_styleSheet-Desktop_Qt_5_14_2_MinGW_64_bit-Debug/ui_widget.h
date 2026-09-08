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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_light;
    QPushButton *pushButton_night;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButton_light = new QPushButton(Widget);
        pushButton_light->setObjectName(QString::fromUtf8("pushButton_light"));
        pushButton_light->setGeometry(QRect(140, 470, 111, 41));
        pushButton_night = new QPushButton(Widget);
        pushButton_night->setObjectName(QString::fromUtf8("pushButton_night"));
        pushButton_night->setGeometry(QRect(530, 470, 101, 41));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 70, 611, 361));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 130, 261, 131));
        label->setStyleSheet(QString::fromUtf8("font: 30px \"\346\245\267\344\275\223\";\n"
"text-decoration: underline;\n"
"color: green;\n"
""));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_light->setText(QCoreApplication::translate("Widget", "\346\227\245\351\227\264\346\250\241\345\274\217", nullptr));
        pushButton_night->setText(QCoreApplication::translate("Widget", "\345\244\234\351\227\264\346\250\241\345\274\217", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
