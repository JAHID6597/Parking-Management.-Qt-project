#include "car.h"
#include "ui_car.h"
#include "in.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include<QDateTime>
#include <QStringList>
CAR::CAR(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CAR)
{
    ui->setupUi(this);
    //this->setWindowState(Qt::WindowMaximized);  //Full Screen.
    ui->lineEdit->setPlaceholderText("Enter your vehicle number");
    ui->lineEdit_2->setPlaceholderText("Enter your name");
    QFile extra("C:/PMS data/Park/showslot.txt");
    if(!extra.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::critical(this,"Error", "File not opened!"); //checking is file is opened or not
    }
    else {
        QTextStream write(&extra);
        ui->lineEdit_4->setText(write.readAll());

        extra.close();
    }
    QDateTime serial = QDateTime::currentDateTime();
    ui->lineEdit_3->setText(serial.time().toString("sszzz"));
}
CAR::~CAR()
{
    delete ui;
}
void CAR::on_pushButton_4_clicked()
{
    if(!ui->lineEdit->text().isEmpty()  && !ui->lineEdit_2->text().isEmpty())
    {
        QString vehicle_no = ui->lineEdit->text().toUpper();
        QString name = ui->lineEdit_2->text().toLower();
        QString serial = ui->lineEdit_3->text();
        QString slot = ui->lineEdit_4->text();
        QDateTime time;
        QString format = "dddd, d MMMM yyyy hh:mm:ss AP";
        //file for showing booked slots "booked_slots.txt"
        QFile booked_slot("C:/PMS data/Park/Slots_car/booked_slots.txt");
        if(!booked_slot.open(QFile::Append | QFile::Text))
        {
            QMessageBox::critical(this,"Error", "File not opened!");
            return;
        }
        else {
            QTextStream writeslot(&booked_slot);
            writeslot <<slot <<"===" <<serial <<"===" <<vehicle_no <<endl;

            booked_slot.flush();
            booked_slot.close();
        }

        QFile current_booked_slot("C:/PMS data/Park/Slots_car/current_booked_slot.txt");
        if(!current_booked_slot.open(QFile::Append | QFile::Text))
        {
            QMessageBox::critical(this,"Error", "File not opened!");
            return;
        }
        else {
            QTextStream write_slot(&current_booked_slot);
            write_slot <<slot <<"   "<<"SERIAL NO : " <<serial <<"   "<<"VEHICLE NO : " <<vehicle_no <<endl;

            current_booked_slot.flush();
            current_booked_slot.close();
        }

        //file for writing intime logs "intime_logs.txt"
        QFile intime("C:/PMS data/Park/Slots_car/intime_logs.txt");
        if(!intime.open(QFile::Append | QFile::Text))
        {
            QMessageBox::critical(this,"Error", "File not opened!");
            return;
        }
        else {
            QTextStream writeintime(&intime);
            writeintime<< time.currentDateTime().toString(format)<< "****"<<serial <<"****" << vehicle_no<< endl;

            intime.flush();
            intime.close();
        }

        QFile searching("C:/PMS data/Park/Slots_car/searching.txt");
        if(!searching.open(QFile::Append | QFile::Text))
        {
            QMessageBox::critical(this,"Error", "File not opened!");
            return;
        }
        else {
            QTextStream writesearch(&searching);
            writesearch<< "PARK TIME: "<< time.currentDateTime().toString(format)<<
                         "***"<< "SERIAL: "<< serial<<"***"<< "VEHICLE NO.: "<< vehicle_no<<"***"<< "Slot no.: "<< slot<<"***"<< "NAME: "<<name << endl;

            searching.flush();
            searching.close();
        }

        //file for writing car_park_logs "park_logs.txt"
        QFile park("C:/PMS data/Park/Slots_car/park_logs.txt");
        if(!park.open(QFile::Append | QFile::Text))
        {
            QMessageBox::critical(this,"Error", "File not opened!");
            return;
        }
        else{
            QTextStream writelogs(&park);

            writelogs<< time.currentDateTime().toString(format)<<
                        "***"<< serial<<"***"
                     << vehicle_no<<"***"
                     << slot<<"***"<<name << endl;

            park.flush();
            park.close();

            QMessageBox::information(this,"Success", "Your car is Ready to park!");

            hide();
            IN reopen;
            reopen.setModal(true);
            reopen.exec();
        }
    }
    else {
        QMessageBox::critical(this,"Error", "Please enter all information!!");
    }
}

void CAR::on_pushButton_clicked()
{
    hide();
    IN ob;
    ob.setModal(true);
    ob.exec();
}
