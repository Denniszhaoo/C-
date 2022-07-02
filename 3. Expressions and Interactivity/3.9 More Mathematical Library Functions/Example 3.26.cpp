#include <iostream>
#include <cstdlib> // for rand and srand
#include <ctime> // for time
using namespace std;

int main() {
    const int MIN_VALUE=1;
    const int MAX_VALUE=6;
    int die1, die2;
    short unsigned seed=time(0); // get the system time
    srand(seed); // seed the random number generator
    cout << "Rolling the dice...\n";
    die1=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE; // limit the range of the random variable
    die2=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
    cout << die1 << endl;
    cout << die2 << endl;
}

/*
 
 Rolling the dice...
 5
 1

*/
