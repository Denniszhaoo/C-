#include <iostream>
using namespace std;

void showLocal();

int main() {
    showLocal();
    showLocal();
}

void showLocal() {
    int localNum=5; // local variable
    cout << "localNum is " << localNum << ".\n";
    localNum=99; // even though the last statement in the showLocal function stores 99 in localNum, the variable is destroyed when the function returns; the next time the function is called, localNum is re-created and initialized to 5 again
}

/*

 localNum is 5.
 localNum is 5.
 
*/
