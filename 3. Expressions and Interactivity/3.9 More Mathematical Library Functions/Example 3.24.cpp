#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b ";
    cin >> b;
    c=sqrt(pow(a,2)+pow(b,2));
    cout << "The length of the hypotenuse is ";
    cout << setprecision(2) << c << ".\n";
}

/*
 
 Enter the length of side a: 5
 Enter the length of side b 12
 The length of the hypotenuse is 13.

*/
