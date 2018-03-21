#include <iostream>
using namespace std;

int main()
{
    int s = 0;
    for (int i = 1; i <= 100; i++)
        for (int j = i;; j++)
        {
            s += j;
            if (s == 236)
            {
                cout << i << endl;
                system("PAUSE");
                return 0;
            }
            if (s > 236)
            {
                s = 0;
                break;
            }
        }
    return 0;
}