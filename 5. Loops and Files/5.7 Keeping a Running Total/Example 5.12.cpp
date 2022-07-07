#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int days;
    double total=0;
    cout << "For how many days do you have sales figures? ";
    cin >> days;
    for (int count=1; count<=days; count++)
    {
        double sales;
        cout << "Enter the sales for day " << count << ": ";
        cin >> sales;
        total+=sales;
    }
    cout << fixed << showpoint << setprecision(2);
    cout << "The total sales are $" << total << ".\n";
}

/*
 
 For how many days do you have sales figures? 5
 Enter the sales for day 1: 489.32
 Enter the sales for day 2: 421.65
 Enter the sales for day 3: 497.89
 Enter the sales for day 4: 532.37
 Enter the sales for day 5: 506.92
 The total sales are $2448.15.

*/
