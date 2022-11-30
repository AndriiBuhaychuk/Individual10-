#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(0, ".1251");
    double m1, m2, m3, k1, k2, k3, sum1, sum2, sum3, total;
    cout << "Enter the price of product: ";
    cin >> m1;
    cin >> m2;
    cin >> m3;
    cout << "Enter kilograms: ";
    cin >> k1 >> k2 >> k3;
    sum1 = m1 * k1;
    sum2 = m2 * k2;
    sum3 = m3 * k3;
    total = sum1 + sum2 + sum3;

    cout << " The price of the product 1:   " << sum1 << "uan " << endl;
    cout << " The price of the product 2:   " << sum2 << "uan " << endl;
    cout << " The price of the product 3:   " << sum3 << "uan " << endl;
    cout << " Total: " << total << "uan" << endl;
    return 0;
}

