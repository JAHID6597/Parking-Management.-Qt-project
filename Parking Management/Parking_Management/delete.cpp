#include "delete.h"
#include "ui_delete.h"
#include"QDirIterator"
#include"QDebug"
#include"QMessageBox"
#include"adminpage.h"
Delete::Delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);
    //this->setWindowState(Qt::WindowMaximized);  //Full Screen.
    ui->lineEdit->setPlaceholderText("Enter your password");
}

Delete::~Delete()
{
    delete ui;
}

void Delete::on_pushButton_clicked()
{
    QString password = ui->lineEdit->text();

    if(password == "password")
    {
        QMessageBox::StandardButton reply = QMessageBox::question(this,"DELETE","Are you sure you want to DELETE all files?",QMessageBox::Yes | QMessageBox::No);
        if(reply==QMessageBox::Yes){

            QDirIterator it("C:/PMS data", QDirIterator::Subdirectories);
            QStringList illegalFileTypes;
            illegalFileTypes << ".txt";

            while (it.hasNext())
            {

                qDebug()<<"Processing..."<<it.next();
                bool AllFile;

                foreach (QString illegalType, illegalFileTypes)
                {
                    if (it.fileInfo().absoluteFilePath().endsWith(illegalType, Qt::CaseInsensitive))
                    {
                        AllFile = true;
                        break;
                    }
                    else
                    {
                        AllFile = false;
                    }
                }

                if (AllFile)
                {
                    QDir dir;
                    dir.remove(it.filePath());
                    qDebug()<<"Removed All file.";
                }

            }
            QMessageBox::information(this,"Delete","Deleted successfully.");
            hide();
        }
    }
    else {
        QMessageBox::critical(this,"Error","Wrong Password!");
    }
}
