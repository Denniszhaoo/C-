#include <iostream>
using namespace std;

int sum(int,int); // this is a value-returning function

int main() {
    int value1=20, value2=40, total;
    total=sum(value1,value2);
    cout << "The sum of " << value1 << " and " << value2 << " is " << total << ".\n"; // we usually omit "return 0" at the end of the main function
}

int sum(int num1,int num2)
{
    return num1+num2;
}

/*

 The sum of 20 and 40 is 60.
 
*/
