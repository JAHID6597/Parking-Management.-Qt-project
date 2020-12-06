#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include "adminpage.h"
namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void showTime();

private:
    Ui::Admin *ui;

};

#endif // ADMIN_H
