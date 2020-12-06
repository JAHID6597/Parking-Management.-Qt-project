/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminpage
{
public:
    QPushButton *pushButton_3;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton;

    void setupUi(QDialog *adminpage)
    {
        if (adminpage->objectName().isEmpty())
            adminpage->setObjectName(QString::fromUtf8("adminpage"));
        adminpage->resize(870, 523);
        QFont font;
        font.setFamily(QString::fromUtf8("Cancun"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        adminpage->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Image/Mantravar.png"), QSize(), QIcon::Normal, QIcon::Off);
        adminpage->setWindowIcon(icon);
        pushButton_3 = new QPushButton(adminpage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 20, 81, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 130, 73);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_2 = new QLabel(adminpage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 10, 271, 41));
        layoutWidget = new QWidget(adminpage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 450, 501, 64));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(211, 22, 5);\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(adminpage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 70, 791, 361));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Belwe Lt BT"));
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit->setFont(font1);

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        tableWidget = new QTableWidget(layoutWidget1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        tableWidget->setFont(font2);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_8 = new QPushButton(layoutWidget1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 186, 0);\n"
""));

        horizontalLayout_4->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget1);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 186, 0);\n"
""));

        horizontalLayout_4->addWidget(pushButton_9);

        pushButton_7 = new QPushButton(layoutWidget1);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 186, 0);\n"
""));

        horizontalLayout_4->addWidget(pushButton_7);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 186, 0);"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(adminpage);

        QMetaObject::connectSlotsByName(adminpage);
    } // setupUi

    void retranslateUi(QDialog *adminpage)
    {
        adminpage->setWindowTitle(QApplication::translate("adminpage", "ADMIN PAGE", nullptr));
        pushButton_3->setText(QApplication::translate("adminpage", "Log out", nullptr));
        label_2->setText(QApplication::translate("adminpage", "<html><head/><body><h2 style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt; font-weight:600; color:#20ac10;\">Hello from ADMIN Panel</span></h2></body></html>", nullptr));
        pushButton_5->setText(QApplication::translate("adminpage", "DELETE ALL", nullptr));
        label_3->setText(QApplication::translate("adminpage", "Search by VEHICLE, SERIAL or SLOT number:  ", nullptr));
        pushButton_8->setText(QApplication::translate("adminpage", "SEE FULL PARK LOGS", nullptr));
        pushButton_9->setText(QApplication::translate("adminpage", "SEE FULL OUT LOGS", nullptr));
        pushButton_7->setText(QApplication::translate("adminpage", "SEE BOOKED SLOTS", nullptr));
        pushButton->setText(QApplication::translate("adminpage", "PAYMENT LOGS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminpage: public Ui_adminpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
