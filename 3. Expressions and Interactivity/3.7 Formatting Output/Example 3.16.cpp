#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double day1, day2, day3, total;
    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day 3: ";
    cin >> day3;
    total=day1+day2+day3;
    cout << "\nSales Figures\n";
    cout << "-------------\n";
    cout << setprecision(5);
    cout << "Day 1:" << setw(8) << day1 << endl;
    cout << "Day 2:" << setw(8) << day2 << endl;
    cout << "Day 3:" << setw(8) << day3 << endl;
    cout << "Total:" << setw(8) << total << endl;
}

/*
 
 Enter the sales for day 1: 321.57
 Enter the sales for day 2: 269.62
 Enter the sales for day 3: 307.77

 Sales Figures
 -------------
 Day 1:  321.57
 Day 2:  269.62
 Day 3:  307.77
 Total:  898.96

*/

