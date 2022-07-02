#include <iostream>
using namespace std;

int main() {
    short testVar=32767;
    cout << testVar << endl;
    testVar=testVar+1;
    cout << testVar << endl;
    testVar=testVar-1;
    cout << testVar << endl;
}

/*
 
 32767
 -32768
 32767
 
*/
