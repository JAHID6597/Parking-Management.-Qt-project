#include "search.h"
#include "ui_search.h"
#include"QMessageBox"
#include"QFile"
#include"QTextStream"
#include"adminpage.h"
#include"QRegExp"
SEARCH::SEARCH(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SEARCH)
{
    ui->setupUi(this);


    QFile slot_file("C:/PMS data/Park/Slots_car/timer.txt");
    if(!slot_file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::critical(this,"Error", "File not opened!");
    }
    else{
        QTextStream booked_slot(&slot_file);


        slot_file.flush();
        slot_file.close();}


}

SEARCH::~SEARCH()
{
    delete ui;
}

void SEARCH::on_pushButton_2_clicked()
{



}


void SEARCH::on_pushButton_clicked()
{
    hide();
    adminpage back;
    back.setModal(true);
    back.exec();
}

void SEARCH::on_lineEdit_textChanged(const QString &arg1)
{










}


