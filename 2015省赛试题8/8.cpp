#include <iostream>
using namespace std;

int main()
{
    int w, m, n, mx, my, nx, ny;
    cin >> w >> m >> n;
    mx = m / (w + 1);
    nx = n / (w + 1);
    my = m % (w + 1);
    ny = n % (w + 1);
    if (mx % 2 == 1)
        my = w - my;
    if (nx % 2 == 1)
        ny = w - ny;
    cout << abs(mx - nx) + abs(my - ny) << endl;
    getchar();
    getchar();
    return 0;
}