#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile;
    int numberOfDays;
    double sales;
    cout << "For how many days do you have sales? ";
    cin >> numberOfDays;
    outputFile.open("Sales.txt");
    for (int count=1; count<=numberOfDays; count++)
    {
        cout << "Enter the sales for day " << count << ": ";
        cin >> sales;
        outputFile << sales << endl;
    }
    outputFile.close();
    cout << "Data written to Sales.txt.\n";
}

/*
 
 For how many days do you have sales? 5
 Enter the sales for day 1: 1000
 Enter the sales for day 2: 2000
 Enter the sales for day 3: 3000
 Enter the sales for day 4: 4000
 Enter the sales for day 5: 5000
 Data written to Sales.txt.

*/
