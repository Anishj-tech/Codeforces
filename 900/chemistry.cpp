
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        if (n == 2 && k == 0)
        {
            if (s[0] == s[1])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }

        if (n == 2 && k == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        unordered_map<char, long long> mpp;

        for (long long i = 0; i < n; i++)
        {
            mpp[s[i]]++;
        }

        long long odd = 0;

        for (auto it = mpp.begin(); it != mpp.end(); it++)
        {
            if (it->second % 2 != 0)
            {
                odd++;
            }
        }

        if (odd <= k + 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
