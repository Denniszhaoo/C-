#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile;
    int value1, value2, value3, sum;
    inFile.open("NumericData.txt");
    cout << "Reading data from the file.\n";
    inFile >> value1;
    inFile >> value2;
    inFile >> value3;
    inFile.close();
    sum=value1+value2+value3;
    cout << "Here are the numbers:\n" << value1 << " " << value2 << " " << value3 << endl;
    cout << "Their sum is: " << sum << ".\n";
}

/*
 
 Reading data from the file.
 Here are the numbers:
 32 0 32759
 Their sum is: 32791.

*/
