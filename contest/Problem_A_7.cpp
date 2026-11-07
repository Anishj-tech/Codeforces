#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int evenA = 0, oddA = 0;
        int evenB = 0, oddB = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                evenA++;
            else
                oddA++;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];

            if (b[i] % 2 == 0)
                evenB++;
            else
                oddB++;
        }

        if (k % 2 == 0)
        {
            if (evenB >= evenA)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            if (oddB >= oddA)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}