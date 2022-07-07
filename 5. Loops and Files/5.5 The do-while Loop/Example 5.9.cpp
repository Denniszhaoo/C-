#include <iostream>
using namespace std;

int main() {
    const int MIN_NUMBER=1, MAX_NUMBER=10;
    int num;
    cout << "Number Number Squared\n";
    cout << "-------------------------\n";
    for (num=MIN_NUMBER; num<=MAX_NUMBER; num++)
        cout << num << "\t\t\t" << num*num << endl;
}

/*
 
 Number Number Squared
 -------------------------
 1            1
 2            4
 3            9
 4            16
 5            25
 6            36
 7            49
 8            64
 9            81
 10           100

*/
