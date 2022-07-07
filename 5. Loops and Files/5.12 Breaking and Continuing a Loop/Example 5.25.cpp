#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double value;
    char choice;
    cout << "Enter a number: ";
    cin >> value;
    cout << "This program will raise " << value << " to the power of 0 through 10.\n";
    for (int count=0; count<=10; count++)
    {
        cout << value << " raised to the power of " << count << " is " << pow(value,count) << ".\nEnter Q to quit or any other key to continue. ";
        cin >> choice;
        if (choice=='Q' || choice=='q')
            break;
    }
}

/*

 Enter a number: 2
 This program will raise 2 to the power of 0 through 10.
 2 raised to the power of 0 is 1.
 Enter Q to quit or any other key to continue. C
 2 raised to the power of 1 is 2.
 Enter Q to quit or any other key to continue. C
 2 raised to the power of 2 is 4.
 Enter Q to quit or any other key to continue. C
 2 raised to the power of 3 is 8.
 Enter Q to quit or any other key to continue. Q
 
*/
