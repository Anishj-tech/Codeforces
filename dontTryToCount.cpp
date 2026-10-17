#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        string resultant = x;
        int cnt = 0;

        while (resultant.find(s) == string::npos)
        {
            resultant += resultant;
            cnt++;

            if (cnt > 6)
                break;
        }

        if (resultant.find(s) != string::npos)
            cout << cnt << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}