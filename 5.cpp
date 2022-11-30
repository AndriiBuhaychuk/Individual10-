#include <iostream>
#include<math.h>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	double  x;
	x = 0;
	cout << "write value x = " << endl;
	cin >> x;

	x = ((log10(cos(5 * x) / sin(x) + sin(5 * x) / cos(x)) * sin(10 * x) - sin(6 * x) / cos(4 * x)));

	cout << "final result = " << x << endl;

	return 0;
}