/********************************************************************************
** Form generated from reading UI file 'creditcardform.ui'
**
** Created: Mon Dec 5 10:16:45 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCARDFORM_H
#define UI_CREDITCARDFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_creditcardform
{
public:
    QWidget *centralWidget;
    QLabel *FirstNameLabel;
    QLabel *LastNameLabel;
    QLineEdit *FirstNamelineEdit;
    QLineEdit *LastNamelineEdit;
    QLabel *CreditCardLabel;
    QLineEdit *CreditCardlineEdit_1;
    QLabel *ExpDateLabel;
    QLabel *MonthLabel;
    QLabel *YearLabel;
    QSpinBox *MonthspinBox;
    QSpinBox *YearspinBox;
    QPushButton *SubmitpushButton;
    QPushButton *ClearpushButton;
    QLabel *SecurityCodeLabel;
    QLineEdit *SecurityCodelineEdit;
    QLabel *label;
    QLineEdit *CreditCardlineEdit_2;
    QLineEdit *CreditCardlineEdit_3;
    QLineEdit *CreditCardlineEdit_4;

    void setupUi(QDialog *creditcardform)
    {
        if (creditcardform->objectName().isEmpty())
            creditcardform->setObjectName(QString::fromUtf8("creditcardform"));
        creditcardform->resize(289, 199);
        creditcardform->setMinimumSize(QSize(289, 199));
        creditcardform->setMaximumSize(QSize(289, 199));
        centralWidget = new QWidget(creditcardform);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 301, 211));
        centralWidget->setMinimumSize(QSize(301, 211));
        centralWidget->setMaximumSize(QSize(301, 211));
        FirstNameLabel = new QLabel(centralWidget);
        FirstNameLabel->setObjectName(QString::fromUtf8("FirstNameLabel"));
        FirstNameLabel->setGeometry(QRect(10, 10, 61, 16));
        LastNameLabel = new QLabel(centralWidget);
        LastNameLabel->setObjectName(QString::fromUtf8("LastNameLabel"));
        LastNameLabel->setGeometry(QRect(170, 10, 71, 16));
        FirstNamelineEdit = new QLineEdit(centralWidget);
        FirstNamelineEdit->setObjectName(QString::fromUtf8("FirstNamelineEdit"));
        FirstNamelineEdit->setGeometry(QRect(10, 30, 121, 20));
        FirstNamelineEdit->setFocusPolicy(Qt::StrongFocus);
        FirstNamelineEdit->setInputMask(QString::fromUtf8("AAAAAAAAAAAAAAAAAAAAAAAAA; "));
        FirstNamelineEdit->setText(QString::fromUtf8(""));
        FirstNamelineEdit->setCursorPosition(0);
        FirstNamelineEdit->setReadOnly(false);
        FirstNamelineEdit->setPlaceholderText(QString::fromUtf8(""));
        LastNamelineEdit = new QLineEdit(centralWidget);
        LastNamelineEdit->setObjectName(QString::fromUtf8("LastNamelineEdit"));
        LastNamelineEdit->setGeometry(QRect(170, 30, 113, 20));
        LastNamelineEdit->setInputMask(QString::fromUtf8("AAAAAAAAAAAAAAAAAAAAAAAAA; "));
        LastNamelineEdit->setText(QString::fromUtf8(""));
        LastNamelineEdit->setCursorPosition(25);
        LastNamelineEdit->setPlaceholderText(QString::fromUtf8(""));
        CreditCardLabel = new QLabel(centralWidget);
        CreditCardLabel->setObjectName(QString::fromUtf8("CreditCardLabel"));
        CreditCardLabel->setGeometry(QRect(10, 80, 111, 16));
        CreditCardlineEdit_1 = new QLineEdit(centralWidget);
        CreditCardlineEdit_1->setObjectName(QString::fromUtf8("CreditCardlineEdit_1"));
        CreditCardlineEdit_1->setGeometry(QRect(10, 100, 31, 20));
        CreditCardlineEdit_1->setInputMask(QString::fromUtf8("9999; "));
        CreditCardlineEdit_1->setText(QString::fromUtf8(""));
        CreditCardlineEdit_1->setCursorPosition(4);
        CreditCardlineEdit_1->setPlaceholderText(QString::fromUtf8(""));
        ExpDateLabel = new QLabel(centralWidget);
        ExpDateLabel->setObjectName(QString::fromUtf8("ExpDateLabel"));
        ExpDateLabel->setGeometry(QRect(170, 60, 81, 16));
        MonthLabel = new QLabel(centralWidget);
        MonthLabel->setObjectName(QString::fromUtf8("MonthLabel"));
        MonthLabel->setGeometry(QRect(170, 80, 46, 13));
        YearLabel = new QLabel(centralWidget);
        YearLabel->setObjectName(QString::fromUtf8("YearLabel"));
        YearLabel->setGeometry(QRect(220, 80, 46, 13));
        MonthspinBox = new QSpinBox(centralWidget);
        MonthspinBox->setObjectName(QString::fromUtf8("MonthspinBox"));
        MonthspinBox->setGeometry(QRect(170, 100, 42, 22));
        MonthspinBox->setMinimum(1);
        MonthspinBox->setMaximum(12);
        YearspinBox = new QSpinBox(centralWidget);
        YearspinBox->setObjectName(QString::fromUtf8("YearspinBox"));
        YearspinBox->setGeometry(QRect(220, 100, 51, 22));
        YearspinBox->setMinimum(2011);
        YearspinBox->setMaximum(2016);
        SubmitpushButton = new QPushButton(centralWidget);
        SubmitpushButton->setObjectName(QString::fromUtf8("SubmitpushButton"));
        SubmitpushButton->setGeometry(QRect(10, 170, 75, 23));
        ClearpushButton = new QPushButton(centralWidget);
        ClearpushButton->setObjectName(QString::fromUtf8("ClearpushButton"));
        ClearpushButton->setGeometry(QRect(90, 170, 75, 23));
        SecurityCodeLabel = new QLabel(centralWidget);
        SecurityCodeLabel->setObjectName(QString::fromUtf8("SecurityCodeLabel"));
        SecurityCodeLabel->setGeometry(QRect(10, 140, 81, 16));
        SecurityCodelineEdit = new QLineEdit(centralWidget);
        SecurityCodelineEdit->setObjectName(QString::fromUtf8("SecurityCodelineEdit"));
        SecurityCodelineEdit->setGeometry(QRect(90, 140, 71, 20));
        SecurityCodelineEdit->setCursorPosition(0);
        SecurityCodelineEdit->setPlaceholderText(QString::fromUtf8(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 140, 81, 61));
        label->setPixmap(QPixmap(QString::fromUtf8("1317789508_credit_cards.png")));
        label->setScaledContents(true);
        CreditCardlineEdit_2 = new QLineEdit(centralWidget);
        CreditCardlineEdit_2->setObjectName(QString::fromUtf8("CreditCardlineEdit_2"));
        CreditCardlineEdit_2->setGeometry(QRect(50, 100, 31, 20));
        CreditCardlineEdit_2->setInputMask(QString::fromUtf8("9999; "));
        CreditCardlineEdit_2->setText(QString::fromUtf8(""));
        CreditCardlineEdit_2->setCursorPosition(4);
        CreditCardlineEdit_2->setPlaceholderText(QString::fromUtf8(""));
        CreditCardlineEdit_3 = new QLineEdit(centralWidget);
        CreditCardlineEdit_3->setObjectName(QString::fromUtf8("CreditCardlineEdit_3"));
        CreditCardlineEdit_3->setGeometry(QRect(90, 100, 31, 20));
        CreditCardlineEdit_3->setInputMask(QString::fromUtf8("9999; "));
        CreditCardlineEdit_3->setText(QString::fromUtf8(""));
        CreditCardlineEdit_3->setCursorPosition(4);
        CreditCardlineEdit_3->setPlaceholderText(QString::fromUtf8(""));
        CreditCardlineEdit_4 = new QLineEdit(centralWidget);
        CreditCardlineEdit_4->setObjectName(QString::fromUtf8("CreditCardlineEdit_4"));
        CreditCardlineEdit_4->setGeometry(QRect(130, 100, 31, 20));
        CreditCardlineEdit_4->setInputMask(QString::fromUtf8("9999; "));
        CreditCardlineEdit_4->setText(QString::fromUtf8(""));
        CreditCardlineEdit_4->setCursorPosition(4);
        CreditCardlineEdit_4->setPlaceholderText(QString::fromUtf8(""));
        QWidget::setTabOrder(FirstNamelineEdit, LastNamelineEdit);
        QWidget::setTabOrder(LastNamelineEdit, CreditCardlineEdit_1);
        QWidget::setTabOrder(CreditCardlineEdit_1, CreditCardlineEdit_2);
        QWidget::setTabOrder(CreditCardlineEdit_2, CreditCardlineEdit_3);
        QWidget::setTabOrder(CreditCardlineEdit_3, CreditCardlineEdit_4);
        QWidget::setTabOrder(CreditCardlineEdit_4, MonthspinBox);
        QWidget::setTabOrder(MonthspinBox, YearspinBox);
        QWidget::setTabOrder(YearspinBox, SecurityCodelineEdit);
        QWidget::setTabOrder(SecurityCodelineEdit, SubmitpushButton);
        QWidget::setTabOrder(SubmitpushButton, ClearpushButton);

        retranslateUi(creditcardform);

        QMetaObject::connectSlotsByName(creditcardform);
    } // setupUi

    void retranslateUi(QDialog *creditcardform)
    {
        creditcardform->setWindowTitle(QApplication::translate("creditcardform", "Payment Entry", 0, QApplication::UnicodeUTF8));
        FirstNameLabel->setText(QApplication::translate("creditcardform", "First Name", 0, QApplication::UnicodeUTF8));
        LastNameLabel->setText(QApplication::translate("creditcardform", "Last Name", 0, QApplication::UnicodeUTF8));
        CreditCardLabel->setText(QApplication::translate("creditcardform", "Credit Card Number", 0, QApplication::UnicodeUTF8));
        ExpDateLabel->setText(QApplication::translate("creditcardform", "Expiration Date", 0, QApplication::UnicodeUTF8));
        MonthLabel->setText(QApplication::translate("creditcardform", "Month", 0, QApplication::UnicodeUTF8));
        YearLabel->setText(QApplication::translate("creditcardform", "Year", 0, QApplication::UnicodeUTF8));
        SubmitpushButton->setText(QApplication::translate("creditcardform", "Submit", 0, QApplication::UnicodeUTF8));
        ClearpushButton->setText(QApplication::translate("creditcardform", "Clear", 0, QApplication::UnicodeUTF8));
        SecurityCodeLabel->setText(QApplication::translate("creditcardform", "Security Code", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        SecurityCodelineEdit->setToolTip(QApplication::translate("creditcardform", "Your security code can be found at the end of the signature strip on the back of your card.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        SecurityCodelineEdit->setStatusTip(QApplication::translate("creditcardform", "Your security code can be found at the end of the signature strip on the back of your card.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        SecurityCodelineEdit->setWhatsThis(QApplication::translate("creditcardform", "Your security code can be found at the end of the signature strip on the back of your card.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        SecurityCodelineEdit->setInputMask(QApplication::translate("creditcardform", "999; ", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class creditcardform: public Ui_creditcardform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCARDFORM_H
