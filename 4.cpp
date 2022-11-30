#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    setlocale(0, ".1251");
    double a, b, x, y, e, k;
    x = 5.3;
    k = 2;
    e = 2.72;

    a = (log10(abs(x)));

    b = pow(e, k) + a;

    y = pow(a, 2) + pow(b, 2);


    cout << "result a = " << a << endl;
    cout << "result b = " << b << endl;
    cout << "result y = " << y << endl;
    return 0;
}