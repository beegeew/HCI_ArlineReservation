#include "creditcardform.h"
#include "ui_creditcardform.h"
#include <QDate>
#include <QMessageBox>


creditcardform::creditcardform(char cType,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creditcardform)
{
    ui->setupUi(this);

    ccType = cType;
    QImage* ccpic;
    ccpic = new QImage("../cc.png");
    ccpic->scaled(81,61);
    QPixmap myPix;

    myPix = QPixmap::fromImage((*ccpic));
    ui->label->setPixmap(myPix);
}

creditcardform::~creditcardform()
{
    delete ui;
}


void creditcardform::on_ClearpushButton_clicked()
{
    ui->FirstNamelineEdit->clear();
    ui->LastNamelineEdit->clear();
    ui->CreditCardlineEdit_1->clear();
    ui->CreditCardlineEdit_2->clear();
    ui->CreditCardlineEdit_3->clear();
    ui->CreditCardlineEdit_4->clear();
    ui->MonthspinBox->setValue(1);
    ui->YearspinBox->setValue(2011);
    ui->SecurityCodelineEdit->clear();
}



void creditcardform::on_SubmitpushButton_clicked()
{

    QDate today;
    today = QDate::currentDate();

    if (ui->FirstNamelineEdit->text()==NULL)
        QMessageBox::warning(this,"Invalid!","Last name cannot be blank.");
    else if (ui->LastNamelineEdit->text()==NULL)
        QMessageBox::warning(this,"Invalid!","First name cannot be blank");
    else if ((ui->CreditCardlineEdit_1->text().length() < 4)||
       (ui->CreditCardlineEdit_2->text().length() < 4)||
       (ui->CreditCardlineEdit_3->text().length() < 4)||
       (ui->CreditCardlineEdit_4->text().length() < 4))
        QMessageBox::warning(this,"Invalid!","Invalid credit card number, must be 16 digits.");
    else if (ui->SecurityCodelineEdit->text().length() < 3)
        QMessageBox::warning(this,"Invalid!","Security code must be 3 digits.");
    else if ((ui->MonthspinBox->value() < today.currentDate().month())&&(ui->YearspinBox->value() <= today.currentDate().year()))
        QMessageBox::warning(this,"Invalid!","Credit card expiration date invalid.");
    else
    {
        this->accept();
        this->close();
        QMessageBox::about(this,"Thanks!","Payment Confirmed!");
    }
}

void creditcardform::returnData(QString* fName, QString* lName, QString* ccNum, QString* secCode, int* expMonth, int* expYear)
{
    (*fName) = ui->FirstNamelineEdit->text();
    (*lName) = ui->LastNamelineEdit->text();
    (*ccNum) = QString("%1-%2-%3-%4").arg(ui->CreditCardlineEdit_1->text()).arg(ui->CreditCardlineEdit_2->text()).arg(ui->CreditCardlineEdit_3->text()).arg(ui->CreditCardlineEdit_4->text());
    (*secCode) = ui->SecurityCodelineEdit->text();
    (*expMonth) = ui->MonthspinBox->value();
    (*expYear) = ui->YearspinBox->value();
}
