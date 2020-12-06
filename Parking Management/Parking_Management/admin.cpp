#include "admin.h"
#include "ui_admin.h"
#include "QMessageBox"
#include <in.h>
#include<QDateTime>
#include<QTimer>
Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    //this->setWindowState(Qt::WindowMaximized);  //Full Screen.
    ui->username->setPlaceholderText("Enter your username");
    ui->password->setPlaceholderText("Enter your password");
   QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();
}
void Admin::showTime()
{
    QTime time = QTime::currentTime();
    QString txt_time = time.toString();
    ui->label_4->setText(txt_time);
}
Admin::~Admin()
{
    delete ui;
}

void Admin::on_pushButton_clicked()
{
    hide();
    IN ob5;
    ob5.setModal(true);
    ob5.exec();
}

void Admin::on_pushButton_2_clicked()
{
    QString name = ui->username->text();
    QString pass = ui->password->text();
    if(name == "mantravar" && pass == "mantravar")
    {
        adminpage ob6;
        hide();
        ob6.setModal(true);
        ob6.exec();

    }
    else {
        QMessageBox::critical(this,"Error","Wrong Credentials!!");
    }
}
