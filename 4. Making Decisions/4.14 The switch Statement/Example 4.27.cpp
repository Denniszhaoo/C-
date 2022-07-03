#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice, months;
    double charges;
    const double ADULT=40, CHILD=20, SENIOR=30;
    const int ADULT_CHOICE=1, CHILD_CHOICE=2, SENIOR_CHOICE=3, QUIT_CHOICE=4;
    cout << "Health Club Membership Menu\n\n1. Standard Adult Membership\n2. Child Membership\n3. Senior Citizen Membership\n4. Quit the Program\n\nEnter your choice: ";
    cin >> choice;
    cout << fixed << showpoint << setprecision(2);
    switch(choice)
    {
        case ADULT_CHOICE:
            cout << "For how many months? ";
            cin >> months;
            charges=months*ADULT;
            cout << "The total charges are $" << charges << ".\n";
            break;
        case CHILD_CHOICE:
            cout << "For how many months? ";
            cin >> months;
            charges=months*CHILD;
            cout << "The total charges are $" << charges << ".\n";
            break;
        case SENIOR_CHOICE:
            cout << "For how many months? ";
            cin >> months;
            charges=months*SENIOR;
            cout << "The total charges are $" << charges << ".\n";
            break;
        case QUIT_CHOICE:
            cout << "Program ending.\n";
            break;
        default: cout << "The valid choices are 1 through 4. Run the program again and select one of those.\n";
    }
}

/*
 
 Health Club Membership Menu

 1. Standard Adult Membership
 2. Child Membership
 3. Senior Citizen Membership
 4. Quit the Program

 Enter your choice: 2
 For how many months? 6
 The total charges are $120.00.

*/
