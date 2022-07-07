#include <iostream>
using namespace std;

void deeper() {
    cout << "I am now inside the deeper function.\n";
}

void deep() {
    cout << "I am now inside the deep function.\n";
    deeper();
    cout << "Now I am back in the deep function.\n";
}

int main() {
    cout << "I am starting in the main function.\n";
    deep();
    cout << "Back in the main function again.\n";
}

/*

 I am starting in the main function.
 I am now inside the deep function.
 I am now inside the deeper function.
 Now I am back in the deep function.
 Back in the main function again.
 
*/
