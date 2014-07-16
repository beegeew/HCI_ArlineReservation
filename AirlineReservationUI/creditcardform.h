#ifndef CREDITCARDFORM_H
#define CREDITCARDFORM_H

#include <QDialog>

namespace Ui {
    class creditcardform;
}

class creditcardform : public QDialog
{
    Q_OBJECT

public:
    explicit creditcardform(char,QWidget *parent = 0);
    void returnData(QString*, QString*, QString*,QString*,int*,int*);
    ~creditcardform();

private slots:
   void on_ClearpushButton_clicked();

   void on_SubmitpushButton_clicked();

private:
    Ui::creditcardform *ui;
    char ccType;
};

#endif // CREDITCARDFORM_H
