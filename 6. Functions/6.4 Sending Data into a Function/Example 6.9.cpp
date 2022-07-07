#include <iostream>
using namespace std;

void changeMe(int);

int main() {
    int number=12;
    cout << "Number is " << number << ".\n";
    changeMe(number);
    cout << "Now back in the main function again, the value of the number is " << number << ".\n";
}

void changeMe(int myValue) {
    myValue=0;
    cout << "Now the value is " << myValue << ".\n";
}

/*

 Number is 12.
 Now the value is 0.
 Now back in the main function again, the value of the number is 12.
 
*/
