#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, city;
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Please enter your city: ";
    getline(cin, city);
    cout << "Hello, " << name << ".\n";
    cout << "You live in " << city << ".\n";
}

/*
 
 Please enter your name: Dennis Zhao
 Please enter your city: San Francisco
 Hello, Dennis Zhao.
 You live in San Francisco.

*/

