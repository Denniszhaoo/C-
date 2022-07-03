#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PAY_RATE=50;
    const int MIN_HOURS=5;
    double hours, charges;
    cout << "How many hours were worked? ";
    cin >> hours;
    hours=hours<MIN_HOURS ? MIN_HOURS:hours;
    charges=PAY_RATE*hours;
    cout << fixed << showpoint << setprecision(2) << "The charges are $" << charges << ".\n";
}

/*
 
 How many hours were worked? 2
 The charges are $250.00.

*/
