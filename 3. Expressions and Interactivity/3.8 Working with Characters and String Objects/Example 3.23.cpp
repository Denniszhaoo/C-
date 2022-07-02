#include <iostream>
using namespace std;

int main() {
    char ch;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cin.ignore(); // ignore the newline character
    cout << "Enter a character: ";
    ch=cin.get();
    cout << "Thank you!\n";
}

/*
 
 Enter a number: 100
 Enter a character: Z
 Thank you!

*/
