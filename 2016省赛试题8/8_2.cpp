#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int x, ok = 0;
    cin >> x;
    for (int i = 0; i * i <= x; i++)
    {
        for (int j = i; j * j <= x; j++)
        {
            for (int k = j; k * k <= x; k++)
            {
                int p = x - i * i - j * j - k * k;
                double w = sqrt((double)p);
                if (w == (int)w)
                {
                    ok = 1;
                    cout << i << " " << j << " " << k << " " << (int)w << endl;
                    break;
                }
            }
            if (ok)
                break;
        }
        if (ok)
            break;
    }
    system("PAUSE");
    return 0;
}