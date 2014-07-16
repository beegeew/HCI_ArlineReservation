#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "creditcardform.h"
#include "flightdata.h"
#include "reservationdata.h"
#include <QDebug>
#include <QImage>
#include <QColor>
#include <stdlib.h>
#include <time.h>

using std::ifstream;
using std::string;
using std::ofstream;
using std::string;
using std::stringstream;
using std::getline;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    flightdata* tempFlight;

    ifstream inFile;
    inFile.open("../airlinesched.csv");

    string lineIn,stringIn,depAir,depTime,arrAir,arrTime;

    int fare, i = 0;
    char mode;

    while(getline(inFile,lineIn))
    {
        if (lineIn != "FLIGHTS" && lineIn != "RESERVATIONS" && mode == 'f')
        {
            stringstream currLine(lineIn);

            getline(currLine, depAir, ',');
            getline(currLine, depTime, ',');
            getline(currLine, arrAir, ',');
            getline(currLine, arrTime, ',');
            (currLine) >> fare;

            tempFlight = new flightdata(&depAir,&depTime,&arrAir,&arrTime,&fare,&i);
            flights.push_back(*tempFlight);
            i++;
        }
        else if (lineIn == "FLIGHTS")
            mode = 'f';
        else if (lineIn == "RESERVATIONS")
            mode = 'r';
    }

    usColMap = new QImage(":/usmapunderlay");
    usColMap->scaled(471,301);

    myPix = QPixmap::fromImage((*usColMap));
    ui->colormap->setPixmap(myPix);

    connect(ui->mapLabel,SIGNAL(clicked(QPoint)),this,SLOT(readMap(QPoint)));

    ui->suggestionGroupBox->setStyleSheet("border:0;");
    ui->Seats->setText(QString("%1").arg(ui->reserveSpinBox->value()));
    ui->oneWayLabel->click();
    ui->typeFlight->setText("One Way");
    ui->DepartDate->setText(ui->departingCalendar->selectedDate().toString("MM-dd-yyyy"));

    resNums = 0;

    from = new QLabel(this);
    from->setText("");
    to = new QLabel(this);
    to->setText("");
    to->setAutoFillBackground(true);
    ui->suggestionGroupBox->setTitle("Departure            Destination         Arrival                Cost");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_resetAllButton_clicked()
{
    on_pushButton_released();
    ui->departCBox->setCurrentIndex(0);
    ui->ArriveCBox->setCurrentIndex(0);
    ui->departingCalendar->setSelectedDate(QDate::currentDate());
    ui->ReturnCal->setSelectedDate(QDate::currentDate());
    ui->reserveSpinBox->setValue(1);
    ui->oneWayLabel->setChecked(true);
    ui->roundTripRadio->setChecked(false);
    ui->typeFlight->setText("One Way");
    ui->reserveSpinBox->setValue(1);
    ui->Seats->setText(QString("%1").arg(ui->reserveSpinBox->value()));
    ui->visa->setChecked(false);
    ui->disc->setChecked(false);
    ui->master->setChecked(false);
    ui->ReturnDate->setText("");
    ui->DepartDate->setText("");
}

void MainWindow::on_confirmationButton_clicked()
{
    char ccType;
    if (!ui->oneWayLabel->isChecked()&&!ui->roundTripRadio->isChecked())
    {
        QMessageBox::warning(this,"Invalid!","You haven't selected a flight type.");
        return;
    } else if (ui->departCBox->currentIndex()==0)
    {
        QMessageBox::warning(this,"Invalid","You havent selected a departure location.");
        return;
    } else if (ui->ArriveCBox->currentIndex()==0)
    {
        QMessageBox::warning(this,"Invalid","You havent selected an arrival location.");
        return;;
    } else if(ui->visa->isChecked())
        ccType = 'v';
    else if(ui->master->isChecked())
        ccType = 'm';
    else if (ui->disc->isChecked())
        ccType = 'd';
    else
    {
        QMessageBox::warning(this,"Invalid!","You have not selected a valid credit card type");
        return;
    }


    creditcardform *ccinfo = new creditcardform(ccType,this);

    QString fName, lName, ccNum, secCode;
    int month, year;

    if (ccinfo->exec() == QDialog::Accepted)
    {
        resNums +=1;
        ccinfo->returnData(&fName, &lName, &ccNum, &secCode,&month,&year);
        ui->custNameField->setText(QString("%1 %2").arg(fName).arg(lName));
        ui->resNum->setText(QString("%1").arg(resNums + 56784));
        QString expDate = QString("%1-%2").arg(month).arg(year);
    }



    delete ccinfo;
}

void MainWindow::on_departCBox_activated(const QString &arg1)
{
    suggestFlights();
    ui->DepartLocation->setText(ui->departCBox->currentText());
    from->move(0,0);
    from->setStyleSheet("background-color: rbg(240,240,240)");
}

void MainWindow::on_departingCalendar_clicked(const QDate &date)
{
    if (ui->roundTripRadio->isChecked()){
        if(ui->ReturnCal->selectedDate() != QDate(2011,10,8))
        {
            on_ReturnCal_clicked(date);
        }
    }

    ui->DepartDate->setText(ui->departingCalendar->selectedDate().toString("MM-dd-yyyy"));
}

void MainWindow::on_ReturnCal_clicked(const QDate &date)
{
    if (ui->departingCalendar->selectedDate() < ui->ReturnCal->selectedDate())
    {
        if (ui->roundTripRadio->isChecked())
        {
            ui->ReturnDate->setText(ui->ReturnCal->selectedDate().toString("MM-dd-yyyy"));
        }
        return;
    } else if(ui->roundTripRadio->isChecked())
        {
            QMessageBox::warning(this,"Invalid Return Date!","You have selected an invalid \nReturn Date.");
            ui->ReturnCal->setSelectedDate(ui->departingCalendar->selectedDate().addDays(1));
            ui->ReturnDate->setText(ui->ReturnCal->selectedDate().toString("MM-dd-yyyy"));
        }
}

void MainWindow::on_reserveSpinBox_editingFinished()
{
    ui->Seats->setText(QString("%1").arg(ui->reserveSpinBox->value()));
    suggestFlights();
}

void MainWindow::readMap(QPoint point)
{
    QColor color(usColMap->pixel(point));
    QString state = color.name();
    QString stateName;
    int x = point.x() + 20;
    int y = point.y() + 350;

    if(state == QString("#dc143c"))
       stateName = "Alaska";
    else if (state == QString("#cd5c5c"))
       stateName = "Texas";
    else if (state == QString("#4b0082"))
       stateName = "Arkansas";
    else if (state == QString("#ffa07a"))
       stateName = "Arizona";
    else if (state == QString("#8b0000"))
       stateName = "Hawaii";
    else if (state == QString("#fa8072"))
       stateName = "New Mexico";
    else if (state == QString("#ffc0cb"))
       stateName = "Nevada";
    else if (state == QString("#ff69b4"))
       stateName = "Oregon";
    else if (state == QString("#ff1493"))
       stateName = "Washington";
    else if (state == QString("#ff0000"))
       stateName = "California";
    else if (state == QString("#c71585"))
       stateName = "Idaho";
    else if (state == QString("#ff7f50"))
       stateName = "Montana";
    else if (state == QString("#ff4500"))
       stateName = "Wyoming";
    else if (state == QString("#ff8c00"))
       stateName = "Utah";
    else if (state == QString("#ffff00"))
       stateName = "Colorado";
    else if (state == QString("#ffdab9"))
       stateName = "North Dakota";
    else if (state == QString("#bdb76b"))
       stateName = "South Dakota";
    else if (state == QString("#d8bfd8"))
       stateName = "Nebraska";
    else if (state == QString("#ee82ee"))
       stateName = "Kansas";
    else if (state == QString("#ff00ff"))
       stateName = "Oklahoma";
    else if (state == QString("#9370db"))
       stateName = "Louisiana";
    else if (state == QString("#483d8b"))
       stateName = "Missouri";
    else if (state == QString("#7b68ee"))
       stateName = "Iowa";
    else if (state == QString("#adff2f"))
       stateName = "Minnesota";
    else if (state == QString("#7fff00"))
       stateName = "Wisconsin";
    else if (state == QString("#00ff00"))
       stateName = "Illinois";
    else if (state == QString("#32cd32"))
       stateName = "Kentucky";
    else if (state == QString("#4b0082"))
       stateName = "Arkansas";
    else if (state == QString("#98fb98"))
       stateName = "Tennessee";
    else if (state == QString("#00fa9a"))
       stateName = "Mississippi";
    else if (state == QString("#3cb371"))
       stateName = "Alabama";
    else if (state == QString("#2e8b57"))
       stateName = "Indiana";
    else if (state == QString("#008000"))
       stateName = "Michigan";
    else if (state == QString("#556b2f"))
       stateName = "Ohio";
    else if (state == QString("#66cdaa"))
       stateName = "West Virginia";
    else if (state == QString("#8fbc8f"))
       stateName = "Virginia";
    else if (state == QString("#20b2aa"))
       stateName = "North Carolina";
    else if (state == QString("#008080"))
       stateName = "South Carolina";
    else if (state == QString("#00ffff"))
       stateName = "Georgia";
    else if (state == QString("#afeeee"))
       stateName = "Florida";
    else if (state == QString("#40e0d0"))
       stateName = "Pennsylvania";
    else if (state == QString("#4682b4"))
       stateName = "New York";
    else if (state == QString("#b0e0e6"))
       stateName = "Vermont";
    else if (state == QString("#87ceeb"))
       stateName = "New Hampshire";
    else if (state == QString("#00bfff"))
       stateName = "Maine";
    else if (state == QString("#1e90ff"))
       stateName = "Massachusetts";
    else if (state == QString("#6495ed"))
       stateName = "Rhode Island";
    else if (state == QString("#4169e1"))
       stateName = "Connecticut";
    else if (state == QString("#0000ff"))
       stateName = "New Jersey";
    else if (state == QString("#00008b"))
       stateName = "Delaware";
    else if (state == QString("#191970"))
       stateName = "Maryland";
    else if (state == QString("#a52a2a"))
       stateName = "District of Columbia";

    if (ui->departCBox->currentIndex() == 0 && stateName != "")
    {   int index = ui->departCBox->findText(stateName);
        ui->departCBox->setCurrentIndex(index);
        ui->DepartLocation->setText(stateName);
        suggestFlights();
        from->setText("Depart From");
        from->move(x,y);
        from->setMaximumHeight(12);
        from->setMaximumWidth(60);
        from->setStyleSheet("background-color: white;");
    } else if (stateName != "")
    {
        int index = ui->ArriveCBox->findText(stateName);
        ui->ArriveCBox->setCurrentIndex(index);
        ui->Destination->setText(stateName);
        suggestFlights();
        to->setMaximumHeight(10);
        to->setMaximumWidth(57);
        to->setText("Arrive In");
        to->move(x,y);
        from->setStyleSheet("background-color: white;");
    }
}

void MainWindow::on_pushButton_released()
{
    ui->ArriveCBox->setCurrentIndex(0);
    ui->departCBox->setCurrentIndex(0);
    ui->DepartLocation->setText("");
    ui->Destination->setText("");
    ui->suggestionTextBox->setText("");
    ui->Destination->setText("");
    ui->TotalCost->setText("");
    ui->custNameField->setText("");
    ui->resNum->setText("");
    from->setText("");
    to->setText("");
    to->move(0,0);
    to->setStyleSheet("background-color: rgb(240,240,240)");
    from->move(0,0);
    from->setStyleSheet("background-color: rgb(240,240,240)");
    ui->departFlightNo->setText("");
    ui->ReturnFlightNo->setText("");
}

void MainWindow::on_roundTripRadio_clicked()
{
    ui->typeFlight->setText("Round Trip");
    on_ReturnCal_clicked(QDate::currentDate());

    suggestFlights();
}

void MainWindow::on_oneWayLabel_clicked()
{
    ui->typeFlight->setText("One Way");

    suggestFlights();
}

void MainWindow::suggestFlights()
{
    int size = flights.size(), j = 0,i = 0, x = 0, y = 0;
    bool found = false, rt = false;
    QString suggest;
    QString from, to;

    if(ui->roundTripRadio->isChecked())
        rt = true;

    if (ui->departCBox->currentIndex() == 0 )
        return;
    else if (ui->ArriveCBox->currentIndex() == 0)
    {
        from = ui->departCBox->currentText();
        to = from;
    } else
    {
        from = ui->departCBox->currentText();
        to = ui->ArriveCBox->currentText();
    }

    if (from == to)
    {
        while (i < size && !found)
        {
            if (QString::fromStdString(flights[i].getDepartAirport()) == from)
                found = true;
            else
                i++;
        }
        if (found)
            suggest = QString("%1\n%2\n%3\n%4\n%5").arg(flights[i+randNum(randNum(i))].formatData()).arg(flights[i+randNum(i)].formatData()).arg(flights[i+randNum(randNum(randNum(i)))].formatData()).arg(flights[i+randNum(randNum(randNum(randNum(i))))].formatData()).arg(flights[i+randNum(randNum(randNum(randNum(randNum(i)))))].formatData());
    }
    else
    {
        while (i < size && !found)
        {
            if(QString::fromStdString(flights[i].getDepartAirport()) == from)
            {
                j = i;
                while(j < (i + 50) && !found )
                        if(QString::fromStdString(flights[j].getArriveAirport()) == to)
                            found = true;
                        else
                            j++;
            }
            else
                i++;
        }
        if (found && !rt)
            suggest = flights[j].formatData();
        else if (found && rt)
        {   found = false;
            while (x < size && !found)
            {
                if(QString::fromStdString(flights[x].getDepartAirport()) == to)
                {
                    y = x;
                    while(y < (x + 50) && !found )
                            if(QString::fromStdString(flights[y].getArriveAirport()) == from)
                                found = true;
                            else
                                y++;
                }
                else
                    x++;
            }
        }
        if (found && rt)
            suggest = QString("%1\n%2").arg(flights[j].formatData()).arg(flights[y].formatData());
    }

    if (found)
    {
        ui->suggestionTextBox->setText(suggest);
        if (from != to && !rt)
        {
            setCost(flights[j].getFare());
            ui->departFlightNo->setText(QString("%1").arg(flights[j].getFlightNumber()));
            ui->DepartDate->setText(ui->departingCalendar->selectedDate().toString("MM-dd-yyyy"));

        }
        else if (from != to && rt)
        {
            setCost(flights[j].getFare()+flights[y].getFare());
            ui->departFlightNo->setText(QString("%1").arg(flights[j].getFlightNumber()));
            ui->ReturnFlightNo->setText(QString("%1").arg(flights[y].getFlightNumber()));
            ui->DepartDate->setText(ui->departingCalendar->selectedDate().toString("MM-dd-yyyy"));
            ui->ReturnDate->setText(ui->ReturnCal->selectedDate().toString("MM-dd-yyyy"));
        }
    }
}

void MainWindow::setCost(int cost)
{
    cost = cost * ui->reserveSpinBox->value();
    ui->TotalCost->setText(QString("$%1").arg(cost));
}

int MainWindow::randNum( int num)
{
    QTime now = QTime::currentTime();
    qsrand (now.msec()+ num );
    return qrand() %50;
}

void MainWindow::on_ArriveCBox_activated(const QString &arg1)
{
    suggestFlights();
    ui->Destination->setText(ui->ArriveCBox->currentText());
    to->move(0,0);
    to->setStyleSheet("background-color: rgb(240,240,240)");
}
