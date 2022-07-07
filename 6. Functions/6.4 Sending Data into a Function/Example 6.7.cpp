#include <iostream>
using namespace std;

void displayValue(int);

int main() {
    cout << "I am passing several values to the displayValue function.\n";
    displayValue(5);
    displayValue(10);
    displayValue(2);
    displayValue(16);
    cout << "Now I am back in the main function.\n";
}

void displayValue(int num) {
    cout << "The value is " << num << ".\n";
}

/*

 I am passing several values to the displayValue function.
 The value is 5.
 The value is 10.
 The value is 2.
 The value is 16.
 Now I am back in the main function.
 
*/
