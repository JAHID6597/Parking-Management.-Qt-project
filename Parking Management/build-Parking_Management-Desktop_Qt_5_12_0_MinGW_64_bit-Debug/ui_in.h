/********************************************************************************
** Form generated from reading UI file 'in.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IN_H
#define UI_IN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_IN
{
public:
    QPushButton *pushButton;
    QLabel *parklot;
    QPushButton *parkSlot_1;
    QPushButton *parkSlot_2;
    QPushButton *parkSlot_3;
    QPushButton *parkSlot_4;
    QPushButton *parkSlot_5;
    QPushButton *parkSlot_6;
    QPushButton *parkSlot_7;
    QPushButton *parkSlot_8;
    QPushButton *parkSlot_9;
    QPushButton *parkSlot_10;
    QPushButton *parkSlot_11;
    QPushButton *parkSlot_12;
    QPushButton *parkSlot_13;
    QPushButton *parkSlot_14;
    QPushButton *parkSlot_15;
    QLabel *label;

    void setupUi(QDialog *IN)
    {
        if (IN->objectName().isEmpty())
            IN->setObjectName(QString::fromUtf8("IN"));
        IN->resize(823, 599);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Image/Mantravar.png"), QSize(), QIcon::Normal, QIcon::Off);
        IN->setWindowIcon(icon);
        IN->setAutoFillBackground(true);
        IN->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(IN);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(194, 194, 194);"));
        parklot = new QLabel(IN);
        parklot->setObjectName(QString::fromUtf8("parklot"));
        parklot->setGeometry(QRect(20, 80, 791, 521));
        parkSlot_1 = new QPushButton(IN);
        parkSlot_1->setObjectName(QString::fromUtf8("parkSlot_1"));
        parkSlot_1->setGeometry(QRect(90, 170, 61, 81));
        parkSlot_2 = new QPushButton(IN);
        parkSlot_2->setObjectName(QString::fromUtf8("parkSlot_2"));
        parkSlot_2->setGeometry(QRect(160, 170, 61, 81));
        parkSlot_3 = new QPushButton(IN);
        parkSlot_3->setObjectName(QString::fromUtf8("parkSlot_3"));
        parkSlot_3->setGeometry(QRect(230, 170, 61, 81));
        parkSlot_4 = new QPushButton(IN);
        parkSlot_4->setObjectName(QString::fromUtf8("parkSlot_4"));
        parkSlot_4->setGeometry(QRect(300, 400, 61, 81));
        parkSlot_5 = new QPushButton(IN);
        parkSlot_5->setObjectName(QString::fromUtf8("parkSlot_5"));
        parkSlot_5->setGeometry(QRect(370, 400, 61, 81));
        parkSlot_6 = new QPushButton(IN);
        parkSlot_6->setObjectName(QString::fromUtf8("parkSlot_6"));
        parkSlot_6->setGeometry(QRect(440, 400, 61, 81));
        parkSlot_7 = new QPushButton(IN);
        parkSlot_7->setObjectName(QString::fromUtf8("parkSlot_7"));
        parkSlot_7->setGeometry(QRect(510, 400, 61, 81));
        parkSlot_8 = new QPushButton(IN);
        parkSlot_8->setObjectName(QString::fromUtf8("parkSlot_8"));
        parkSlot_8->setGeometry(QRect(580, 400, 61, 81));
        parkSlot_9 = new QPushButton(IN);
        parkSlot_9->setObjectName(QString::fromUtf8("parkSlot_9"));
        parkSlot_9->setGeometry(QRect(530, 160, 61, 81));
        parkSlot_10 = new QPushButton(IN);
        parkSlot_10->setObjectName(QString::fromUtf8("parkSlot_10"));
        parkSlot_10->setGeometry(QRect(680, 370, 91, 71));
        parkSlot_11 = new QPushButton(IN);
        parkSlot_11->setObjectName(QString::fromUtf8("parkSlot_11"));
        parkSlot_11->setGeometry(QRect(200, 300, 91, 61));
        parkSlot_12 = new QPushButton(IN);
        parkSlot_12->setObjectName(QString::fromUtf8("parkSlot_12"));
        parkSlot_12->setGeometry(QRect(200, 400, 91, 61));
        parkSlot_13 = new QPushButton(IN);
        parkSlot_13->setObjectName(QString::fromUtf8("parkSlot_13"));
        parkSlot_13->setGeometry(QRect(340, 300, 91, 61));
        parkSlot_14 = new QPushButton(IN);
        parkSlot_14->setObjectName(QString::fromUtf8("parkSlot_14"));
        parkSlot_14->setGeometry(QRect(460, 300, 91, 61));
        parkSlot_15 = new QPushButton(IN);
        parkSlot_15->setObjectName(QString::fromUtf8("parkSlot_15"));
        parkSlot_15->setGeometry(QRect(570, 300, 91, 61));
        label = new QLabel(IN);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 10, 301, 51));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Tempus Sans ITC\";\n"
"text-decoration: underline;"));

        retranslateUi(IN);

        QMetaObject::connectSlotsByName(IN);
    } // setupUi

    void retranslateUi(QDialog *IN)
    {
        IN->setWindowTitle(QApplication::translate("IN", "PARK", nullptr));
        pushButton->setText(QApplication::translate("IN", "ADMIN", nullptr));
        parklot->setText(QString());
        parkSlot_1->setText(QString());
        parkSlot_2->setText(QString());
        parkSlot_3->setText(QString());
        parkSlot_4->setText(QString());
        parkSlot_5->setText(QString());
        parkSlot_6->setText(QString());
        parkSlot_7->setText(QString());
        parkSlot_8->setText(QString());
        parkSlot_9->setText(QString());
        parkSlot_10->setText(QString());
        parkSlot_11->setText(QString());
        parkSlot_12->setText(QString());
        parkSlot_13->setText(QString());
        parkSlot_14->setText(QString());
        parkSlot_15->setText(QString());
        label->setText(QApplication::translate("IN", "PARKING ZONE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IN: public Ui_IN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IN_H
