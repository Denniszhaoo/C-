#include <iostream>
using namespace std;

const int BIRDS=500; // global constant

void california();

int main() {
    cout << "In the main function, there are " << BIRDS << " birds.\n";
    california();
}

void california() {
    const int BIRDS=10000; // local constant with the same name; however, you cannot have two local variables or constants with the same name in the same function
    cout << "In the california function, there are " << BIRDS << " birds.\n";
}

/*

 In the main function, there are 500 birds.
 In the california function, there are 10000 birds.
 
*/
