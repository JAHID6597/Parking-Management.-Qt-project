/********************************************************************************
** Form generated from reading UI file 'car.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAR_H
#define UI_CAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAR
{
public:
    QLabel *label;
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *CAR)
    {
        if (CAR->objectName().isEmpty())
            CAR->setObjectName(QString::fromUtf8("CAR"));
        CAR->setWindowModality(Qt::NonModal);
        CAR->resize(485, 297);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Image/Mantravar.png"), QSize(), QIcon::Normal, QIcon::Off);
        CAR->setWindowIcon(icon);
        CAR->setAutoFillBackground(false);
        CAR->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(CAR);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 481, 41));
        pushButton_4 = new QPushButton(CAR);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 230, 101, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(211, 22, 5);\n"
"color: rgb(255, 255, 255);\n"
""));
        layoutWidget = new QWidget(CAR);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 120, 311, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        layoutWidget1 = new QWidget(CAR);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 160, 311, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_4->addWidget(lineEdit_2);

        label_7 = new QLabel(CAR);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 40, 471, 41));
        layoutWidget2 = new QWidget(CAR);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(90, 90, 311, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_4 = new QLineEdit(layoutWidget2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_4);

        layoutWidget3 = new QWidget(CAR);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(92, 192, 311, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        lineEdit_3 = new QLineEdit(layoutWidget3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_3);

        pushButton = new QPushButton(CAR);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 61, 21));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 130, 73);\n"
"color: rgb(255, 255, 255);\n"
""));

        retranslateUi(CAR);

        QMetaObject::connectSlotsByName(CAR);
    } // setupUi

    void retranslateUi(QDialog *CAR)
    {
        CAR->setWindowTitle(QApplication::translate("CAR", "CAR PARK", nullptr));
        label->setText(QApplication::translate("CAR", "<html><head/><body><h2 align=\"center\" style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:600; text-decoration: underline; color:#ff0000;\">CAR PARK</span></h2></body></html>", nullptr));
        pushButton_4->setText(QApplication::translate("CAR", "PARK", nullptr));
        label_4->setText(QApplication::translate("CAR", "Vehicle no:    ", nullptr));
        label_5->setText(QApplication::translate("CAR", "Name:           ", nullptr));
        label_7->setText(QApplication::translate("CAR", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#aa0000;\">| Car parking rate is Per hour 15 taka only. |</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("CAR", "Slot:              ", nullptr));
        label_6->setText(QApplication::translate("CAR", "Serial:           ", nullptr));
        pushButton->setText(QApplication::translate("CAR", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CAR: public Ui_CAR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAR_H
