#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double COST_PER_CUBIC_FOOT=0.23, CHARGE_PER_CUBIC_FOOT=0.5;
    double length, width, height, volume, cost, charge, profit;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    volume=length*width*height;
    cost=volume*COST_PER_CUBIC_FOOT;
    charge=volume*CHARGE_PER_CUBIC_FOOT;
    profit=charge-cost;
    cout << "The colume of the crate is " << volume << " cubic foot.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
}

/*
 
 Enter the dimensions of the crate (in feet):
 Length: 10
 Width: 8
 Height: 4
 The colume of the crate is 320.00 cubic foot.
 Cost to build: $73.60
 Charge to customer: $160.00
 Profit: $86.40

*/
