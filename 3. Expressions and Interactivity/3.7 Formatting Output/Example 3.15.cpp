#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double quotient, number1=132.364, number2=26.91;
    quotient=number1/number2;
    cout << quotient << endl;
    cout << setprecision(5) << quotient << endl;
    cout << setprecision(4) << quotient << endl;
    cout << setprecision(3) << quotient << endl;
    cout << setprecision(2) << quotient << endl;
    cout << setprecision(1) << quotient << endl;
}

/*
 
 4.91877
 4.9188
 4.919
 4.92
 4.9
 5

*/
