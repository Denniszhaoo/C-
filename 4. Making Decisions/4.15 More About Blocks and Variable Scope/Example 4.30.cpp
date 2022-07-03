#include <iostream>
using namespace std;

int main() {
    int number; // global variable
    cout << "Enter a number greater than 0: ";
    cin >> number;
    if (number>0)
    {
        int number; // local variable that only works out in this brace
        cout << "Now enter another number: ";
        cin >> number;
        cout << "The second number you entered was " << number << ".\n";
    }
    cout << "Your first number was " << number << ".\n";
}

/*
 
 Enter a number greater than 0: 2
 Now enter another number: 7
 The second number you entered was 7.
 Your first number was 2.

*/
