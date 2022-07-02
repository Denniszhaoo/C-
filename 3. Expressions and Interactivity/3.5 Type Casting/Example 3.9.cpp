#include <iostream>
using namespace std;

int main() {
    int books, months;
    double perMonth;
    cout << "How many books do you plan to read? ";
    cin >> books;
    cout << "How many months will it take you to read them? ";
    cin >> months;
    perMonth=static_cast<double>(books)/months; // if perMonth=books/months then perMonth is an integer not a double
    cout << "That is " << perMonth << " books per month.\n";
}

/*
 
 How many books do you plan to read? 30
 How many months will it take you to read them? 7
 That is 4.28571 books per month.

*/
