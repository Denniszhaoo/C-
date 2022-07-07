#include <iostream>
using namespace std;

void first(); // function prototypes; either the function definitions or the function prototypes must be placed ahead of all calls to the functions so that the program is complete
void second();

int main() {
    cout << "I am starting in the main function.\n";
    first();
    second();
    cout << "Back in the main function again.\n";
}

void first() {
    cout << "I am now inside the first function.\n";
} // function definitions

void second() {
    cout << "I am now inside the second function.\n";
}

/*

 I am starting in the main function.
 I am now inside the first function.
 I am now inside the second function.
 Back in the main function again.
 
*/
