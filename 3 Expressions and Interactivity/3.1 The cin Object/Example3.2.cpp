#include <iostream>
#include <string>
using namespace std;

int main() {
    int length, width, area;
    cout << "This program calculates the area of a rectangle.\nEnter the length and width of the rectangle separated by a space: ";
    cin >> length >> width;
    area=length*width;
    cout << "The area of the rectangle is " << area << endl;
}

/*
 
This program calculates the area of a rectangle.
Enter the length and width of the rectangle separated by a space: 10 20
The area of the rectangle is 200
 
*/
