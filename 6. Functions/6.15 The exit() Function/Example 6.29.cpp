#include <iostream>
#include <cstdlib>
using namespace std;

void Function();

int main() {
    Function();
}

void Function() {
    cout << "This program terminates with the exit function.\nBye!\n";
    exit(0);
    cout << "This message will never be displayed, because the program has already terminated.\n";
}

/*

 This program terminates with the exit function.
 Bye!
 
*/
