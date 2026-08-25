#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                cout << abs(i - 2) + abs(j - 2); // instead of calculating the every move directly we use this formula to move the 1 to the centre position.
            }
        }
    }
    return 0;
}