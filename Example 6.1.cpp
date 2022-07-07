#include <iostream>
using namespace std;

void displayMessage() {
    cout << "Hello from the displayMessage function.\n";
}

int main() {
    cout << "Hello from the main function.\n";
    displayMessage();
    cout << "Back in the main function again.\n";
}

/*

 Hello from the main function.
 Hello from the displayMessage function.
 Back in the main function again.
 
*/
