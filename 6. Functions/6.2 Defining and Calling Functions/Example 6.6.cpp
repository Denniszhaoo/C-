#include <iostream>
using namespace std;

void displayValue(int);

int main() {
    cout << "I am passing 5 to the displayValue function.\n";
    displayValue(5);
    cout << "Now I am back in the main function.\n";
}

void displayValue(int num) {
    cout << "The value is " << num << ".\n";
}

/*

 I am passing 5 to the displayValue function.
 The value is 5.
 Now I am back in the main function.
 
*/
