#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QDialog>
#include "admin.h"
namespace Ui {
class adminpage;
}

class adminpage : public QDialog
{
    Q_OBJECT

public:
    explicit adminpage(QWidget *parent = nullptr);
    ~adminpage();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();





    void on_pushButton_9_clicked();

    void on_lineEdit_textChanged();

    void showTime();

private:
    Ui::adminpage *ui;
};

#endif // ADMINPAGE_H
