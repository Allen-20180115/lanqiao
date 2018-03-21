#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    freopen("data.txt", "r", stdin);
    double a, b;
    double ans = 0;
    while (cin >> a >> b)
        ans += a * b / 100;
    cout << ans << endl;
    fclose(stdin);
    freopen("CON", "r", stdin);   //关闭文件后需将标准输入流重定向回控制台,否则无法使用getchar()或system()使屏幕暂停
    getchar();
    getchar();
    return 0;
}