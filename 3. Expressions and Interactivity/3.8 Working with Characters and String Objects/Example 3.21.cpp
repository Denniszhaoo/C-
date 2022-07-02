#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch;
    cout << "This program has paused. Press Enter to continue.";
    cin.get(ch);
    cout << "It has paused a second time. Please press Enter again.";
    ch=cin.get();
    cout << "It has paused a third time. Please press Enter again.";
    cin.get();
    cout << "Thank you!\n";
}

/*
 
 This program has paused. Press Enter to continue.
 It has paused a second time. Please press Enter again.
 It has paused a third time. Please press Enter again.
 Thank you!

*/
