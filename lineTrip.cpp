#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int g = a[0];

        for (int i = 1; i < n; i++)
        {
            g = max(g, a[i] - a[i - 1]);
        }

        int tail = 2 * (x - a[n - 1]);

        int ans = max(g, tail);
        cout << ans << "\n";
    }
    return 0;
}