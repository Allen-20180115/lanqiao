#include <iostream>
using namespace std;

int main()
{
    int x, i, j, k, w;
    cin >> x;
    int ok = 0;
    for (i = 0; i * i <= x; i++)
    {
        if (x - i * i >= 0)
        {
            int m = x - i * i;
            for (j = i; j * j <= m; j++)
            {
                if (m - j * j >= 0)
                {
                    int n = m - j * j;
                    for (k = j; k * k <= n; k++)
                    {
                        if (n - k * k >= 0)
                        {
                            int p = n - k * k;
                            for (w = k; w * w <= p; w++)
                            {
                                if (p - w * w == 0)
                                {
                                    ok = 1;
                                    cout << i << " " << j << " " << k << " " << w << endl;
                                    break;
                                }
                            }
                        }
                        if (ok)
                            break;
                    }
                }
                if (ok)
                    break;
            }
        }
        if (ok)
            break;
    }
    getchar();
    getchar();
    return 0;
}