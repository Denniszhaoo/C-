#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    int number;
    inputFile.open("Numbers.txt");
    while (inputFile>>number)
    {
        cout << number << endl;
    }
    inputFile.close();
}

/*

 100
 200
 300
 
*/
