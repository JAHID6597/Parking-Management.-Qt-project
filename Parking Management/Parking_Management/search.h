#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>

namespace Ui {
class SEARCH;
}

class SEARCH : public QDialog
{
    Q_OBJECT

public:
    explicit SEARCH(QWidget *parent = nullptr);
    ~SEARCH();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::SEARCH *ui;
QStringList p;
};

#endif // SEARCH_H
