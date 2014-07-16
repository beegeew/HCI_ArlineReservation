#include "reservationdata.h"

reservationdata::reservationdata()
{
    custFirstName = "";
    custLastName = "";
    custCCNum = "";
    custCCExp = "";
    ccType = 'n';

    seats = 0;
    flightNumDepart = 0;
    flightNumReturn = 0;
    reservationNumber = 0;
    roundTrip = false;

    flightDayDepart = QDate::currentDate();
    flightDayReturn = QDate::currentDate();
}

reservationdata::reservationdata(string* firstName, string* lastName, string* CCNum, string* CCExp, char* cType, int* numSeats,
                                 int* departFlight, int* returnFlight, int* resNum, bool* tripType, QDate* departDay, QDate* returnDay)
{
    custFirstName = *firstName;
    custLastName = *lastName;
    custCCNum = *CCNum;
    custCCExp = *CCExp;
    ccType = *cType;

    seats = *numSeats;
    flightNumDepart = *departFlight;
    flightNumReturn = *returnFlight;
    reservationNumber = *resNum;
    roundTrip = *tripType;

    flightDayDepart = *departDay;
    flightDayReturn = *returnDay;
}

reservationdata::reservationdata(const reservationdata& rhs):
    custFirstName(rhs.custFirstName), custLastName(rhs.custLastName), custCCNum(rhs.custCCNum), custCCExp(rhs.custCCNum),
    ccType(rhs.ccType), seats(rhs.seats), flightNumDepart(rhs.flightNumDepart), flightNumReturn(rhs.flightNumReturn),
    reservationNumber(rhs.reservationNumber), roundTrip(rhs.roundTrip), flightDayDepart(rhs.flightDayDepart),
    flightDayReturn(rhs.flightDayReturn)
{
    //flightDayDepart.setDate(rhs.flightDayDepart.year(),rhs.flightDayDepart.month(),rhs.flightDayDepart.day());
    //flightDayReturn.setDate(rhs.flightDayReturn.year(),rhs.flightDayReturn.month(),rhs.flightDayReturn.day());
}

reservationdata& reservationdata::operator=(const reservationdata& rhs)
{
    if (this != &rhs)
    {
        custFirstName = rhs.custFirstName;
        custLastName = rhs.custLastName;
        custCCNum = rhs.custCCNum;
        custCCExp = rhs.custCCExp;
        ccType = rhs.ccType;

        seats = rhs.seats;
        flightNumDepart = rhs.flightNumDepart;
        flightNumReturn = rhs.flightNumReturn;
        reservationNumber = rhs.reservationNumber;
        roundTrip = rhs.roundTrip;

        flightDayDepart.setDate(rhs.flightDayDepart.year(),rhs.flightDayDepart.month(),rhs.flightDayDepart.day());
        flightDayReturn.setDate(rhs.flightDayReturn.year(),rhs.flightDayReturn.month(),rhs.flightDayReturn.day());
    }

    return *this;
}

void reservationdata::getCustName(string* firstName, string* lastName)
{
    (*firstName) = custFirstName;
    (*lastName) = custLastName;
}

void reservationdata::getCustCCInfo(string* ccNum, string* ccExp, char* cType)
{
    (*ccNum) = custCCNum;
    (*ccExp) = custCCExp;
    (*cType) = ccType;
}

void reservationdata::getCustFlightData(int* numSeats, int* departFlight, int* returnFlight)
{
    (*numSeats) = seats;
    (*departFlight) = flightNumDepart;
    (*returnFlight) = flightNumReturn;
}

int reservationdata::getCustResNumber()
{
    return reservationNumber;
}

bool reservationdata::isRoundTrip()
{
    return roundTrip;
}

QDate reservationdata::getDepartDate()
{
    return flightDayDepart;
}

QDate reservationdata::getReturnDate()
{
    return flightDayReturn;
}
