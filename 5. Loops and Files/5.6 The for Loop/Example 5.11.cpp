#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int START_KPH=60, END_KPH=130, INCREMENT=10;
    const double CONVERSION_FACTOR=0.6214;
    int kph;
    double mph;
    cout << fixed << showpoint << setprecision(1);
    cout << "KPH\tMPH\n---------------\n";
    for (kph=START_KPH; kph<=END_KPH; kph+=INCREMENT)
    {
        mph=kph*CONVERSION_FACTOR;
        cout << kph << "\t" << mph << endl;
    }
}

/*
 
 KPH    MPH
 ---------------
 60    37.3
 70    43.5
 80    49.7
 90    55.9
 100   62.1
 110   68.4
 120   74.6
 130   80.8

*/
