#include <iostream>
using namespace std;

void showFees(double,int);

int main() {
    const double ADULT=40, SENIOR=30, CHILD=20;
    cout << "Testing an adult membership...\nCalling the showFees function with arguments " << ADULT << " and 10.\n";
    showFees(ADULT,10);
    cout << "\nTesting an senior membership...\nCalling the showFees function with arguments " << SENIOR << " and 10.\n";
    showFees(SENIOR,10);
    cout << "\nTesting a child membership...\nCalling the showFees function with arguments " << CHILD << " and 10.\n";
    showFees(CHILD,10);
}

void showFees(double memberRate,int months) {
    cout << "The total charges are $" << memberRate*months << ".\n";
}

/*

 Testing an adult membership...
 Calling the showFees function with arguments 40 and 10.
 The total charges are $400.

 Testing an senior membership...
 Calling the showFees function with arguments 30 and 10.
 The total charges are $300.

 Testing a child membership...
 Calling the showFees function with arguments 20 and 10.
 The total charges are $200.
 
*/
