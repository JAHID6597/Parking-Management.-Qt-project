#ifndef CAROUT_H
#define CAROUT_H

#include <QDialog>

namespace Ui {
class carout;
}

class carout : public QDialog
{
    Q_OBJECT

public:
    explicit carout(QWidget *parent = nullptr);
    ~carout();
    QStringList intime_list(int n);

private slots:

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::carout *ui;
};

#endif // CAROUT_H
