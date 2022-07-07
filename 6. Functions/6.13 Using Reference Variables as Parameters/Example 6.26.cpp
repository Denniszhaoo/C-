#include <iostream>
using namespace std;

void doubleNum(int &), getNum(int &);

int main() {
    int value;
    getNum(value);
    doubleNum(value);
    cout << "That value doubled is " << value << ".\n";
}

void getNum(int &userNum) {
    cout << "Enter a number: ";
    cin >> userNum;
}

void doubleNum (int &refVar) {
    refVar*=2;
}

/*

 Enter a number: 12
 That value doubled is 24.
 
*/
