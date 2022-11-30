#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // маємо трапецію ABCD, та висоту Е. Також маємо середню лінію FG//


    float a, b, c, d, e, p, s, ab, bc, cd, ad, fg;
    cout << "Specify AB, but so, that =  CD =  ";
    cin >> ab;
    cout << "Specify ВС =  ";
    cin >> bc;
    cout << "Specify СD =  ";
    cin >> cd;
    cout << "Specify AD =  ";
    cin >> ad;


    fg = (ad + bc) / 2;
    p = ab + bc + cd + ad; //Периметр
    s = ((bc + ad) / 2) * fg; //Площа
    cout << "Perimeter: " << p << endl;
    cout << "Square: " << s;

    return 0;
}