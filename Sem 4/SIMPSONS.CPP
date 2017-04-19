#include <iostream>
//#include <conio.h>
using namespace std;

float func(float a)
{
    return 1/(1+a*a);
}

int main()
{
    //clrscr();
    float a, b;
    int n;
    cout << "ENTER  THE LIMITS" << endl;
    cin >> a >> b;
    cout << "ENTER THE VALUE OF n" << endl;
    cin >> n;
    float h = (b - a) / n;
    float start = func(a);
    float end = func(b);
    float even = 0, odd = 0;
    int i = 1;
    for (i = 1; i < n; i++) {
        if (i % 2 == 0) {
            even = even + func(a + i * h);
        }
        else {
            odd = odd + func(a + i * h);
        }
    }
    float ans = start + end + 4 * odd + 2 * even;
    ans = h / 3 * (ans);
    cout << ans;
    //getch();
    return 0;
}
