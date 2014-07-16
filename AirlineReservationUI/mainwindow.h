#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "flightdata.h"
#include "reservationdata.h"
#include <QDialog>
#include <QSpinBox>
#include <QComboBox>
#include <QDate>
#include <QImage>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QMessageBox>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using std::vector;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_departingCalendar_clicked(const QDate &date);

    void on_resetAllButton_clicked();

    void on_confirmationButton_clicked();

    void on_departCBox_activated(const QString &arg1);

    void on_ReturnCal_clicked(const QDate &date);

    void on_reserveSpinBox_editingFinished();

    void readMap(QPoint);

    void on_pushButton_released();

    void on_roundTripRadio_clicked();

    void on_oneWayLabel_clicked();

    void suggestFlights();

    int randNum(int);

    void setCost(int);

    void on_ArriveCBox_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    vector<flightdata> flights;
    QImage *usColMap;
    QGraphicsScene *scene;
    QPixmap myPix;
    QLabel *from;
    QLabel *to;
    int resNums;

    vector<reservationdata> resdata;
};

#endif // MAINWINDOW_H
