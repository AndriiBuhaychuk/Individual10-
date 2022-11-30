#include <iostream>
#include<math.h>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, ".1251");
    double a, z1, z2;
    const double PI = 3.141592653589793;
    cout << "Write the value of à = " << endl;
    cin >> a;


    z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);

    z2 = 2 * sqrt(2) * cos(a) * sin((PI / 4) + 2 * a);
    cout << "Result of z1 = " << z1 << endl;
    cout << "Result of z2 = " << z2 << endl;

    return 0;
}