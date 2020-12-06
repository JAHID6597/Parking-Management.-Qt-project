#include "out.h"
#include "ui_out.h"
#include "carout.h"

OUT::OUT(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OUT)
{
    ui->setupUi(this);
}

OUT::~OUT()
{
    delete ui;
}

void OUT::on_pushButton_clicked()
{
    hide();
    user ob15;
    ob15.setModal(true);
    ob15.exec();
}

void OUT::on_pushButton_2_clicked()
{
    carout out;
    out.setModal(true);
    out.exec();
}
