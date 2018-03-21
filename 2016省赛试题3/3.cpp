#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int num[9];
    int cnt = 0;
    for (int i = 1; i <= 9; i++)
        num[i - 1] = i;
    do
    {
        if (num[0] + (double)num[1] / num[2] + (double)(num[3] * 100 + num[4] * 10 + num[5]) / (num[6] * 100 + num[7] * 10 + num[8]) == 10)
            cnt++;
    } while (next_permutation(num, num + 9));
    cout << cnt << endl;
    getchar();
    getchar();
    return 0;
}