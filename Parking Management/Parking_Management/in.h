#ifndef IN_H
#define IN_H

#include <QDialog>
#include "user.h"
#include "car.h"
#include "QButtonGroup"

namespace Ui {
class IN;
}

class IN : public QDialog
{
    Q_OBJECT

public:
    explicit IN(QWidget *parent = nullptr);
    ~IN();
    QStringList BaseList(int n);
    bool write_showSlotFile(int n);
    void open_carOut();
    bool open_carPark();
    bool write_outSlotFile(int n);

private slots:

    /*void on_carButton_1_clicked();

    void on_carButton_2_clicked();

    void on_carButton_3_clicked();

    void on_carButton_4_clicked();

    void on_carButton_5_clicked();

    void on_carButton_6_clicked();

    void on_carButton_7_clicked();

    void on_carButton_8_clicked();

    void on_carButton_9_clicked();

    void on_carButton_10_clicked();*/

    QList<QAbstractButton*> AddSlotsToGroup();

    void onAnySlotButtonClicked(int id);

    void on_pushButton_clicked();

    void showTime();

private:
    Ui::IN *ui;
};

#endif // IN_H
