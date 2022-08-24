#include <iostream>

using namespace std;

int main() {
    const int sales = 950000;
    const int state_tax_rate = 4;
    const int county_tax_rate = 2;

    const int state_tax = sales / 100 * state_tax_rate;
    const int county_tax = sales / 100 * county_tax_rate;

    cout << "Sales: " << sales << endl
         << "State Tax: " << state_tax << endl
         << "County Tax: " << county_tax;
    return 0;
}