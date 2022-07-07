#include <iostream>
using namespace std;

int main() {
    int minNumber, maxNumber;
    cout << "I will display a table of numbers and their squares.\nEnter the starting number: ";
    cin >> minNumber;
    cout << "Enter the ending number: ";
    cin >> maxNumber;
    cout << "Number Number Squared\n" << "-------------------------\n";
    for (int num=minNumber; num<=maxNumber; num++)
        cout << num << "\t\t\t" << num*num << endl;
}

/*
 
 I will display a table of numbers and their squares.
 Enter the starting number: 6
 Enter the ending number: 12
 Number Number Squared
 -------------------------
 6            36
 7            49
 8            64
 9            81
 10           100
 11           121
 12           144

*/
