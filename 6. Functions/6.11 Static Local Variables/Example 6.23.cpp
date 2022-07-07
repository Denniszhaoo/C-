#include <iostream>
using namespace std;

void showStatic();

int main() {
    for (int count=0; count<5; count++)
        showStatic();
}

void showStatic() {
    static int statNum=5;
    cout << "statNum is " << statNum << ".\n";
    statNum++;
}

/*

 statNum is 5.
 statNum is 6.
 statNum is 7.
 statNum is 8.
 statNum is 9.
 
*/
