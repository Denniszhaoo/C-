#include <iostream>
using namespace std;

void first() {
    cout << "I am now inside the first function.\n";
}

void second() {
    cout << "I am now inside the second function.\n";
}

int main() {
    cout << "I am starting in the main function.\n";
    first();
    second();
    cout << "Back in the main function again.\n";
}

/*

 I am starting in the main function.
 I am now inside the first function.
 I am now inside the second function.
 Back in the main function again.
 
*/
