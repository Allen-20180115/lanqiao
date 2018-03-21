#include <iostream>
using namespace std;

int a[8] = {[4] = 1};
int vis[10];

void dfs(int cur)
{
    if (cur == 8)
    {
        int x = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
        int y = a[4] * 1000 + a[5] * 100 + a[6] * 10 + a[1];
        int z = a[4] * 10000 + a[5] * 1000 + a[2] * 100 + a[1] * 10 + a[7];
        if (x + y == z)
            cout << y << endl;
        return;
    }
    if (cur == 4)
    {
        dfs(cur + 1);
        return;
    }
    for (int i = 0; i <= 9; i++)
    {
        if (i == 1)
            continue;
        if (!vis[i])
        {
            a[cur] = i;
            vis[i] = 1;
            dfs(cur + 1);
            vis[i] = 0;
        }
    }
}

int main()
{
    dfs(0);
    getchar();
    getchar();
    return 0;
}