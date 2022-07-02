#include <iostream>
using namespace std;

int main() {
    int begInv, sold, store1, store2, store3;
    cout << "One week ago, 3 new widget stores opened at the same time with the same beginning inventory.\n";
    cout << "What was the beginning inventory? ";
    cin >> begInv;
    store1=store2=store3=begInv;
    cout << "How many widgets has store 1 sold? ";
    cin >> sold;
    store1-=sold;
    cout << "How many widgets has store 2 sold? ";
    cin >> sold;
    store2-=sold;
    cout << "How many widgets has store 3 sold? ";
    cin >> sold;
    store3-=sold;
    cout << "The current inventory of each store:\n";
    cout << "Store 1: " << store1 << endl;
    cout << "Store 2: " << store2 << endl;
    cout << "Store 3: " << store3 << endl;
}

/*
 
 One week ago, 3 new widget stores opened at the same time with the same beginning inventory.
 What was the beginning inventory? 100
 How many widgets has store 1 sold? 25
 How many widgets has store 2 sold? 15
 How many widgets has store 3 sold? 45
 The current inventory of each store:
 Store 1: 75
 Store 2: 85
 Store 3: 55

*/
