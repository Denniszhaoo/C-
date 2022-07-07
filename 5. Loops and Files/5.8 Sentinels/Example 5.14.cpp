#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numStudents, numTests;
    double total, avg;
    cout << fixed << showpoint << setprecision(1);
    cout << "This program averages test scores.\nFor how many students do you have scores? ";
    cin >> numStudents;
    cout << "How many test scores does each student have? ";
    cin >> numTests;
    cout << "\n";
    for (int student=1; student<=numStudents; student++)
    {
        total=0;
        for (int test=1; test<=numTests; test++)
        {
            double score;
            cout << "Enter score " << test << " for student " << student << ": ";
            cin >> score;
            total+=score;
        }
        avg=total/numTests;
        cout << "The average score for student " << student << " is " << avg << ".\n\n";
    }
}

/*
 
 This program averages test scores.
 For how many students do you have scores? 2
 How many test scores does each student have? 3
 
 Enter score 1 for student 1: 84
 Enter score 2 for student 1: 79
 Enter score 3 for student 1: 97
 The average score for student 1 is 86.7.

 Enter score 1 for student 2: 92
 Enter score 2 for student 2: 88
 Enter score 3 for student 2: 94
 The average score for student 2 is 91.3.

*/
