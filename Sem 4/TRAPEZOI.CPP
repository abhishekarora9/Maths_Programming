#include <iostream.h>
#include <conio.h>
#include <math.h>
using namespace std;

float func(float x)
{
    return (sqrt(1 + pow(x, 2)));
}

int main()
{
    clrscr();
    float a, b;
    cout << "ENTER THE LIMITS OF EQUATION" << endl;
    cin >> a >> b;
    int n;
    cout << "ENTER THE VALUE OF n" << endl;
    cin >> n;
    float h = (b - a) / n;
    int i = 0;
    float sum = 0;
    float start = func(a);
    float end = func(b);
    for (i = 1; i < n; i++) {
        sum = sum + func(a + i * h);
    }
    float ans = start + end + 2 * sum;
    ans = h / 2 * (ans);
    cout << ans;
    getch();
    return 0;
}