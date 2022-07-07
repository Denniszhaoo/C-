#include <iostream>
using namespace std;

void divide(double,double);

int main() {
    double num1, num2;
    cout << "Enter two numbers and I will divide the first number by the second: ";
    cin >> num1 >> num2;
    divide(num1,num2);
}

void divide(double arg1,double arg2) {
    if (arg2==0)
    {
        cout << "Sorry, I cannot divide by zero.\n";
        return; // if division by zero is detected, the function returns, so the divide function immediately ends
    }
    cout << "The quotient is " << arg1/arg2 << ".\n";
}

/*

 Enter two numbers and I will divide the first number by the second: 12 0
 Sorry, I cannot divide by zero.
 
*/
