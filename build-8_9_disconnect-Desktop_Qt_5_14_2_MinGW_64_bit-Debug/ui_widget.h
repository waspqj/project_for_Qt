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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *setTitle;
    QPushButton *switchText;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        setTitle = new QPushButton(Widget);
        setTitle->setObjectName(QString::fromUtf8("setTitle"));
        setTitle->setGeometry(QRect(260, 160, 93, 28));
        switchText = new QPushButton(Widget);
        switchText->setObjectName(QString::fromUtf8("switchText"));
        switchText->setGeometry(QRect(260, 230, 93, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        setTitle->setText(QCoreApplication::translate("Widget", "setTitle", nullptr));
        switchText->setText(QCoreApplication::translate("Widget", "switchText", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
