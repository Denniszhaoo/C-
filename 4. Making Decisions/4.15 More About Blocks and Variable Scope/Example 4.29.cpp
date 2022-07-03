#include <iostream>
using namespace std;

int main() {
    const double MIN_INCOME=35000;
    const int MIN_YEARS=5;
    double income;
    int years;
    cout << "What is your annual income? ";
    cin >> income;
    if (income>=MIN_INCOME)
    {
        cout << "How many years have you worked at your current job? "; // if you put "int years" or define the variable years right here, this variable is not visible before its definition or after the closing brace of the block
        cin >> years;
        if (years>MIN_YEARS)
            cout << "You qualify.\n";
        else
            cout << "You must have been employed for more than " << MIN_YEARS << " years to qualify.\n";
    }
    else
        cout << "You must earn at least $" << MIN_INCOME << " to qualify.\n";
}

/*
 
 What is your annual income? 35000
 How many years have you worked at your current job? 6
 You qualify.

*/
