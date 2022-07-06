#include <iostream>
using namespace std;

int main() {
    const double MAX_TEMP=102.5;
    double temperature;
    cout << "Enter the substance's Celsius temperature: ";
    cin >> temperature;
    while (temperature>MAX_TEMP)
    {
        cout << "The temperature is too high. Turn the thermostat down and wait 5 minutes. Then take the Celsius temperature again and enter it here: ";
        cin >> temperature;
    }
    cout << "The temperature is acceptable.\nCheck it again in 15 minutes.\n";
}

/*
 
 Enter the substance's Celsius temperature: 104.7
 The temperature is too high. Turn the thermostat down and wait 5 minutes. Then take the Celsius temperature again and enter it here: 103.2
 The temperature is too high. Turn the thermostat down and wait 5 minutes. Then take the Celsius temperature again and enter it here: 102.1
 The temperature is acceptable.
 Check it again in 15 minutes.

*/
