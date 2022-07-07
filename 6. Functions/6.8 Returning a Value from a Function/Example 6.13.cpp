#include <iostream>
#include <iomanip>
using namespace std;

double getRadius();
double square(double);

int main() {
    const double PI=3.14159;
    double radius, area;
    cout << fixed << showpoint << setprecision(2);
    cout << "This program calculates the area of a circle.\n";
    radius=getRadius();
    area=PI*square(radius);
    cout << "The area is " << area << ".\n";
}

double getRadius() {
    double rad;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    return rad;
}

double square(double number) {
    return number*number;
}

/*

 This program calculates the area of a circle.
 Enter the radius of the circle: 10
 The area is 314.16.
 
*/
