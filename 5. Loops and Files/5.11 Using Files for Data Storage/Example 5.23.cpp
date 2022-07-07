#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    int number;
    inputFile.open("BadListOfNumbers.txt"); // The document BadListOfNumbers doesn't exist
    if (inputFile)
    {
        while (inputFile>>number)
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

 Error opening the file.
 
*/
