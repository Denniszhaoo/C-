#include <iostream>
using namespace std;

void anotherFunction();

int main() {
    int num=1; // local variable
    cout << "In the main function, num is " << num << ".\n";
    anotherFunction();
    cout << "Back in the main function, num is " << num << ".\n";
}

void anotherFunction() {
    int num=20; // local variable
    cout << "In the anotherFunction function, num is " << num << ".\n";
}

/*

 In the main function, num is 1.
 In the anotherFunction function, num is 20.
 Back in the main function, num is 1.
 
*/
