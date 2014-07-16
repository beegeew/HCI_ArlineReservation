#include "flightdata.h"

flightdata::flightdata()
{
    departAirport = "";
    departTime = "";
    arriveAirport = "";
    arriveTime = "";
    fare = 0;
    flightNumber = 0;
}

flightdata::flightdata(string* depAirport, string* depTime, string* arrAirport, string* arrTime, int* incFare, int* incFlightNumber)
{
    departAirport = *depAirport;
    departTime = *depTime;
    arriveAirport = *arrAirport;
    arriveTime = *arrTime;

    fare = *incFare;
    flightNumber = *incFlightNumber;
}

flightdata::flightdata(const flightdata &rhs):
    departAirport(rhs.departAirport), departTime(rhs.departTime), arriveAirport(rhs.arriveAirport), arriveTime(rhs.arriveTime),
    fare(rhs.fare), flightNumber(rhs.flightNumber)
{}

flightdata& flightdata::operator=(const flightdata &rhs)
{
    if (this != &rhs)
    {
        departAirport = rhs.departAirport;
        departTime = rhs.departTime;
        arriveAirport = rhs.arriveAirport;
        arriveTime = rhs.arriveTime;
        fare = rhs.fare;
        flightNumber = rhs.flightNumber;
    }
    return *this;
}

QString flightdata::formatData()
{
    QString dTime = QString::fromStdString(getDepartTime());
    QString aport = QString::fromStdString(getArriveAirport());
    QString aTime = QString::fromStdString(getArriveTime());

    QString flightsuggest(QString("%1\t%2\t%3\t$%4").arg(dTime).arg(aport).arg(aTime).arg(getFare()));
    return flightsuggest;
}

string flightdata::getDepartAirport() { return departAirport;}

string flightdata::getDepartTime() { return departTime;}

string flightdata::getArriveAirport() { return arriveAirport;}

string flightdata::getArriveTime() { return arriveTime;}

int flightdata::getFare()   { return fare;}

int flightdata::getFlightNumber() { return flightNumber;}
