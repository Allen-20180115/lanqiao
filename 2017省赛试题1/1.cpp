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
    freopen("CON", "r", stdin);   //�ر��ļ����轫��׼�������ض���ؿ���̨,�����޷�ʹ��getchar()��system()ʹ��Ļ��ͣ
    getchar();
    getchar();
    return 0;
}