#include <iostream>
using namespace std;

int main() {
    int num=4;
    cout << "The variable num is " << num << ".\n";
    cout << "I will now increment num.\n";
    num++;
    cout << "Now the variable num is " << num << ".\n";
    cout << "I will increment num again.\n";
    ++num;
    cout << "Now the variable num is " << num << ".\n";
    cout << "I will now decrement num.\n";
    num--;
    cout << "Now the variable num is " << num << ".\n";
    cout << "I will decrement num again.\n";
    --num;
    cout << "Now the variable num is " << num << ".\n";
}

/*
 
 The variable num is 4.
 I will now increment num.
 Now the variable num is 5.
 I will increment num again.
 Now the variable num is 6.
 I will now decrement num.
 Now the variable num is 5.
 I will decrement num again.
 Now the variable num is 4.

*/
