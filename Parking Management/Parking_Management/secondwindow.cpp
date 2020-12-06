#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "QPixmap"
#include <in.h>

secondwindow::secondwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondwindow)
{
    ui->setupUi(this);
    QPixmap img1(":/new/prefix1/Image/Car Parking Zone.jpg");
    ui->pc->setPixmap(img1);
}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::on_pushButton_clicked()
{
   hide();
   IN ob2;
   ob2.setModal(true);
   ob2.exec();
}

void secondwindow::on_pushButton_2_clicked()
{

}
