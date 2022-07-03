#include <iostream>
using namespace std;

int main() {
    char choice;
    cout << "Enter A, B, or C: ";
    cin >> choice;
    switch(choice)
    {
        case 'A': cout << "You entered A.\n"; // without break statements, all below the case will be executed
        case 'B': cout << "You entered B.\n";
        case 'C': cout << "You entered C.\n";
        default: cout << "You did not enter A, B, or C!\n";
    }
}

/*
 
 Enter A, B, or C: A
 You entered A.
 You entered B.
 You entered C.
 You did not enter A, B, or C!

*/
