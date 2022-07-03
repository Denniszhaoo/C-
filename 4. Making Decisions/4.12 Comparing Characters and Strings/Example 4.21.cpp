#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const double PRICE_A=249, PRICE_B=299;
    string partNum;
    cout << "The stereo part numbers are\nBoom Box: part number S-29A\nShelf Model: part number S-29B\nEnter the part number of the stereo you wish to purchase: ";
    cin >> partNum;
    cout << fixed << showpoint << setprecision(2);
    if (partNum=="S-29A")
        cout << "The price is $" << PRICE_A << ".\n";
    else if (partNum=="S-29B")
        cout << "The price is $" << PRICE_B << ".\n";
    else
        cout << partNum << " is not a valid part number.\n";
}

/*
 
 The stereo part numbers are
 Boom Box: part number S-29A
 Shelf Model: part number S-29B
 Enter the part number of the stereo you wish to purchase: S-29B
 The price is $299.00.

*/
