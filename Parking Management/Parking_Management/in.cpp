#include "in.h"
#include "ui_in.h"
#include "car.h"
#include "carout.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "QPixmap"
#include <QButtonGroup>
#include <admin.h>
#include <mainwindow.h>
#include <QDebug>
#include<QTimer>
#include<QDateTime>
IN::IN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IN)
{
    ui->setupUi(this);
    //this->setWindowState(Qt::WindowMaximized);  //Full Screen.

    QTimer *timer = new QTimer(this);
     connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
     timer->start();

    QPixmap img(":/new/icons/icons/parking-lot-layout-blk.jpg");
    int W=ui->parklot->width();
    int H=ui->parklot->height();
    ui->parklot->setPixmap(img.scaled(W,H));

    QList<QAbstractButton*> slotList = AddSlotsToGroup();
    slotList[0]->setGeometry(40,135,61,81);
    slotList[1]->setGeometry(125,135,61,81);
    slotList[2]->setGeometry(210,135,61,81);
    slotList[3]->setGeometry(297,135,61,81);
    slotList[4]->setGeometry(385,135,61,81);
    slotList[5]->setGeometry(470,135,61,81);
    slotList[6]->setGeometry(558,135,61,81);
    slotList[7]->setGeometry(643,135,61,81);
    slotList[8]->setGeometry(731,135,61,81);

    slotList[9]->setGeometry(665,359,81,61);
    slotList[10]->setGeometry(665,438,81,61);
    slotList[11]->setGeometry(665,518,81,61);

    slotList[12]->setGeometry(88,359,81,61);
    slotList[13]->setGeometry(88,438,81,61);
    slotList[14]->setGeometry(88,518,81,61);



    for(int i=0; i<slotList.size()-6; i++)
        slotList[i]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/parking-512.png); } "
                               "QPushButton:hover { border-image: url(:/new/icons/icons/parking-5122.png)}");

    for(int i = slotList.size()-6; i<slotList.size()-3; i++)
        slotList[i]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/parking-512r1.png); } "
                                   "QPushButton:hover { border-image: url(:/new/icons/icons/parking-5122r2.png)}");

    for(int i = slotList.size()-3; i<slotList.size(); i++)
        slotList[i]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/parking-512l1.png); } "
                                   "QPushButton:hover { border-image: url(:/new/icons/icons/parking-5122l2.png)}");

    QStringList car_slot = BaseList(1);
    QStringList sl_no = BaseList(2);

    for(int i = 0; i< slotList.size()-6; i++){
        int index = car_slot.indexOf("SLOT "+ QString::number(i+1));
        if(index>=0){
            slotList[i]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/cars-5122.png); } "
                                       "QPushButton:hover { border-image: url(:/new/icons/icons/cars-512.png)}");
        }
    }
    for(int i = slotList.size()-6; i< slotList.size()-3; i++){
        int index = car_slot.indexOf("SLOT "+ QString::number(i+1));
        if(index>=0){
            slotList[i]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/cars-5122r1.png); } "
                                       "QPushButton:hover { border-image: url(:/new/icons/icons/cars-512r2.png)}");
        }
    }
    for(int i = slotList.size()-3; i< slotList.size(); i++){
        int index = car_slot.indexOf("SLOT "+ QString::number(i+1));
        if(index>=0){
            slotList[i]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/cars-5122l1.png); } "
                                       "QPushButton:hover { border-image: url(:/new/icons/icons/cars-512l2.png)}");
        }
    }

}

void IN::showTime()
{
    QTime time = QTime::currentTime();
    QString txt_time = time.toString();
    ui->label_2->setText(txt_time);
}

IN::~IN()
{
    delete ui;
}

QStringList IN::BaseList(int n)
{
    QStringList make_list, car_slot, sl_no, car_no;

    QFile file("C:/PMS data/Park/Slots_car/booked_slots.txt");
    if(!file.open(QFile::ReadWrite | QFile::Text)){
        QMessageBox::critical(this,"Error", "File not opened!");
    }
    else{
        QTextStream readtime(&file);

        QString slot = readtime.readLine();

        while(!slot.isNull()) //untill end of file and line
        {
            make_list = slot.split("===");

            car_slot.append(make_list[0]);
            sl_no.append(make_list[1]);
            car_no.append(make_list[2]);

            slot = readtime.readLine();
        }
        file.close();
    }
    if(n == 2)
    {
        return sl_no;
    }
    else if (n==3) {
        return car_no;
    }
    return car_slot;
}

bool IN::write_showSlotFile(int n)
{
    QFile slot("C:/PMS data/Park/showslot.txt");
    if(!slot.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::critical(this,"Error", "File not opened!"); //checking is file is opened or not
        return false;
    }
    else {
        QTextStream write(&slot);
        write<< "SLOT "<< n;
        slot.flush();
        slot.close();
    }
    return true;
}

bool IN::write_outSlotFile(int n)
{
    QFile outslot("C:/PMS data/Park/showoutslot.txt");
    if(!outslot.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::critical(this,"Error", "File not opened!"); //checking is file is opened or not
        return false;
    }
    else {
        QTextStream writeout(&outslot);
        writeout<< "SLOT "<< n;
        outslot.flush();
        outslot.close();
    }
    return true;
}

void IN::open_carOut()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,"TAKE OUT", "Do you want to Take out?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        hide();
        carout ob;
        ob.setModal(true);
        ob.exec();
    }
}
bool IN::open_carPark()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,"PARK", "Do you want to Park in Selected Slot?"
                                                              ,QMessageBox::Yes | QMessageBox ::No);
    if(reply==QMessageBox::Yes)
    {
        hide();
        CAR park;
        park.setModal(true);
        park.exec();
    }
    else {
        return false;
    }
    return true;
}

//working for QButtonGroup
QList<QAbstractButton*> IN::AddSlotsToGroup()
{
    QButtonGroup* slotsGroup = new QButtonGroup(this);

    slotsGroup->addButton(ui->parkSlot_1, 1);
    slotsGroup->addButton(ui->parkSlot_2, 2);
    slotsGroup->addButton(ui->parkSlot_3, 3);
    slotsGroup->addButton(ui->parkSlot_4, 4);
    slotsGroup->addButton(ui->parkSlot_5, 5);
    slotsGroup->addButton(ui->parkSlot_6, 6);
    slotsGroup->addButton(ui->parkSlot_7, 7);
    slotsGroup->addButton(ui->parkSlot_8, 8);
    slotsGroup->addButton(ui->parkSlot_9, 9);
    slotsGroup->addButton(ui->parkSlot_10, 10);
    slotsGroup->addButton(ui->parkSlot_11, 11);
    slotsGroup->addButton(ui->parkSlot_12, 12);
    slotsGroup->addButton(ui->parkSlot_13, 13);
    slotsGroup->addButton(ui->parkSlot_14, 14);
    slotsGroup->addButton(ui->parkSlot_15, 15);

    connect(slotsGroup, SIGNAL(buttonClicked(int)), this, SLOT(onAnySlotButtonClicked(int)));

    QList<QAbstractButton*> slotList = slotsGroup->buttons();

    return slotList;
}

void IN::onAnySlotButtonClicked(int id)
{
    qDebug()<< id;
    QList<QAbstractButton*> buttonList = AddSlotsToGroup();

    QStringList car_slot = BaseList(id);
    QString num = QString::number(id);
    int index = car_slot.indexOf("SLOT "+num);
    if(index >=0)
    {
        if(write_outSlotFile(id)==true)
            open_carOut();
    }
    else {
        if(write_showSlotFile(id))
        {
            if(id-1<buttonList.size()-6){
                buttonList[id-1]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/cars-5122.png); } "
                                                "QPushButton:hover { border-image: url(:/new/icons/icons/cars-512.png)}");

                if(open_carPark()==false){
                    buttonList[id-1]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/parking-512.png); } "
                                                    "QPushButton:hover { border-image: url(:/new/icons/icons/parking-5122.png)}");
                }
            }
            else if(id-1>=buttonList.size()-6 && id-1<buttonList.size()-3){
                buttonList[id-1]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/cars-5122r1.png); } "
                                                "QPushButton:hover { border-image: url(:/new/icons/icons/cars-512r2.png)}");

                if(open_carPark()==false){
                    buttonList[id-1]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/parking-512r1.png); } "
                                                    "QPushButton:hover { border-image: url(:/new/icons/icons/parking-5122r2.png)}");
                }
            }
            else if(id-1>=buttonList.size()-3 && id-1<buttonList.size()){
                buttonList[id-1]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/cars-5122l1.png); } "
                                                "QPushButton:hover { border-image: url(:/new/icons/icons/cars-512l2.png)}");

                if(open_carPark()==false){
                    buttonList[id-1]->setStyleSheet("QPushButton {border-image: url(:/new/icons/icons/parking-512l1.png); } "
                                                    "QPushButton:hover { border-image: url(:/new/icons/icons/parking-5122l2.png)}");
                }
            }
        }
    }
}
void IN::on_pushButton_clicked()
{
    hide();
    Admin ob3;
    ob3.setModal(true);
    ob3.exec();
}
