#include <cmath>
#include <iostream>

using namespace std;

int main() {
    cout << "Radius: ";
    double radius;
    cin >> radius;

    const double pi = 3.14;

    double area = pow(radius, 2) * pi;

    cout << "Area: " << area;

    return 0;
}