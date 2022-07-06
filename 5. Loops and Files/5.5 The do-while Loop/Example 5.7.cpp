#include <iostream>
using namespace std;

int main() {
    int score1, score2, score3;
    double avg;
    char again;
    do
    {
        cout << "Enter 3 scores and I will average them: ";
        cin >> score1 >> score2 >> score3;
        avg=(score1+score2+score3)/3;
        cout << "The average is " << avg << ".\n";
        cout << "Do you want to average another set? ";
        cin >> again;
    } while (again=='Y' || again=='y');
}

/*
 
 Enter 3 scores and I will average them: 80 90 70
 The average is 80.
 Do you want to average another set? y
 Enter 3 scores and I will average them: 60 75 88
 The average is 74.
 Do you want to average another set? n

*/
