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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *upword;
    QPushButton *right;
    QPushButton *left;
    QPushButton *down;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 180, 201, 41));
        upword = new QPushButton(Widget);
        upword->setObjectName(QString::fromUtf8("upword"));
        upword->setGeometry(QRect(280, 340, 111, 28));
        right = new QPushButton(Widget);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(390, 390, 111, 28));
        left = new QPushButton(Widget);
        left->setObjectName(QString::fromUtf8("left"));
        left->setGeometry(QRect(160, 390, 111, 28));
        down = new QPushButton(Widget);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(280, 440, 111, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "movting", nullptr));
        upword->setText(QCoreApplication::translate("Widget", "Up", nullptr));
        right->setText(QCoreApplication::translate("Widget", "Right", nullptr));
        left->setText(QCoreApplication::translate("Widget", "Left", nullptr));
        down->setText(QCoreApplication::translate("Widget", "Down", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
