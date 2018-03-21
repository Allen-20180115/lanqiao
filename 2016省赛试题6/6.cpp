#include <iostream>
using namespace std;

int ans = 0;
int vis[10];
int flag[3][4];
int mpt[3][4];

void init()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            flag[i][j] = 1;
    flag[0][0] = flag[2][3] = 0;
}

void solve()
{
    int ok = 1;
    int d[8][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {1, 1}, {-1, 1}, {1, -1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (!flag[i][j])
                continue;
            for (int k = 0; k < 8; k++)
            {
                int x = i + d[k][0];
                int y = j + d[k][1];
                if (x < 0 || x > 2 || y < 0 || y > 3 || !flag[x][y])
                    continue;
                if (abs(mpt[x][y] - mpt[i][j]) == 1)
                {
                    ok = 0;
                    break;
                }
            }
            if (!ok)
                break;
        }
        if (!ok)
            break;
    }
    if (ok)
        ans++;
}

void dfs(int index)
{
    int x = index / 4;
    int y = index % 4;
    if (x == 3)
    {
        solve();
        return;
    }
    if (flag[x][y])
    {
        for (int i = 0; i <= 9; i++)
            if (!vis[i])
            {
                vis[i] = 1;
                mpt[x][y] = i;
                dfs(index + 1);
                vis[i] = 0;
            }
    }
    else
        dfs(index + 1);
}

int main()
{
    init();
    dfs(0);
    cout << ans << endl;
    getchar();
    return 0;
}