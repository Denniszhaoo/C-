#include <iostream>
using namespace std;

void anotherFunction();
int num=2; // global variable

int main() {
    cout << "In the main function, num is " << num << ".\n";
    anotherFunction();
    cout << "Back in the main function, num is " << num << ".\n";
}

void anotherFunction() {
    cout << "In the anotherFunction function, num is " << num << ".\n";
    num=50;
    cout << "However, it is now changed to " << num << ".\n";
}

/*

 In the main function, num is 2.
 In the anotherFunction function, num is 2.
 However, it is now changed to 50.
 Back in the main function, num is 50.
 
*/
