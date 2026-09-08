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
    QPushButton *pushButton_curry;
    QPushButton *pushButton_lebron;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButton_curry = new QPushButton(Widget);
        pushButton_curry->setObjectName(QString::fromUtf8("pushButton_curry"));
        pushButton_curry->setGeometry(QRect(190, 320, 93, 28));
        pushButton_lebron = new QPushButton(Widget);
        pushButton_lebron->setObjectName(QString::fromUtf8("pushButton_lebron"));
        pushButton_lebron->setGeometry(QRect(450, 320, 93, 28));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 180, 93, 28));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 180, 93, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_curry->setText(QCoreApplication::translate("Widget", "curry", nullptr));
        pushButton_lebron->setText(QCoreApplication::translate("Widget", "lebron", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "qq", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "jj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
