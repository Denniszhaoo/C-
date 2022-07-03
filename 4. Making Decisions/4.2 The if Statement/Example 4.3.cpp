#include <iostream>
using namespace std;

int main() {
    int x=0, y=10;
    cout << "x is " << x << " and y is " << y << ".\n";
    if (x<y); // semicolon is misplaced so that the if statement has empty body
        cout << "x is greater than y.\n"; // this is always executed
}

/*
 
 x is 0 and y is 10.
 x is greater than y.

*/
