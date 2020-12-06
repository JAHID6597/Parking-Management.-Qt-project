/********************************************************************************
** Form generated from reading UI file 'carout.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAROUT_H
#define UI_CAROUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_carout
{
public:
    QLabel *label;
    QLabel *label_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QLabel *time;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;

    void setupUi(QDialog *carout)
    {
        if (carout->objectName().isEmpty())
            carout->setObjectName(QString::fromUtf8("carout"));
        carout->resize(521, 313);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Image/Mantravar.png"), QSize(), QIcon::Normal, QIcon::Off);
        carout->setWindowIcon(icon);
        label = new QLabel(carout);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 521, 41));
        label_7 = new QLabel(carout);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 69, 521, 51));
        pushButton_4 = new QPushButton(carout);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 209, 91, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(211, 22, 5);\n"
"color: rgb(255, 255, 255);\n"
""));
        pushButton = new QPushButton(carout);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 61, 21));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 130, 73);\n"
"color: rgb(255, 255, 255);\n"
""));
        time = new QLabel(carout);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(110, 60, 381, 31));
        layoutWidget = new QWidget(carout);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 130, 301, 63));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setAutoFillBackground(true);
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        label_4 = new QLabel(carout);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 90, 211, 41));

        retranslateUi(carout);

        QMetaObject::connectSlotsByName(carout);
    } // setupUi

    void retranslateUi(QDialog *carout)
    {
        carout->setWindowTitle(QApplication::translate("carout", "CAR OUT", nullptr));
        label->setText(QApplication::translate("carout", "<html><head/><body><p align=\"center\"><span style=\" font-size:x-large; font-weight:600; text-decoration: underline; color:#ff0000;\">VEHICLE OUT</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("carout", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#aa0000;\">| Parking rate is Per hour 15 taka only. |</span></p></body></html>", nullptr));
        pushButton_4->setText(QApplication::translate("carout", "OUT", nullptr));
        pushButton->setText(QApplication::translate("carout", "Back", nullptr));
        time->setText(QApplication::translate("carout", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("carout", "Serial No. :  ", nullptr));
        label_3->setText(QApplication::translate("carout", " Total Bill :   ", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class carout: public Ui_carout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAROUT_H
