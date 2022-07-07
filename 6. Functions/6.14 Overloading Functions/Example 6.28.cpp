#include <iostream>
#include <iomanip>
using namespace std;

void getChoice(char &);
double calcWeeklyPay(int,double), calcWeeklyPay(double);

int main() {
    char selection;
    int worked;
    double rate, yearly;
    cout << fixed << showpoint << setprecision(2);
    cout << "Do you want to calculate the weekly pay of (H) an hourly paid employee or (S) a salaried employee?\n";
    getChoice(selection);
    switch (selection)
    {
        case 'H':
        case 'h': cout << "How many hours were worked? ";
            cin >> worked;
            cout << "What is the hourly pay rate? ";
            cin >> rate;
            cout << "The gross weekly pay is $" << calcWeeklyPay(worked,rate) << ".\n";
            break;
        case 'S':
        case 's': cout << "What is the annual salary? ";
            cin >> yearly;
            cout << "The gross weekly pay is $" << calcWeeklyPay(yearly) << ".\n";
            break;
    }
}

void getChoice(char &letter) {
    cout << "Enter your choice (H or S): ";
    cin >> letter;
    while (letter!='H' && letter!='h' && letter!='S' && letter!='s')
    {
        cout << "Please enter H or S: ";
        cin >> letter;
    }
}

double calcWeeklyPay(int hours,double payRate) {
    return hours*payRate;
}

double calcWeeklyPay(double annSalary) {
    return annSalary/52;
}

/*

 Do you want to calculate the weekly pay of (H) an hourly paid employee or (S) a salaried employee?
 Enter your choice (H or S): H
 How many hours were worked? 40
 What is the hourly pay rate? 18.5
 The gross weekly pay is $740.00.
 
*/
