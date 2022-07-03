#include <iostream>
using namespace std;

int main() {
    int modelNum;
    cout << "Our TVs come in three models: the 100, 200, and 300.\n";
    cout << "Which do you want? ";
    cin >> modelNum;
    cout << "That model has the following features:\n";
    switch(modelNum)
    {
        case 300: cout << "\tPicture-in-a-picture\n";
        case 200: cout << "\tStereo sound\n";
        case 100: cout << "\tRemote control\n";
            break;
        default: cout << "You can only choose the 100, 200, or 300.\n";
    }
}

/*
 
 Our TVs come in three models: the 100, 200, and 300.
 Which do you want? 200
 That model has the following features:
     Stereo sound
     Remote control

*/
