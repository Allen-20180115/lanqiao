#include <ctime>
#include <iostream>
using namespace std;

bool is_prime(int x)
{
    int i;
    if (x == 2)
        return true;
    for (i = 2; i < x; i++)
        if (x % i == 0)
            return false;
    if (i == x)
        return true;
    return false;
}

int main()
{
    for (int a = 2; a < 10000; a++)
    {
        int ok = 0;
        for (int d = 1; d <= 1000; d++)
            if (is_prime(a) &&
                is_prime(a + d) &&
                is_prime(a + 2 * d) &&
                is_prime(a + 3 * d) &&
                is_prime(a + 4 * d) &&
                is_prime(a + 5 * d) &&
                is_prime(a + 6 * d) &&
                is_prime(a + 7 * d) &&
                is_prime(a + 8 * d) &&
                is_prime(a + 9 * d))
            {
                ok = 1;
                cout << d << endl;
                break;
            }
        if (ok)
            break;
    }
    cout << "Time used : " << (double)clock() / CLOCKS_PER_SEC << "s" << endl;
    getchar();
    getchar();
    return 0;
}