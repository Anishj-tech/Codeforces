#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int total = k * w * (w + 1) / 2;
    int ans = total - n;

    if (ans < 0)
        cout << 0;
    else
        cout << ans;

    return 0;
}