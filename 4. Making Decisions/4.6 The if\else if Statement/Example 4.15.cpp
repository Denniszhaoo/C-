#include <iostream>
using namespace std;

int main() {
    char employed, recentGrad;
    cout << "Answer the following questions with either Y for Yes or N for No.\n";
    cout << "Are you employed? ";
    cin >> employed;
    cout << "Are you recentGrad? ";
    cin >> recentGrad;
    if (employed=='Y' && recentGrad=='Y')
        cout << "You qualify for the special interest rate.\n";
    else
        cout << "You must be employed and have graduated from college in the past two years to qualify.\n";
}

/*
 
 Answer the following questions with either Y for Yes or N for No.
 Are you employed? Y
 Are you recentGrad? N
 You must be employed and have graduated from college in the past two years to qualify.

*/
