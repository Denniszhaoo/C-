#include <iostream>
using namespace std;

void displayStars(int=10,int=1);

int main() {
    displayStars(); // use default values for cols and rows
    cout << endl;
    displayStars(5); // use default values for rows
    cout << endl;
    displayStars(7,3);
}

void displayStars(int cols,int rows)
{
    for (int down=0; down<rows; down++)
    {
        for (int across=0; across<cols; across++)
            cout << "*";
        cout << endl;
    }
}

/*

 **********

 *****

 *******
 *******
 *******
 
*/
