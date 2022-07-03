#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int HIGH_SCORE=95;
    int score1, score2, score3;
    double average;
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;
    average=(score1+score2+score3)/3;
    cout << fixed << showpoint << setprecision(1) << "Your average is " << average << ".\n";
    if (average>HIGH_SCORE)
        cout << "Congratulations! That's a high score!\n";
}

/*
 
 Enter 3 test scores and I will average them: 95 99 97
 Your average is 97.0.
 Congratulations! That's a high score!

*/
