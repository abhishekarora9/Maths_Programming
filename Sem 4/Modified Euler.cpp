#include <iostream.h>
#include <math.h>
#include <conio.h>

float func(float x, float y)
{
    return (x * x + y);
}

int main()
{
    clrscr();
    float x0, y0, xn, yn, h;
    cout << "enter the value of h\n";
    cin >> h;
    cout << "enter the inial values of x, y\n";
    cin >> x0 >> y0;
    cout << "enter the value of x at which y is required\n";
    cin >> xn;
    while (x0 < xn) {
        yn = y0 + 0.5 * h * (func(x0, y0) + func(x0 + h, y0 + h * func(x0, y0)));
        y0 = yn;
        x0 += h;
    }
    cout << "\nvalue of y is\n" << yn;
    getch();
    return 0;
}
