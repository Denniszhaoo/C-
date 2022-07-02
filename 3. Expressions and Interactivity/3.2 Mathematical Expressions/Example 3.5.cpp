#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI=3.14159;
    double area, radius;
    cout << "This program calculates the area of a circle.\nWhat is the radius of the circle? ";
    cin >> radius;
    area=PI*pow(radius,2);
    cout << "The area is " << area << ".\n";
}

/*
 
 This program calculates the area of a circle.
 What is the radius of the circle? 10
 The area is 314.159.
 
*/
