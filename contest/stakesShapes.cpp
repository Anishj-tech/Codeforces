
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long r, s, p;
        cin >> r >> s >> p;

        long long n = r + s + p;

        if (s >= p)
        {
            cout << string(n, 'R') << endl;
        }
        else if (p >= r)
        {
            cout << string(n, 'S') << endl;
        }
        else
        {
            cout << string(n, 'P') << endl;
        }
    }

    return 0;
}
