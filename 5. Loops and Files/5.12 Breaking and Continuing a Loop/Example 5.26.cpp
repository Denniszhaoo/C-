#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int dvdCount=1, numDVDs;
    double total=0;
    char current;
    cout << "How many DVDs are being rented? ";
    cin >> numDVDs;
    do
    {
        if ((dvdCount%3)==0)
        {
            cout << "DVD #" << dvdCount << " is free!\n";
            continue; // immediately start the next iteration
        }
        cout << "Is DVD #" << dvdCount << " a current release? (Y/N) ";
        cin >> current;
        if (current=='Y' || current=='y')
            total+=3.5;
        else
            total+=2.5;
    } while (dvdCount++<numDVDs);
    cout << fixed << showpoint << setprecision(2);
    cout << "The total is $" << total << endl;
}

/*

 How many DVDs are being rented? 6
 Is DVD #1 a current release? (Y/N) y
 Is DVD #2 a current release? (Y/N) n
 DVD #3 is free!
 Is DVD #4 a current release? (Y/N) n
 Is DVD #5 a current release? (Y/N) y
 DVD #6 is free!
 The total is $12.00
 
*/
