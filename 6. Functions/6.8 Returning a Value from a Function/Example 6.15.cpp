#include <iostream>
using namespace std;

bool isEven(int);

int main() {
    int val;
    cout << "Enter an integer and I will tell you if it is even or odd: ";
    cin >> val;
    if (isEven(val))
        cout << val << " is even.\n";
    else
        cout << val << " is odd.\n";
}

bool isEven(int number) {
    bool status;
    if (number%2==0)
        status=true;
    else
        status=false;
    return status;
}

/*

 Enter an integer and I will tell you if it is even or odd: 5
 5 is odd.
 
*/
