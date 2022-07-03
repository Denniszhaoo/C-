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
        cout << "Congratulations!\n"; // without brace, this is the complete if statement, and this cout statement will be executed only if the if statement is true
        cout << "That's a high score.\n"; // without brace, these two cout statements are always executed, since they are not included in the if statement
        cout << "You deserve a pat on the back!\n";
}

/*
 
 Enter 3 test scores and I will average them: 80 90 70
 Your average is 80.0.
 That's a high score.
 You deserve a pat on the back!

*/
