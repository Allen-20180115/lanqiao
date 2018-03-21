#include <iostream>
using namespace std;

int ans = 0;        //用于统计有效的解法
int f[3][4];
int flag[3][4];
int d[4][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};       //用于定义选定方块左右上下方向上的四个邻接方块

void solve()
{
    int ok, mk = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
        {
            if (!f[i][j])
                continue;         //过滤掉本解法未选用的方块
            int mt;             //检测本解法所选五个方块是否合法
            ok = 0;
            mt = 0;
            for (int k = 0; k < 4; k++)
            {
                int m = i + d[k][0];
                int n = j + d[k][1];
                if (m < 0 || m > 2 || n < 0 || n > 3 || !f[m][n])
                    continue;           //不考虑不合法(越界)及未在本解法选用的邻接方块
                if (f[m][n])
                {
                    ok = 1;
                    mt++;        //用于统计该方块与其他四个方块的相邻数
                }
            }
            if (!ok)
                return;         //若检测到其中任一方块不合法，直接返回
            if (mt >= 2)
                mk += mt;      //统计与其他方块相邻数大于2的那些方块的总相邻数
        }
    if (ok && mk >= 4)    //满足每个方块至少与一个方块相邻且与其他方块相邻数大于2的那些方块的总相邻数大于4的才是有效解
        ans++;
}

void dfs(int index)
{
    if (index == 6)           //递归边界，从12个方块选择其中的5个
    {
        solve();           //共计12!/5!*(12-5)!=12*11*10*9*8/120=792种解法
        return;
    }
    else
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 4; j++)
                if (!flag[i][j])
                {
                    flag[i][j] = index;        //对本层所有可选择的方块统一进行标记
                    f[i][j] = 1;             //对当前解法中本层实际选择的方块进行标记
                    dfs(index + 1);          //递归调用
                    f[i][j] = 0;            //递归返回本层后清除上一种解法中本层所选方块的标记
                }
        for (int i = 0; i < 3; i++)           //
            for (int j = 0; j < 4; j++)       //
                if (flag[i][j] == index)     //
                    flag[i][j] = 0;          //递归返回上一层前清除本层所有方块标记
    }
}

int main()
{
    dfs(1);
    cout << ans << endl;
    getchar();
    return 0;
}