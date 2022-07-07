#include <iostream>
using namespace std;

void showStatic();

int main() {
    for (int count=0; count<5; count++)
        showStatic();
}

void showStatic() {
    static int statNum; // static local variables are not destroyed when a function returns, and they exist for the lifetime of the program, even though their scope is only the function in which they are defined
    cout << "statNum is " << statNum << ".\n";
    statNum++;
}

/*

 statNum is 0.
 statNum is 1.
 statNum is 2.
 statNum is 3.
 statNum is 4.
 
*/
