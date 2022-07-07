#include <iostream>
#include <iomanip>
using namespace std;

void showMenu();
void showFees(double,int);

int main() {
    int choice, months;
    const int ADULT_CHOICE=1, CHILD_CHOICE=2, SENIOR_CHOICE=3, QUIT_CHOICE=4;
    const double ADULT=40, CHILD=20, SENIOR=30;
    cout << fixed << showpoint << setprecision(2);
    do
    {
        showMenu();
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
            switch (choice)
            {
                case ADULT_CHOICE:
                    showFees(ADULT,months);
                    break;
                case CHILD_CHOICE:
                    showFees(CHILD,months);
                    break;
                case SENIOR_CHOICE:
                    showFees(SENIOR,months);
                    break;
            }
        }
    } while (choice!=QUIT_CHOICE);
}

void showMenu() {
    cout << "\nHealth Club Membership Menu\n\n1. Standard Adult Membership\n2. Child Membership\n3. Senior Citizen Membership\n4. Quit the Program\n\nEnter your choice: ";
}

void showFees(double memberRate,int months) {
    cout << "The total charges are $" << memberRate*months << ".\n";
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
 
*/
