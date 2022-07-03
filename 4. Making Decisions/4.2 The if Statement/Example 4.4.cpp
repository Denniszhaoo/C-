#include <iostream>
using namespace std;

int main() {
    double a=1.5, b=1.5;
    a+=0.0000000000000001; // floating-point round-off errors make equality operations unreliable
    if (a==b)
        cout << "Both a and b are the same.\n";
    else
        cout << "a and b are not the same.\n";
}

/*
 
 Both a and b are the same.

*/
