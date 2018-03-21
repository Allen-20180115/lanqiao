// »ØËİ
#include <iostream>
using namespace std;

int ans = 0, sum = 0;

void dfs(int cur)
{
    if (cur == 13)
    {
        if (sum == 13)
            ans++;
        return;
    }
    for (int i = 0; i <= 4; i++)
    {
        sum += i;
        dfs(cur + 1);
        sum -= i;
    }
}

int main()
{
    dfs(0);
    cout << ans << endl;
    getchar();
    getchar();
    return 0;
}