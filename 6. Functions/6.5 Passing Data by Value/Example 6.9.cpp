// this program demonstrates that changes to a function parameter have no effect on the original argument; however, the changes to reference variables (as function parameters) have effect on the original argument
#include <iostream>
using namespace std;

void changeMe(int); // if this is changeMe(int &), then the output will be "Now back ... number is 0", since a reference variable as a function parameter allows the changeMe function to access the parameter's original argument

int main() {
    int number=12;
    cout << "Number is " << number << ".\n";
    changeMe(number); // the changeMe function passes the value in number as an argument
    cout << "Now back in the main function again, the value of the number is " << number << ".\n";
}

void changeMe(int myValue) {
    myValue=0;
    cout << "Now the value is " << myValue << ".\n";
} // even though the parameter variable myValue is changed in the changeMe function, the argument number is not modified, since the myValue variable contains only a copy of the number variable; also, the changeMe function does not have access to the original argument, and when only a copy of an argument is passed to a function, it is said to be passed by value

/*

 Number is 12.
 Now the value is 0.
 Now back in the main function again, the value of the number is 12.
 
*/
