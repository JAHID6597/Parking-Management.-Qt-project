#ifndef CAR_H
#define CAR_H

#include <QDialog>
#include "in.h"
namespace Ui {
class CAR;
}

class CAR : public QDialog
{
    Q_OBJECT

public:
    explicit CAR(QWidget *parent = nullptr);
    ~CAR();

private slots:

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::CAR *ui;
};

#endif // CAR_H
