// ¶¯Ì¬¹æ»®
#include <iostream>
using namespace std;

int dp[14][14];

int main()
{
    dp[1][0] = dp[1][1] = dp[1][2] = dp[1][3] = dp[1][4] = 1;
    for (int i = 2; i <= 13; i++)
        for (int j = 0; j <= 13; j++)
        {
            if (j >= 4)
                dp[i][j] += dp[i - 1][j - 4];
            if (j >= 3)
                dp[i][j] += dp[i - 1][j - 3];
            if (j >= 2)
                dp[i][j] += dp[i - 1][j - 2];
            if (j >= 1)
                dp[i][j] += dp[i - 1][j - 1];
            dp[i][j] += dp[i - 1][j];
        }
    cout << dp[13][13] << endl;
    getchar();
    getchar();
    return 0;
}