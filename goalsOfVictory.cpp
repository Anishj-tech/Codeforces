#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long teams[n];
        for (long long i = 0; i < n - 1; i++)
        {
            cin >> teams[i];
        }
        long long sum = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            sum += teams[i];
        }
        cout << -1 * sum << endl;
    }
    return 0;
}