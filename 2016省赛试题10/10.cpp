#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

typedef long long LL;

LL a[100], a1[100], a2[100], a3[100], a4[100];
set<LL> Set;

bool cmp(LL a, LL b)
{
    return a > b;
}

LL gcd(LL a, LL b)
{
    return b == 0 ? a : gcd(b, a % b);
}

LL gcd2(LL a, LL b)
{
    return a <= b ? a : gcd2(b, a / b);
}

int main()
{
    int n;
    LL x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Set.insert(x);
    }
    int k = 0;
    for (auto i = Set.begin(); i != Set.end(); ++i)
        a[k++] = *i;
    sort(a, a + k, cmp);
    for (int i = 0; i <= k - 2; i++)
    {
        a1[i] = a[i] / gcd(a[i], a[i + 1]);
        a2[i] = a[i + 1] / gcd(a[i], a[i + 1]);
    }
    sort(a1, a1 + k - 1, cmp);
    sort(a2, a2 + k - 1, cmp);
    for (int i = 0; i <= k - 3; i++)
    {
        a3[i] = gcd2(a1[i], a1[i + 1]);
        a4[i] = gcd2(a2[i], a2[i + 1]);
    }
    sort(a3, a3 + k - 2);
    sort(a4, a4 + k - 2);
    cout << a3[0] << "/" << a4[0] << endl;
    getchar();
    getchar();
    return 0;
}