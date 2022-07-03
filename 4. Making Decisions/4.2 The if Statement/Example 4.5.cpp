#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int score1, score2, score3;
    double average;
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;
    average=(score1+score2+score3)/3;
    cout << fixed << showpoint << setprecision(1) << "Your average is " << average << ".\n";
    if (average=100) // this is an asignment not an equality operation
        cout << "Congratulations! That's a perfect score!\n"; // this is always executed
}

/*
 
 Enter 3 test scores and I will average them: 20 10 5
 Your average is 11.0.
 Congratulations! That's a perfect score!

*/
