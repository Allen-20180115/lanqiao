// ±©ËÑ
#include <iostream>
using namespace std;

int ans = 0;
int s[13];

int main()
{
    for (s[0] = 0; s[0] <= 4; s[0]++)
        for (s[1] = 0; s[1] <= 4; s[1]++)
            for (s[2] = 0; s[2] <= 4; s[2]++)
                for (s[3] = 0; s[3] <= 4; s[3]++)
                    for (s[4] = 0; s[4] <= 4; s[4]++)
                        for (s[5] = 0; s[5] <= 4; s[5]++)
                            for (s[6] = 0; s[6] <= 4; s[6]++)
                                for (s[7] = 0; s[7] <= 4; s[7]++)
                                    for (s[8] = 0; s[8] <= 4; s[8]++)
                                        for (s[9] = 0; s[9] <= 4; s[9]++)
                                            for (s[10] = 0; s[10] <= 4; s[10]++)
                                                for (s[11] = 0; s[11] <= 4; s[11]++)
                                                    for (s[12] = 0; s[12] <= 4; s[12]++)
                                                    {
                                                        int sum = 0;
                                                        for (int i = 0; i < 13; i++)
                                                            sum += s[i];
                                                        if (sum == 13)
                                                            ans++;
                                                    }
    cout << ans << endl;
    getchar();
    getchar();
    return 0;
}