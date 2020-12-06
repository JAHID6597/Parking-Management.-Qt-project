#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

void user::on_pushButton_3_clicked()
{
    hide();
    secondwindow ob4;
    ob4.setModal(true);
    ob4.exec();
}

void user::on_pushButton_clicked()
{
    hide();
    IN ob12;
    ob12.setModal(true);
    ob12.exec();
}
