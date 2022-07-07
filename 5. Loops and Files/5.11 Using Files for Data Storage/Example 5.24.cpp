#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile;
    string filename;
    int number;
    cout << "Enter the filename: ";
    cin >> filename;
    inputFile.open(filename);
    if (inputFile)
    {
        while(inputFile>>number)
        {
            cout << number << endl;
        }
        inputFile.close();
    }
    else
    {
        cout << "Error opening the file.\n";
    }
}

/*

 Enter the filename: Numbers.txt
 100
 200
 300
 
*/
