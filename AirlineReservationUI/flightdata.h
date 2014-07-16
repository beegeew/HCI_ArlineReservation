#ifndef FLIGHTDATA_H
#define FLIGHTDATA_H
#include <string>
#include <QString>

using std::string;

class flightdata
{
public:
    //constructors
    flightdata();
    flightdata(string*,string*,string*,string*,int*,int*);
    flightdata(const flightdata&);

    //destructor
    ~flightdata() {};

    //assignment
    flightdata& operator=(const flightdata &rhs);

    //accessors
    string getDepartAirport();
    string getDepartTime();
    string getArriveAirport();
    string getArriveTime();
    int getFare();
    int getFlightNumber();

    //outputformatting
    QString formatData();

private:
    //private data
    string departAirport;
    string departTime;
    string arriveAirport;
    string arriveTime;

    int fare;
    int flightNumber;
};

#endif // FLIGHTDATA_H
