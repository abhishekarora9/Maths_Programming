#include <iostream.h>
#include <conio.h>

float f(float x, float y)
{
    float m;
    m = x - y * y;
    return m;
}

int main()
{
    clrscr();
    float h, x0, y0, xn, yn, k1, k2, k3, k4, k;
    int n;
    cout << "enter the value of h";
    cin >> h;
    cout << "enter the inital values of x, y";
    cin >> x0 >> y0;
    cout << "enter the value of x for which y is required";
    cin >> xn;
    while (x0 < xn) {
        k1 = h * f(x0, y0);
        k2 = h * f(x0 + h / 2, y0 + k1 / 2);
        k3 = h * f(x0 + h / 2, y0 + k2 / 2);
        k4 = h * f(x0 + h, y0 + k3);
        yn = y0 + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        y0 = yn;
        x0 += h;
        cout << x0 << " " << y0 << endl;
        
    }
    cout << "\nvalue of y is\n" << yn;
    getch();
    return 0;
}
