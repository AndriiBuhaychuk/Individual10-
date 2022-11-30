#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	double ma, wb, i, ax, ay, bx, by, cx, cy;
	ma = 0, wb = 0, i = 2;
	ax = 0, ay = 0, bx = i, by = i - 1, cx = -1, cy = i + 1;
	double a = sqrt(pow((bx - ax), 2) + pow((by - ay), 2));
	double b = sqrt(pow((cx - bx), 2) + pow((cy - by), 2));
	double c = sqrt(pow((ax - cx), 2) + pow((ay - cy), 2));
	// Знаходимо бісектрису та медіану
	wb = sqrt(2) * a * b / (a + b);
	ma = 1 / 2 * sqrt(2 * pow(a, 2)) + (2 * pow(b, 2)) - pow(c, 2);

	cout << "The bisector of triangle ABC is drawn to side c = " << wb << endl;
	cout << "The median of triangle ABC is drawn to side a = " << ma << endl;
	return 0;
}