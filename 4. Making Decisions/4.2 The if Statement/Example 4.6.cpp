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
    {
        cout << "Congratulations!\n";
        cout << "That's a high score.\n";
        cout << "You deserve a pat on the back!\n";
    }
}

/*
 
 Enter 3 test scores and I will average them: 94 94 100
 Your average is 96.0.
 Congratulations!
 That's a high score.
 You deserve a pat on the back!

*/
