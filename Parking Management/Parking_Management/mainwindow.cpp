#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include <QTimer>
#include <in.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // this->setWindowState(Qt::WindowMaximized);  //Full Screen.
    QPixmap img(":/new/prefix1/Image/banner_city.jpg");
    int W=ui->widePic->width();
    int H=ui->widePic->height();
    ui->widePic->setPixmap(img.scaled(W,H));

    QTimer::singleShot(3500, this, SLOT(auto_open()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::auto_open()
{
    hide();
    IN ob1;
    ob1.setModal(true);
    ob1.exec();
}
