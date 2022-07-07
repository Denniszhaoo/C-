#include <iostream>
#include <iomanip>
using namespace std;

void showIntro();
double getCups();
double cupsToOunces(double);

int main() {
    double cups, ounces;
    cout << fixed << showpoint << setprecision(1);
    showIntro();
    cups=getCups();
    ounces=cupsToOunces(cups);
    cout << cups << " cups equals " << ounces << " ounces.\n";
}

void showIntro() {
    cout << "This program converts measurements in cups to fluid ounces. For your reference the forluma is: 1 cup = 8 fluid ounces\n\n";
}

double getCups() {
    double numCups;
    cout << "Enter the number of cups: ";
    cin >> numCups;
    return numCups;
}

double cupsToOunces(double numCups)
{
    return numCups*8;
}

/*

 This program converts measurements in cups to fluid ounces. For your reference the forluma is: 1 cup = 8 fluid ounces

 Enter the number of cups: 2
 2.0 cups equals 16.0 ounces.
 
*/
