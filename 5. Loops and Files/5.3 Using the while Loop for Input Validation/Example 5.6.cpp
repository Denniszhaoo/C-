#include <iostream>
using namespace std;

int main() {
    const int MIN_NUMBER=1, MAX_NUMBER=10;
    int num=MIN_NUMBER; // counter: a variable that is regularly incremented or decremented each time a loop iterates
    cout << "Number Number Squared\n";
    cout << "-------------------------\n";
    while (num<=MAX_NUMBER)
    {
        cout << num << "\t\t\t" << num*num << endl;
        num++;
    }
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
