#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int ADULT_CHOICE=1, CHILD_CHOICE=2, SENIOR_CHOICE=3, QUIT_CHOICE=4;
    const double ADULT=40, CHILD=20, SENIOR=30;
    int choice, months;
    double charges;
    cout << fixed << showpoint << setprecision(2);
    do
    {
        cout << "\nHealth Club Membership Menu\n\n1. Standard Adult Membership\n2. Child Membership\n3. Senior Citizen Membership\n4. Quit the Program\n\nEnter your choice: ";
        cin >> choice;
        while (choice<ADULT_CHOICE || choice>QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }
        if (choice!=QUIT_CHOICE)
        {
            cout << "For how many months? ";
            cin >> months;
            switch(choice)
            {
                case ADULT_CHOICE:
                    charges=months*ADULT;
                    break;
                case CHILD_CHOICE:
                    charges=months*CHILD;
                    break;
                case SENIOR_CHOICE:
                    charges=months*SENIOR;
            }
            cout << "The total charges are $" << charges << ".\n";
        }
        else
            cout << "Program ending.\n";
    } while (choice!=QUIT_CHOICE);
}

/*
 
 Health Club Membership Menu

 1. Standard Adult Membership
 2. Child Membership
 3. Senior Citizen Membership
 4. Quit the Program

 Enter your choice: 1
 For how many months? 12
 The total charges are $480.00.

 Health Club Membership Menu

 1. Standard Adult Membership
 2. Child Membership
 3. Senior Citizen Membership
 4. Quit the Program

 Enter your choice: 4
 Program ending.

*/
