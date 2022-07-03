#include <iostream>
using namespace std;

int main() {
    char feedGrade;
    cout << "Our pet food is available in three grades: A, B, and C.\n";
    cout << "Which do you want pricing for? ";
    cin >> feedGrade;
    switch(feedGrade)
    {
        case 'a':
        case 'A': cout << "30 cents per pound.\n";
            break;
        case 'b':
        case 'B': cout << "20 cents per pound.\n";
            break;
        case 'c':
        case 'C': cout << "15 cents per pound.\n";
            break;
        default: cout << "This is an invalid choice.\n";
    }
}

/*
 
 Our pet food is available in three grades: A, B, and C.
 Which do you want pricing for? b
 20 cents per pound.

*/
