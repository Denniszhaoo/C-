#include <iostream>
using namespace std;

void doubleNum(int &); // the prototype for the doubleNum function with a reference variable

int main() {
    int value=4;
    cout << "In the main function, value is " << value << ".\n";
    cout << "Now calling doubleNum..." << endl;
    doubleNum(value);
    cout << "Now back in the main function, value is " << value << ".\n";
}

void doubleNum (int &refVar) {
    refVar*=2;
} // refVar is a reference variable that, when used as a function parameter, allows access to the original argument; if you don't use the reference variable as a parameter, then the output will be "now back in the main function, value is 4" which is not the result we want

/*

 In the main function, value is 4.
 Now calling doubleNum...
 Now back in the main function, value is 8.
 
*/
