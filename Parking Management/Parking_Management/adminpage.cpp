#include "adminpage.h"
#include "ui_adminpage.h"
#include"QFile"
#include"QMessageBox"
#include"QTextStream"
#include"delete.h"
#include"search.h"
#include<QDateTime>
#include<QTimer>
adminpage::adminpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminpage)
{
    ui->setupUi(this);
    //this->setWindowState(Qt::WindowMaximized);
    ui->lineEdit->setPlaceholderText("Enter your search");
    QTimer *timer = new QTimer(this);
     connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
     timer->start();
}
void adminpage::showTime()
{
    QTime time = QTime::currentTime();
    QString txt_time = time.toString();
    ui->label->setText(txt_time);
}
adminpage::~adminpage()
{
    delete ui;
}

void adminpage::on_pushButton_3_clicked()
{
    hide();
    Admin ob7;
    ob7.setModal(true);
    ob7.exec();

}

void adminpage::on_pushButton_7_clicked()
{
    QFile slot_file("C:/PMS data/Park/Slots_car/booked_slots.txt");
    if(!slot_file.open(QFile::ReadWrite | QFile::Text)){
        QMessageBox::critical(this,"Error", "File not opened!");
    }

    QTextStream booked_slot(&slot_file);
    QString booked =booked_slot.readLine();
    QStringList a,b,c,list;
    while(!booked.isNull())
    {
        list=booked.split("===");
        a.append(list[0]);
        b.append(list[1]);
        c.append(list[2]);

        booked=booked_slot.readLine();
    }
    ui->tableWidget->setRowCount(a.size());
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"Slot No"<<"Serial No"<<"Vehicle No");
    ui->tableWidget->setColumnWidth(0,200);
    ui->tableWidget->setColumnWidth(1,200);
    ui->tableWidget->setColumnWidth(2,200);
    int index = 0;

    if(index>-1){
        {
            QStringList c1,c2,c3;
            c1<<a;
            c2<<b;
            c3<<c;
            for(int q=0;q<a.size();q++)
            {
                QTableWidgetItem *itm1 = new QTableWidgetItem;
                itm1->setText(c1.at(q));
                QTableWidgetItem *itm2 = new QTableWidgetItem;
                itm2->setText(c2.at(q));
                QTableWidgetItem *itm3 = new QTableWidgetItem;
                itm3->setText(c3.at(q));
                ui->tableWidget->setItem(q,0,itm1);
                ui->tableWidget->setItem(q,1,itm2);
                ui->tableWidget->setItem(q,2,itm3);
            }
        }
    }

}


void adminpage::on_pushButton_5_clicked()
{
    Delete obj;
    obj.setModal(true);
    obj.exec();
}


void adminpage::on_pushButton_8_clicked()
{
    QString show_park, show_out;
    QFile parking("C:/PMS data/Park/Slots_car/park_logs.txt");
    if(!parking.open(QFile::ReadWrite | QFile::Text)){
        QMessageBox::critical(this,"Error", "File not opened!");
    }
    QTextStream park(&parking);
    QString in_line =park.readLine();
    QStringList a,b,c,d,e,in_list;
    while(!in_line.isNull())
    {
        in_list=in_line.split("***");
        a.append(in_list[0]);
        b.append(in_list[1]);
        c.append(in_list[2]);
        d.append(in_list[3]);
        e.append(in_list[4]);
        in_line =park.readLine();
    }
    ui->tableWidget->setRowCount(a.size());
    ui->tableWidget->setColumnCount(5);

    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"Park Time"<<"Serial No"<<"Vehicle No"<<"Slot No"<<"Name");
    ui->tableWidget->setColumnWidth(0,300);
    ui->tableWidget->setColumnWidth(1,100);
    ui->tableWidget->setColumnWidth(2,100);
    ui->tableWidget->setColumnWidth(3,100);
    ui->tableWidget->setColumnWidth(4,100);
    int in_index = 0;

    if(in_index>-1){
        {
            QStringList c1,c2,c3,c4,c5;
            c1<<a;
            c2<<b;
            c3<<c;
            c4<<d;
            c5<<e;
            for(int q=0;q<a.size();q++)
            {
                QTableWidgetItem *itm1 = new QTableWidgetItem;
                itm1->setText(c1.at(q));
                QTableWidgetItem *itm2 = new QTableWidgetItem;
                itm2->setText(c2.at(q));
                QTableWidgetItem *itm3 = new QTableWidgetItem;
                itm3->setText(c3.at(q));
                QTableWidgetItem *itm4 = new QTableWidgetItem;
                itm4->setText(c4.at(q));
                QTableWidgetItem *itm5 = new QTableWidgetItem;
                itm5->setText(c5.at(q));

                ui->tableWidget->setItem(q,0,itm1);
                ui->tableWidget->setItem(q,1,itm2);
                ui->tableWidget->setItem(q,2,itm3);
                ui->tableWidget->setItem(q,3,itm4);
                ui->tableWidget->setItem(q,4,itm5);

            }
        }
    }
}
void adminpage::on_pushButton_clicked()
{
    QFile payment_logs("C:/PMS data/Out/payment_logs.txt");
    if(!payment_logs.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::critical(this,"Error", "File not opened!");
        return;
    }

    QTextStream payment(&payment_logs);
    QString paid =payment.readLine();
    QStringList a,b,c,list;
    while(!paid.isNull())
    {
        list=paid.split("***");
        a.append(list[0]);
        b.append(list[1]);


        paid=payment.readLine();
    }
    ui->tableWidget->setRowCount(a.size());
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"Serial No"<<"Bill");
    ui->tableWidget->setColumnWidth(0,300);
    ui->tableWidget->setColumnWidth(1,300);

    int index = 0;
    if(index>-1){
        {
            QStringList c1,c2;
            c1<<a;
            c2<<b;

            for(int q=0;q<a.size();q++)
            {
                QTableWidgetItem *itm1 = new QTableWidgetItem;
                itm1->setText(c1.at(q));
                QTableWidgetItem *itm2 = new QTableWidgetItem;
                itm2->setText(c2.at(q));

                ui->tableWidget->setItem(q,0,itm1);
                ui->tableWidget->setItem(q,1,itm2);

            }
        }
    }
}

void adminpage::on_pushButton_9_clicked()
{
    QFile out("C:/PMS data/Out/out_logs.txt");
    if(!out.open(QFile::ReadWrite | QFile::Text)){
        QMessageBox::critical(this,"Error", "File not opened!");
    }

    QTextStream read_out(&out);
    QString out_line =read_out.readLine();
    QStringList A,B,C,out_list;
    while(!out_line.isNull())
    {
        out_list=out_line.split("***");
        A.append(out_list[0]);
        B.append(out_list[1]);
        C.append(out_list[2]);

        out_line =read_out.readLine();
    }
    ui->tableWidget->setRowCount(A.size());
    ui->tableWidget->setColumnCount(3);



    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"Out Time"<<"Serial no"<<"Bill");
    ui->tableWidget->setColumnWidth(0,300);
    ui->tableWidget->setColumnWidth(1,150);
    ui->tableWidget->setColumnWidth(2,150);

    int out_index = 0;

    if(out_index>-1){
        {
            QStringList C1,C2,C3;
            C1<<A;
            C2<<B;
            C3<<C;
            for(int p=0;p<A.size();p++)
            {
                QTableWidgetItem *item1 = new QTableWidgetItem;
                item1->setText(C1.at(p));

                QTableWidgetItem *item2 = new QTableWidgetItem;
                item2->setText(C2.at(p));
                QTableWidgetItem *item3 = new QTableWidgetItem;
                item3->setText(C3.at(p));
                ui->tableWidget->setItem(p,0,item1);
                ui->tableWidget->setItem(p,1,item2);
                ui->tableWidget->setItem(p,2,item3);
            }
        }



        //  ui->plainTextEdit->setPlainText("Park logs:\n"+show_park+"\n\nOut logs:\n"+show_out);
    }
}

void adminpage::on_lineEdit_textChanged()
{
    if(!ui->lineEdit->text().isEmpty()){
        QFile park("C:/PMS data/Park/Slots_car/searching.txt");
        if(!park.open(QFile::ReadWrite | QFile::Text)){
            QMessageBox::critical(this,"Error", "File not opened!");
        }

        QTextStream readtime(&park);

        QStringList n,j,k,x,l, m;
        QString p = readtime.readLine();

        while (!p.isNull()) {
            l=p.split("***");
            n.append(l[0]);
            j.append(l[1]);
            k.append(l[2]);
            x.append(l[3]);
            m.append(l[4]);
            p=readtime.readLine();
        }
        ui->tableWidget->setRowCount(1);
        ui->tableWidget->setColumnCount(5);
        ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"1"<<"2"<<"3"<<"4"<<"5");
        ui->tableWidget->setColumnWidth(0,500);
        ui->tableWidget->setColumnWidth(1,300);
        ui->tableWidget->setColumnWidth(2,300);
        ui->tableWidget->setColumnWidth(3,300);
        ui->tableWidget->setColumnWidth(4,300);
        QString vehicle_search = "VEHICLE NO.: "+ui->lineEdit->text().toUpper();
        QString slot_search="Slot no.: "+ui->lineEdit->text().toUpper();
        QString search_item = ui->lineEdit->text();
        QString name_search = "NAME: "+ui->lineEdit->text();
        QString serial_search = "SERIAL: "+ui->lineEdit->text();
        int index1 = n.indexOf(search_item);
        if(index1>-1){

            for(int q=0;q<n.size();q++)
            {
                ui->tableWidget->setItem(q,0,new QTableWidgetItem (n[index1]));
                ui->tableWidget->setItem(q,1,new QTableWidgetItem (j[index1]));
                ui->tableWidget->setItem(q,2,new QTableWidgetItem (k[index1]));
                ui->tableWidget->setItem(q,3,new QTableWidgetItem (x[index1]));
                ui->tableWidget->setItem(q,4,new QTableWidgetItem (m[index1]));
            }
        }
        int index2 = j.indexOf(serial_search);
        if (index2>-1) {
            for(int q=0;q<j.size();q++)
            {
                ui->tableWidget->setItem(q,0,new QTableWidgetItem (n[index2]));
                ui->tableWidget->setItem(q,1,new QTableWidgetItem (j[index2]));
                ui->tableWidget->setItem(q,2,new QTableWidgetItem (k[index2]));
                ui->tableWidget->setItem(q,3,new QTableWidgetItem (x[index2]));
                ui->tableWidget->setItem(q,4,new QTableWidgetItem (m[index2]));
            }
        }
        int index3 = k.indexOf(vehicle_search);
        if(index3>-1){
            for(int q=0;q<k.size();q++)
            {
                ui->tableWidget->setItem(q,0,new QTableWidgetItem (n[index3]));
                ui->tableWidget->setItem(q,1,new QTableWidgetItem (j[index3]));
                ui->tableWidget->setItem(q,2,new QTableWidgetItem (k[index3]));
                ui->tableWidget->setItem(q,3,new QTableWidgetItem (x[index3]));
                ui->tableWidget->setItem(q,4,new QTableWidgetItem (m[index3]));
            }
        }
        int index4 = x.indexOf(slot_search);
        if(index4>-1){
            for(int q=0;q<x.size();q++)
            {

                ui->tableWidget->setItem(q,0,new QTableWidgetItem (n[index4]));
                ui->tableWidget->setItem(q,1,new QTableWidgetItem (j[index4]));
                ui->tableWidget->setItem(q,2,new QTableWidgetItem (k[index4]));
                ui->tableWidget->setItem(q,3,new QTableWidgetItem (x[index4]));
                ui->tableWidget->setItem(q,4,new QTableWidgetItem (m[index4]));
            }

        }
        int index5 = m.indexOf(name_search);
        if(index5>-1){
            for(int q=0;q<m.size();q++)
            {
                ui->tableWidget->setItem(q,0,new QTableWidgetItem (n[index5]));
                ui->tableWidget->setItem(q,1,new QTableWidgetItem (j[index5]));
                ui->tableWidget->setItem(q,2,new QTableWidgetItem (k[index5]));
                ui->tableWidget->setItem(q,3,new QTableWidgetItem (x[index5]));
                ui->tableWidget->setItem(q,4,new QTableWidgetItem (m[index5]));
            }
        }
    }
}
