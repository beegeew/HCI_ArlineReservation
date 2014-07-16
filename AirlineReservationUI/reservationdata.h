#ifndef RESERVATIONDATA_H
#define RESERVATIONDATA_H
#include <string>
#include <QDate>

using std::string;

class reservationdata
{
public:
    //constructors
    reservationdata();
    reservationdata(string*,string*,string*,string*,char*,int*,int*,int*,int*,bool*,QDate*,QDate*);
    reservationdata(const reservationdata&);

    //destructor
    ~reservationdata() {}

    //assignment
    reservationdata& operator=(const reservationdata&);

    //accessors
    void getCustName(string*,string*);
    void getCustCCInfo(string*,string*,char*);
    void getCustFlightData(int*,int*,int*);
    int getCustResNumber();
    bool isRoundTrip();

    QDate getDepartDate();
    QDate getReturnDate();

private:
    //data elements
    string custFirstName;
    string custLastName;
    string custCCNum;
    string custCCExp;
    char ccType;

    int seats;
    int flightNumDepart;
    int flightNumReturn;
    int reservationNumber;
    bool roundTrip;

    QDate flightDayDepart;
    QDate flightDayReturn;

};

#endif // RESERVATIONDATA_H
