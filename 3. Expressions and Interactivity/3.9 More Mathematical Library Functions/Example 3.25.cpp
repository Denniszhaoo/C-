#include <iostream>
#include <cstdlib> // for rand and srand
#include <ctime> // for time
using namespace std;

int main() {
    short unsigned seed=time(0);
    srand(seed);
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
}

/*
 
 563084921
 1955318565
 96871914

*/
