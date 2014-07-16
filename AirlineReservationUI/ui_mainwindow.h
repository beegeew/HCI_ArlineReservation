/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Dec 5 10:16:45 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include <coloredstateslabel.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *flightInfoGropBox;
    QCalendarWidget *departingCalendar;
    QCalendarWidget *ReturnCal;
    QLabel *DepartLabel;
    QComboBox *departCBox;
    QLabel *departDateLabel;
    QLabel *arriveLabel;
    QComboBox *ArriveCBox;
    QLabel *arriveDateLabel;
    QRadioButton *roundTripRadio;
    QRadioButton *oneWayLabel;
    QLabel *flightTypeLabel;
    QSpinBox *reserveSpinBox;
    QPushButton *pushButton;
    QLabel *seatLabel;
    QGroupBox *mapGroupBox;
    coloredStatesLabel *mapLabel;
    coloredStatesLabel *colormap;
    QGroupBox *suggestionGroupBox;
    QTextEdit *suggestionTextBox;
    QGroupBox *summaryGroupBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *sumDepartDateLabel;
    QLabel *label_11;
    QPushButton *resetAllButton;
    QLabel *DepartDate;
    QLabel *DepartLocation;
    QLabel *Destination;
    QLabel *ReturnDate;
    QLabel *Seats;
    QLabel *label;
    QLabel *typeFlight;
    QLabel *label_2;
    QLabel *TotalCost;
    QLabel *DepartFlightInfo;
    QLabel *departFlightNo;
    QLabel *ReturnFlightInfo;
    QLabel *ReturnFlightNo;
    QGroupBox *groupBox_5;
    QPushButton *confirmationButton;
    QLabel *cctype;
    QRadioButton *visa;
    QRadioButton *master;
    QRadioButton *disc;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *custNameField;
    QLabel *label_5;
    QLabel *resNum;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(769, 670);
        MainWindow->setMinimumSize(QSize(769, 670));
        MainWindow->setMaximumSize(QSize(769, 670));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        flightInfoGropBox = new QGroupBox(centralwidget);
        flightInfoGropBox->setObjectName(QString::fromUtf8("flightInfoGropBox"));
        flightInfoGropBox->setGeometry(QRect(10, 40, 511, 291));
        departingCalendar = new QCalendarWidget(flightInfoGropBox);
        departingCalendar->setObjectName(QString::fromUtf8("departingCalendar"));
        departingCalendar->setGeometry(QRect(10, 120, 191, 155));
        QFont font;
        font.setPointSize(7);
        departingCalendar->setFont(font);
        departingCalendar->setMinimumDate(QDate(2011, 10, 7));
        departingCalendar->setMaximumDate(QDate(2012, 10, 7));
        departingCalendar->setGridVisible(true);
        departingCalendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        ReturnCal = new QCalendarWidget(flightInfoGropBox);
        ReturnCal->setObjectName(QString::fromUtf8("ReturnCal"));
        ReturnCal->setGeometry(QRect(240, 120, 191, 155));
        ReturnCal->setFont(font);
        ReturnCal->setMinimumDate(QDate(2011, 10, 8));
        ReturnCal->setMaximumDate(QDate(2012, 10, 8));
        ReturnCal->setGridVisible(true);
        ReturnCal->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        DepartLabel = new QLabel(flightInfoGropBox);
        DepartLabel->setObjectName(QString::fromUtf8("DepartLabel"));
        DepartLabel->setGeometry(QRect(10, 20, 111, 41));
        departCBox = new QComboBox(flightInfoGropBox);
        departCBox->setObjectName(QString::fromUtf8("departCBox"));
        departCBox->setGeometry(QRect(10, 60, 121, 21));
        departDateLabel = new QLabel(flightInfoGropBox);
        departDateLabel->setObjectName(QString::fromUtf8("departDateLabel"));
        departDateLabel->setGeometry(QRect(10, 90, 91, 21));
        arriveLabel = new QLabel(flightInfoGropBox);
        arriveLabel->setObjectName(QString::fromUtf8("arriveLabel"));
        arriveLabel->setGeometry(QRect(240, 30, 81, 21));
        ArriveCBox = new QComboBox(flightInfoGropBox);
        ArriveCBox->setObjectName(QString::fromUtf8("ArriveCBox"));
        ArriveCBox->setGeometry(QRect(240, 60, 121, 21));
        arriveDateLabel = new QLabel(flightInfoGropBox);
        arriveDateLabel->setObjectName(QString::fromUtf8("arriveDateLabel"));
        arriveDateLabel->setGeometry(QRect(240, 90, 81, 21));
        roundTripRadio = new QRadioButton(flightInfoGropBox);
        roundTripRadio->setObjectName(QString::fromUtf8("roundTripRadio"));
        roundTripRadio->setGeometry(QRect(440, 260, 71, 17));
        oneWayLabel = new QRadioButton(flightInfoGropBox);
        oneWayLabel->setObjectName(QString::fromUtf8("oneWayLabel"));
        oneWayLabel->setGeometry(QRect(440, 240, 82, 17));
        flightTypeLabel = new QLabel(flightInfoGropBox);
        flightTypeLabel->setObjectName(QString::fromUtf8("flightTypeLabel"));
        flightTypeLabel->setGeometry(QRect(440, 220, 71, 16));
        reserveSpinBox = new QSpinBox(flightInfoGropBox);
        reserveSpinBox->setObjectName(QString::fromUtf8("reserveSpinBox"));
        reserveSpinBox->setGeometry(QRect(440, 170, 61, 21));
        reserveSpinBox->setReadOnly(false);
        reserveSpinBox->setMinimum(1);
        reserveSpinBox->setMaximum(3);
        pushButton = new QPushButton(flightInfoGropBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 0, 141, 23));
        seatLabel = new QLabel(flightInfoGropBox);
        seatLabel->setObjectName(QString::fromUtf8("seatLabel"));
        seatLabel->setGeometry(QRect(440, 120, 51, 41));
        seatLabel->setWordWrap(true);
        mapGroupBox = new QGroupBox(centralwidget);
        mapGroupBox->setObjectName(QString::fromUtf8("mapGroupBox"));
        mapGroupBox->setGeometry(QRect(10, 330, 511, 331));
        mapLabel = new coloredStatesLabel(mapGroupBox);
        mapLabel->setObjectName(QString::fromUtf8("mapLabel"));
        mapLabel->setGeometry(QRect(10, 20, 471, 301));
        mapLabel->setMouseTracking(true);
        mapLabel->setPixmap(QPixmap(QString::fromUtf8(":/usmap")));
        mapLabel->setScaledContents(true);
        mapLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        colormap = new coloredStatesLabel(mapGroupBox);
        colormap->setObjectName(QString::fromUtf8("colormap"));
        colormap->setGeometry(QRect(10, 20, 471, 301));
        colormap->setMinimumSize(QSize(471, 301));
        colormap->setMaximumSize(QSize(471, 301));
        colormap->setMouseTracking(true);
        colormap->setScaledContents(true);
        colormap->setTextInteractionFlags(Qt::NoTextInteraction);
        colormap->raise();
        mapLabel->raise();
        suggestionGroupBox = new QGroupBox(centralwidget);
        suggestionGroupBox->setObjectName(QString::fromUtf8("suggestionGroupBox"));
        suggestionGroupBox->setGeometry(QRect(400, 30, 361, 121));
        QFont font1;
        font1.setKerning(true);
        suggestionGroupBox->setFont(font1);
        suggestionTextBox = new QTextEdit(suggestionGroupBox);
        suggestionTextBox->setObjectName(QString::fromUtf8("suggestionTextBox"));
        suggestionTextBox->setGeometry(QRect(10, 20, 341, 91));
        suggestionTextBox->setReadOnly(true);
        suggestionTextBox->setTextInteractionFlags(Qt::NoTextInteraction);
        summaryGroupBox = new QGroupBox(centralwidget);
        summaryGroupBox->setObjectName(QString::fromUtf8("summaryGroupBox"));
        summaryGroupBox->setGeometry(QRect(530, 210, 231, 321));
        label_6 = new QLabel(summaryGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 111, 21));
        label_7 = new QLabel(summaryGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 60, 81, 16));
        label_8 = new QLabel(summaryGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(130, 100, 81, 16));
        sumDepartDateLabel = new QLabel(summaryGroupBox);
        sumDepartDateLabel->setObjectName(QString::fromUtf8("sumDepartDateLabel"));
        sumDepartDateLabel->setGeometry(QRect(130, 20, 91, 16));
        label_11 = new QLabel(summaryGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 100, 111, 16));
        resetAllButton = new QPushButton(summaryGroupBox);
        resetAllButton->setObjectName(QString::fromUtf8("resetAllButton"));
        resetAllButton->setGeometry(QRect(10, 290, 211, 23));
        DepartDate = new QLabel(summaryGroupBox);
        DepartDate->setObjectName(QString::fromUtf8("DepartDate"));
        DepartDate->setGeometry(QRect(130, 40, 91, 16));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        DepartDate->setFont(font2);
        DepartLocation = new QLabel(summaryGroupBox);
        DepartLocation->setObjectName(QString::fromUtf8("DepartLocation"));
        DepartLocation->setGeometry(QRect(10, 40, 131, 16));
        DepartLocation->setFont(font2);
        Destination = new QLabel(summaryGroupBox);
        Destination->setObjectName(QString::fromUtf8("Destination"));
        Destination->setGeometry(QRect(10, 80, 131, 16));
        Destination->setFont(font2);
        ReturnDate = new QLabel(summaryGroupBox);
        ReturnDate->setObjectName(QString::fromUtf8("ReturnDate"));
        ReturnDate->setGeometry(QRect(130, 120, 131, 16));
        ReturnDate->setFont(font2);
        Seats = new QLabel(summaryGroupBox);
        Seats->setObjectName(QString::fromUtf8("Seats"));
        Seats->setGeometry(QRect(10, 120, 131, 16));
        Seats->setFont(font2);
        label = new QLabel(summaryGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 140, 61, 16));
        typeFlight = new QLabel(summaryGroupBox);
        typeFlight->setObjectName(QString::fromUtf8("typeFlight"));
        typeFlight->setGeometry(QRect(10, 160, 81, 16));
        typeFlight->setFont(font2);
        label_2 = new QLabel(summaryGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 180, 81, 16));
        TotalCost = new QLabel(summaryGroupBox);
        TotalCost->setObjectName(QString::fromUtf8("TotalCost"));
        TotalCost->setGeometry(QRect(10, 210, 101, 16));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        TotalCost->setFont(font3);
        DepartFlightInfo = new QLabel(summaryGroupBox);
        DepartFlightInfo->setObjectName(QString::fromUtf8("DepartFlightInfo"));
        DepartFlightInfo->setGeometry(QRect(130, 60, 101, 16));
        departFlightNo = new QLabel(summaryGroupBox);
        departFlightNo->setObjectName(QString::fromUtf8("departFlightNo"));
        departFlightNo->setGeometry(QRect(130, 80, 46, 13));
        departFlightNo->setFont(font2);
        ReturnFlightInfo = new QLabel(summaryGroupBox);
        ReturnFlightInfo->setObjectName(QString::fromUtf8("ReturnFlightInfo"));
        ReturnFlightInfo->setGeometry(QRect(130, 140, 101, 16));
        ReturnFlightNo = new QLabel(summaryGroupBox);
        ReturnFlightNo->setObjectName(QString::fromUtf8("ReturnFlightNo"));
        ReturnFlightNo->setGeometry(QRect(130, 160, 46, 13));
        ReturnFlightNo->setFont(font2);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(530, 550, 221, 111));
        confirmationButton = new QPushButton(groupBox_5);
        confirmationButton->setObjectName(QString::fromUtf8("confirmationButton"));
        confirmationButton->setGeometry(QRect(20, 70, 191, 23));
        cctype = new QLabel(groupBox_5);
        cctype->setObjectName(QString::fromUtf8("cctype"));
        cctype->setGeometry(QRect(10, 20, 71, 16));
        visa = new QRadioButton(groupBox_5);
        visa->setObjectName(QString::fromUtf8("visa"));
        visa->setGeometry(QRect(10, 40, 82, 17));
        master = new QRadioButton(groupBox_5);
        master->setObjectName(QString::fromUtf8("master"));
        master->setGeometry(QRect(100, 20, 82, 17));
        disc = new QRadioButton(groupBox_5);
        disc->setObjectName(QString::fromUtf8("disc"));
        disc->setGeometry(QRect(100, 50, 82, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(95, 10, 511, 20));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(530, 160, 61, 16));
        custNameField = new QLabel(centralwidget);
        custNameField->setObjectName(QString::fromUtf8("custNameField"));
        custNameField->setGeometry(QRect(530, 180, 111, 16));
        custNameField->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(660, 160, 111, 16));
        resNum = new QLabel(centralwidget);
        resNum->setObjectName(QString::fromUtf8("resNum"));
        resNum->setGeometry(QRect(660, 180, 46, 13));
        resNum->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(pushButton, departCBox);
        QWidget::setTabOrder(departCBox, ArriveCBox);
        QWidget::setTabOrder(ArriveCBox, departingCalendar);
        QWidget::setTabOrder(departingCalendar, ReturnCal);
        QWidget::setTabOrder(ReturnCal, reserveSpinBox);
        QWidget::setTabOrder(reserveSpinBox, oneWayLabel);
        QWidget::setTabOrder(oneWayLabel, roundTripRadio);
        QWidget::setTabOrder(roundTripRadio, resetAllButton);
        QWidget::setTabOrder(resetAllButton, visa);
        QWidget::setTabOrder(visa, master);
        QWidget::setTabOrder(master, disc);
        QWidget::setTabOrder(disc, confirmationButton);
        QWidget::setTabOrder(confirmationButton, suggestionTextBox);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "We Fly U Reservation System", 0, QApplication::UnicodeUTF8));
        flightInfoGropBox->setTitle(QApplication::translate("MainWindow", "General Flight Info", 0, QApplication::UnicodeUTF8));
        DepartLabel->setText(QApplication::translate("MainWindow", "Depart From:", 0, QApplication::UnicodeUTF8));
        departCBox->clear();
        departCBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Choose a State..", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Alabama", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Alaska", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Arizona", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Arkansas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "California", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Colorado", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Connecticut", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Delaware", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "District of Columbia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Florida", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Georgia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Hawaii", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Idaho", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Illinois", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Indiana", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Iowa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Kansas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Kentucky", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Louisiana", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Maine", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Maryland", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Massachusetts", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Michigan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Minnesota", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Mississippi", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Missouri", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Montana", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Nebraska", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Nevada", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "New Hampshire", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "New Jersey", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "New Mexico", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "New York", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "North Carolina", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "North Dakota", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Ohio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Oklahoma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Oregon", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pennsylvania", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Rhode Island", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "South Carolina", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "South Dakota", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Tennessee", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Texas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Utah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Vermont", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Virginia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Washington", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "West Virginia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Wisconsin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Wyoming", 0, QApplication::UnicodeUTF8)
        );
        departDateLabel->setText(QApplication::translate("MainWindow", "Departure Date:", 0, QApplication::UnicodeUTF8));
        arriveLabel->setText(QApplication::translate("MainWindow", "Arrive In:", 0, QApplication::UnicodeUTF8));
        ArriveCBox->clear();
        ArriveCBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Choose a State..", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Alabama", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Alaska", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Arizona", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Arkansas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "California", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Colorado", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Connecticut", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Delaware", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "District of Columbia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Florida", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Georgia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Hawaii", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Idaho", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Illinois", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Indiana", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Iowa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Kansas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Kentucky", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Louisiana", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Maine", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Maryland", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Massachusetts", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Michigan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Minnesota", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Mississippi", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Missouri", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Montana", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Nebraska", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Nevada", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "New Hampshire", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "New Jersey", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "New Mexico", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "New York", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "North Carolina", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "North Dakota", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Ohio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Oklahoma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Oregon", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pennsylvania", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Rhode Island", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "South Carolina", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "South Dakota", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Tennessee", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Texas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Utah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Vermont", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Virginia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Washington", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "West Virginia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Wisconsin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Wyoming", 0, QApplication::UnicodeUTF8)
        );
        arriveDateLabel->setText(QApplication::translate("MainWindow", "Return Date:", 0, QApplication::UnicodeUTF8));
        roundTripRadio->setText(QApplication::translate("MainWindow", "Round Trip", 0, QApplication::UnicodeUTF8));
        oneWayLabel->setText(QApplication::translate("MainWindow", "One Way", 0, QApplication::UnicodeUTF8));
        flightTypeLabel->setText(QApplication::translate("MainWindow", "Flight Type:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Clear Location Selections", 0, QApplication::UnicodeUTF8));
        seatLabel->setText(QApplication::translate("MainWindow", "Reserved Seats:", 0, QApplication::UnicodeUTF8));
        mapGroupBox->setTitle(QApplication::translate("MainWindow", "Map", 0, QApplication::UnicodeUTF8));
        mapLabel->setText(QString());
        colormap->setText(QString());
        suggestionGroupBox->setTitle(QApplication::translate("MainWindow", "Suggested Flights", 0, QApplication::UnicodeUTF8));
        summaryGroupBox->setTitle(QApplication::translate("MainWindow", "Reservation Summary", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Departing From:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Arriving In:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Return Date:", 0, QApplication::UnicodeUTF8));
        sumDepartDateLabel->setText(QApplication::translate("MainWindow", "Departure Date:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Seats Reserved:", 0, QApplication::UnicodeUTF8));
        resetAllButton->setText(QApplication::translate("MainWindow", "Reset All Options And Start Over", 0, QApplication::UnicodeUTF8));
        DepartDate->setText(QString());
        DepartLocation->setText(QString());
        Destination->setText(QString());
        ReturnDate->setText(QString());
        Seats->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Flight Type:", 0, QApplication::UnicodeUTF8));
        typeFlight->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Total Cost:", 0, QApplication::UnicodeUTF8));
        TotalCost->setText(QString());
        DepartFlightInfo->setText(QApplication::translate("MainWindow", "Departure Flight #", 0, QApplication::UnicodeUTF8));
        departFlightNo->setText(QString());
        ReturnFlightInfo->setText(QApplication::translate("MainWindow", "Return Flight #", 0, QApplication::UnicodeUTF8));
        ReturnFlightNo->setText(QString());
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Payment ", 0, QApplication::UnicodeUTF8));
        confirmationButton->setText(QApplication::translate("MainWindow", "Confirm and Proceed to Checkout", 0, QApplication::UnicodeUTF8));
        cctype->setText(QApplication::translate("MainWindow", "Card Type:", 0, QApplication::UnicodeUTF8));
        visa->setText(QApplication::translate("MainWindow", "Visa", 0, QApplication::UnicodeUTF8));
        master->setText(QApplication::translate("MainWindow", "Mastercard", 0, QApplication::UnicodeUTF8));
        disc->setText(QApplication::translate("MainWindow", "Discover", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Please note: All times listed are in CDT - We hope you enjoy our long scenic flights! ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Name:", 0, QApplication::UnicodeUTF8));
        custNameField->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Reservation Number:", 0, QApplication::UnicodeUTF8));
        resNum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
