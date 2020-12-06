#include "carout.h"
#include "ui_carout.h"
#include <QMessageBox>
#include <QFile>
#include <QStringList>
#include <QTextStream>
#include <QDebug>
#include <QDateTime>
#include "in.h"

carout::carout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::carout)
{
    ui->setupUi(this);
    //this->setWindowState(Qt::WindowMaximized);  //Full Screen.
    ui->lineEdit_2->setPlaceholderText("Your bill");
    QString out;
    QDateTime Ctime = QDateTime::currentDateTime();
    ui->time->setText("Current time: "+Ctime.toString("dddd, d MMMM yyyy hh:mm AP"));
    ui->time->setStyleSheet("font-size:10pt; font-weight:600; color:#8d00d4");

    QFile read("C:/PMS data/Park/showoutslot.txt");
    if(!read.open(QFile::ReadWrite | QFile::Text)){
        QMessageBox::critical(this,"Error", "File not opened!"); //checking is file is opened or not

    }
    else{
        QTextStream readslot(&read);
        out = readslot.readLine();
    }
    read.close();
    ui->label_4->setText("Take Out from "+out);
    ui->label_4->setStyleSheet("font-size:10pt; font-weight:600; color:#8d00d4");

    IN ob;
    QStringList outSlot = ob.BaseList(1);
    QStringList serial = ob.BaseList(2);
    int index = outSlot.indexOf(out);
    if(index>=0){
        ui->lineEdit->setText(serial[index]);
    }
    if(!ui->lineEdit->text().isEmpty())
    {
        QString serial_no = ui->lineEdit->text(); //if file is opened taking input of vehicle number
        QStringList car_in_time = intime_list(1); //function call
        QStringList car_serial = intime_list(2);

        int index_serial = car_serial.indexOf(serial_no);

        QString format = "dddd, d MMMM yyyy hh:mm:ss AP";

        if(index_serial>=0)
        {
            QString getTime = car_in_time[index_serial];

            QDateTime inTime = QDateTime::fromString(getTime, format);

            QDateTime now = QDateTime::currentDateTime();

            double hours = inTime.secsTo(now); //getting the time diff. in secs

            hours = hours/3600.0; //converting secs to hours

            double bill = hours*15.0; //bill for car is per hour 15.0 taka

            QString Bill = QString::number(bill, 'f', 2); //converting the bill as string with precision point 2

            ui->lineEdit_2->setText(Bill+" taka only."); //finally showing the total bill
        }
        else {
            QMessageBox::critical(this, "Error", "Your Serial number is not found in database!");
        }

    }
    else {
        QMessageBox::critical(this, "Error", "Please input your Serial No.!"); //no car number input->show error
    }
}

carout::~carout()
{
    delete ui;
}

QStringList carout::intime_list(int n)
{
    QStringList  make_list, car_in_time, car_serial, car_no;

    QFile intime("C:/PMS data/Park/Slots_car/intime_logs.txt");
    if(!intime.open(QFile::ReadWrite | QFile::Text)){
        QMessageBox::critical(this,"Error", "File not opened!"); //checking is file is opened or not

    }
    else{
        QTextStream read(&intime);

        QString line = read.readLine();

        while(!line.isNull()) //untill end of file and line
        {
            make_list = line.split("****");

            car_in_time.append(make_list[0]);

            car_serial.append(make_list[1]);

            car_no.append(make_list[2]);

            line = read.readLine();
        }
        intime.close();

        if(n==2){
            return car_serial;
        }
        else if(n==3){
            return car_no;
        }
    }
    return car_in_time;
}

void carout::on_pushButton_4_clicked()
{
    if(!ui->lineEdit->text().isEmpty())
    {
        //booked_slots file theke slot number and details delete korar jnno
        IN ob;
        QString serial_no = ui->lineEdit->text();
        QStringList slot_list = ob.BaseList(1);
        QStringList car_serial = ob.BaseList(2);
        QStringList car_no = ob.BaseList(3);
        int index = car_serial.indexOf(serial_no);
        if(index>=0){
            slot_list.removeAt(index);
            car_serial.removeAt(index);
            car_no.removeAt(index);
        }

        QFile current_booked_slot("C:/PMS data/Park/Slots_car/current_booked_slot.txt");
        if(!current_booked_slot.open(QFile::WriteOnly | QFile::Text))
        {
            QMessageBox::critical(this,"Error", "File not opened!");
            return;
        }
        else {
            QTextStream write_slot(&current_booked_slot);

            int i;
            for (i = 0; i<car_serial.size(); i++) {
                for(int i = 0; i<car_serial.size(); i++){

                } write_slot<< slot_list[i]<< "   "<<"SERIAL NO : "<< car_serial[i]<< "   "<<"VEHICLE NO : "<< car_no[i]<< endl;
            }

            current_booked_slot.flush();
            current_booked_slot.close();
        }

        //write kora hobe notun kore booked_slots file e remove korar por
        QFile newfile("C:/PMS data/Park/Slots_car/booked_slots.txt");
        if(!newfile.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::critical(this,"Error", "File not opened!");//checking is file is opened or not

        }
        else{
            QTextStream out(&newfile);
            for(int i = 0; i<car_serial.size(); i++){
                out <<slot_list[i] <<"===" <<car_serial[i] <<"===" <<car_no[i] <<endl;
            }
            newfile.flush();
            newfile.close();
        }
    }

    //intime logs file theke list banano shuru
    QString serial_no = ui->lineEdit->text();
    QStringList car_in_time = intime_list(1);
    QStringList car_serial = intime_list(2);
    QStringList car_no = intime_list(3);

    int index = car_serial.indexOf(serial_no);
    if(index>=0){
        car_in_time.removeAt(index);
        car_serial.removeAt(index);
        car_no.removeAt(index);
    }

    QFile intime_new("C:/PMS data/Park/Slots_car/intime_logs.txt");
    if(!intime_new.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::critical(this,"Error", "File not opened!");

    }
    else{
        QTextStream write(&intime_new);
        for (int i = 0; i<car_serial.size(); i++) {
            write<< car_in_time[i]<< "****"<< car_serial[i]<< "****"<< car_no[i]<< endl;
        }
        intime_new.flush();
        intime_new.close();
    }

    QFile out_logs("C:/PMS data/Out/out_logs.txt");
    if(!out_logs.open(QFile::Append | QFile::Text)){
        QMessageBox::critical(this,"Error", "File not opened!");

    }
    else{
        QTextStream outlogs(&out_logs);
        QDateTime outtime;
        QString format = "dddd, d MMMM yyyy hh:mm:ss AP";

        outlogs<< outtime.currentDateTime().toString(format)<<"***"
               << ui->lineEdit->text()<<"***"<< ui->lineEdit_2->text()<< endl;

        out_logs.flush();
        out_logs.close();
    }

    QMessageBox::information(this,"Success", "Your vehicle is ready to take out!");

    QFile searching("C:/PMS data/Park/Slots_car/searching.txt");
    if(!searching.open(QFile::Append | QFile::Text))
    {
        QMessageBox::critical(this,"Error", "File not opened!");
        return;
    }
    else {
        QTextStream writesearch(&searching);
        QDateTime time_t;
        QString format = "dddd, d MMMM yyyy hh:mm:ss AP";
        writesearch<< "OUT TIME: "<< time_t.currentDateTime().toString(format)<<"***"
                   << "SERIAL: "<< ui->lineEdit->text()<<"***"<< "BILL PAID: "<< ui->lineEdit_2->text()
                   <<"***"<<"slot"<<"***" <<"vh.no"<< endl;

        searching.flush();
        searching.close();
    }

    QFile payment_logs("C:/PMS data/Out/payment_logs.txt");
    if(!payment_logs.open(QFile::Append | QFile::Text))
    {
        QMessageBox::critical(this,"Error", "File not opened!");
        return;
    }
    else {
        QTextStream payment(&payment_logs);
        payment<< ui->lineEdit->text()<< "***"
               << ui->lineEdit_2->text()<< endl;

        payment_logs.flush();
        payment_logs.close();
    }

    hide();
    IN ob;
    ob.setModal(true);
    ob.exec();
}

void carout::on_pushButton_clicked()
{
    hide();
    IN ob;
    ob.setModal(true);
    ob.exec();
}
