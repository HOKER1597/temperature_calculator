#include <iostream>

using namespace std;

int main() {
    const int num_temps = 5; // number of input temperatures
    const int low_temp = 0; // Lowest temperature
    const int high_temp = 100;  // Highest temperature

    int temp, sum = 0, highTemp = 0, lowTemp = 100, numAbove50 = 0;

    // input all temperatures
    for (int i = 0; i < num_temps; i++) {
        cout << "Enter temperature #" << i+1 << ": ";
        cin >> temp;

        // error output when the temperature is less than 0 and more than 100
        if (temp < low_temp || temp > high_temp) {
            cout << "Invalid temperature, please try again." << endl;
            i--;
            continue;
        }

        sum += temp;

        // Highest value search
        if (temp > highTemp) {
            highTemp = temp;
        }

        // Lowest value search
        if (temp < lowTemp) {
            lowTemp = temp;
        }

        // Number of temperatures above 50 search
        if (temp > 50) {
            numAbove50++;
        }
    }

    // output all values
    cout << endl << "Average temperature: " << (double) sum / num_temps << endl;
    cout << "Lowest temperature: " << lowTemp << endl;
    cout << "Highest temperature: " << highTemp << endl;
    cout << "Number of temperatures above 50: " << numAbove50 << endl;

    return 0;
}
