/********************************************************************************
** Form generated from reading UI file 'numericinput.ui'
**
** Created: Tue Mar 5 14:05:07 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMERICINPUT_H
#define UI_NUMERICINPUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_numericInputClass
{
public:
    QPushButton *pushButton_6;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QPushButton *detOkButton;
    QPushButton *enterButton;

    void setupUi(QDialog *numericInputClass)
    {
        if (numericInputClass->objectName().isEmpty())
            numericInputClass->setObjectName(QString::fromUtf8("numericInputClass"));
        numericInputClass->resize(332, 182);
        numericInputClass->setCursor(QCursor(Qt::BlankCursor));
        numericInputClass->setAutoFillBackground(false);
        pushButton_6 = new QPushButton(numericInputClass);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(110, 50, 40, 40));
        pushButton_6->setCursor(QCursor(Qt::BlankCursor));
        pushButton_Clear = new QPushButton(numericInputClass);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(190, 70, 98, 40));
        pushButton_Clear->setCursor(QCursor(Qt::BlankCursor));
        pushButton_8 = new QPushButton(numericInputClass);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 90, 40, 40));
        pushButton_8->setCursor(QCursor(Qt::BlankCursor));
        pushButton_5 = new QPushButton(numericInputClass);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 50, 40, 40));
        pushButton_5->setCursor(QCursor(Qt::BlankCursor));
        pushButton_2 = new QPushButton(numericInputClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 10, 40, 40));
        pushButton_2->setCursor(QCursor(Qt::BlankCursor));
        pushButton_7 = new QPushButton(numericInputClass);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 90, 40, 40));
        pushButton_7->setCursor(QCursor(Qt::BlankCursor));
        pushButton_10 = new QPushButton(numericInputClass);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 130, 40, 40));
        pushButton_10->setCursor(QCursor(Qt::BlankCursor));
        pushButton_11 = new QPushButton(numericInputClass);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(60, 130, 40, 40));
        pushButton_11->setCursor(QCursor(Qt::BlankCursor));
        pushButton_4 = new QPushButton(numericInputClass);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 50, 40, 40));
        pushButton_4->setCursor(QCursor(Qt::BlankCursor));
        pushButton_9 = new QPushButton(numericInputClass);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(110, 90, 40, 40));
        pushButton_9->setCursor(QCursor(Qt::BlankCursor));
        pushButton_12 = new QPushButton(numericInputClass);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(110, 130, 40, 40));
        pushButton_12->setCursor(QCursor(Qt::BlankCursor));
        pushButton_1 = new QPushButton(numericInputClass);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 10, 40, 40));
        pushButton_1->setCursor(QCursor(Qt::BlankCursor));
        pushButton_3 = new QPushButton(numericInputClass);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 10, 40, 40));
        pushButton_3->setCursor(QCursor(Qt::BlankCursor));
        lineEdit = new QLineEdit(numericInputClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 10, 151, 40));
        detOkButton = new QPushButton(numericInputClass);
        detOkButton->setObjectName(QString::fromUtf8("detOkButton"));
        detOkButton->setGeometry(QRect(270, 130, 51, 41));
        detOkButton->setMinimumSize(QSize(1, 1));
        detOkButton->setCursor(QCursor(Qt::BlankCursor));
        detOkButton->setFocusPolicy(Qt::NoFocus);
        enterButton = new QPushButton(numericInputClass);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setGeometry(QRect(190, 130, 51, 41));
        enterButton->setMinimumSize(QSize(1, 1));
        enterButton->setCursor(QCursor(Qt::BlankCursor));
        enterButton->setFocusPolicy(Qt::NoFocus);

        retranslateUi(numericInputClass);
        QObject::connect(pushButton_1, SIGNAL(pressed()), numericInputClass, SLOT(num_1()));
        QObject::connect(pushButton_2, SIGNAL(pressed()), numericInputClass, SLOT(num_2()));
        QObject::connect(pushButton_3, SIGNAL(pressed()), numericInputClass, SLOT(num_3()));
        QObject::connect(pushButton_4, SIGNAL(pressed()), numericInputClass, SLOT(num_4()));
        QObject::connect(pushButton_5, SIGNAL(pressed()), numericInputClass, SLOT(num_5()));
        QObject::connect(pushButton_6, SIGNAL(pressed()), numericInputClass, SLOT(num_6()));
        QObject::connect(pushButton_7, SIGNAL(pressed()), numericInputClass, SLOT(num_7()));
        QObject::connect(pushButton_8, SIGNAL(pressed()), numericInputClass, SLOT(num_8()));
        QObject::connect(pushButton_9, SIGNAL(pressed()), numericInputClass, SLOT(num_9()));
        QObject::connect(pushButton_10, SIGNAL(pressed()), numericInputClass, SLOT(num_period()));
        QObject::connect(pushButton_11, SIGNAL(pressed()), numericInputClass, SLOT(num_0()));
        QObject::connect(pushButton_12, SIGNAL(pressed()), numericInputClass, SLOT(num_minus()));
        QObject::connect(detOkButton, SIGNAL(pressed()), numericInputClass, SLOT(close()));
        QObject::connect(enterButton, SIGNAL(pressed()), numericInputClass, SLOT(processNumIn()));
        QObject::connect(pushButton_Clear, SIGNAL(pressed()), numericInputClass, SLOT(num_Clear()));

        QMetaObject::connectSlotsByName(numericInputClass);
    } // setupUi

    void retranslateUi(QDialog *numericInputClass)
    {
        numericInputClass->setWindowTitle(QApplication::translate("numericInputClass", "numericInput", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("numericInputClass", "6", 0, QApplication::UnicodeUTF8));
        pushButton_Clear->setText(QApplication::translate("numericInputClass", "CLEAR", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("numericInputClass", "8", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("numericInputClass", "5", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("numericInputClass", "2", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("numericInputClass", "7", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("numericInputClass", ".", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("numericInputClass", "0", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("numericInputClass", "4", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("numericInputClass", "9", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("numericInputClass", "-", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("numericInputClass", "1", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("numericInputClass", "3", 0, QApplication::UnicodeUTF8));
        detOkButton->setText(QApplication::translate("numericInputClass", "OK", 0, QApplication::UnicodeUTF8));
        enterButton->setText(QApplication::translate("numericInputClass", "ENTER", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class numericInputClass: public Ui_numericInputClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMERICINPUT_H
