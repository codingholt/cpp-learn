#include <iostream>

using namespace std;

int main() {
    cout << "Fahrenheit: ";
    double fahrenheit_temp;

    cin >> fahrenheit_temp;
    double celsius_temp = (fahrenheit_temp - 32) * 5 / 9;

    cout << "Celsius: " << celsius_temp << endl;

    return 0;
}