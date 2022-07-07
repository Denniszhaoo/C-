#include <iostream>
#include <iomanip>
using namespace std;

const double PAY_RATE=22.55, BASE_HOURS=40, OT_MULTIPLIER=1.5;
double getBasePay(double), getOvertimePay(double);

int main() {
    double hours, basePay, overtime=0, totalPay;
    cout << "How many hours did you work? ";
    cin >> hours;
    basePay=getBasePay(hours);
    if (hours>BASE_HOURS)
        overtime=getOvertimePay(hours);
    totalPay=basePay+overtime;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Base pay: $" << basePay << endl << "Overtime pay $" << overtime << endl << "Total pay $" << totalPay << endl;
}

double getBasePay(double hoursWorked) {
    double basePay;
    if (hoursWorked>BASE_HOURS)
        basePay=BASE_HOURS*PAY_RATE;
    else
        basePay=hoursWorked*PAY_RATE;
    return basePay;
}

double getOvertimePay(double hoursWorked) {
    double overtimePay;
    if (hoursWorked>BASE_HOURS)
    {
        overtimePay=(hoursWorked-BASE_HOURS)*PAY_RATE*OT_MULTIPLIER;
    }
    else
        overtimePay=0;
    return overtimePay;
}

/*

 How many hours did you work? 48
 Base pay: $902.00
 Overtime pay $270.60
 Total pay $1172.60
 
*/
