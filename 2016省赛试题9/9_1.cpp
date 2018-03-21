#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == i + 1)
            continue;
        for (int j = i + 1; j < n; j++)
            if (a[j] == i + 1)
            {
                swap(a[i], a[j]);
                cnt++;
                break;
            }
    }
    delete[] a;
    cout << cnt << endl;
    getchar();
    getchar();
    return 0;
}