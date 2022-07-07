#include <iostream>
using namespace std;

int main() {
    int game=1, points, total=0;
    cout << "Enter the number of points your team has earned so far in the season and then enter -1 when finished.\n\nEnter the points for game " << game << ": ";
    cin >> points;
    while (points!=-1)
    {
        total+=points;
        game++;
        cout << "Enter the points for game " << game << ": ";
        cin >> points;
    }
    cout << "\nThe total points are " << total << ".\n";
}

/*
 
 Enter the number of points your team has earned so far in the season and then enter -1 when finished.

 Enter the points for game 1: 7
 Enter the points for game 2: 9
 Enter the points for game 3: 4
 Enter the points for game 4: 6
 Enter the points for game 5: 8
 Enter the points for game 6: -1

 The total points are 34.

*/
