#include <iostream>

using namespace std;

int main() {
    cout << "Enter your fahrenheit temprature: ";
    double fahrenheit_temp;

    cin >> fahrenheit_temp;
    double celsius_temp = (fahrenheit_temp - 32) * 5 / 9;

    cout << fahrenheit_temp << " degrees fahrenheit" << endl
         << "is the same as: " << celsius_temp << " degrees celsius" << endl;

    return 0;
}