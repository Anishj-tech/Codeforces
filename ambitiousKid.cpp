#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long mini_ops = INT_MAX;
    for (int i = 0; i < n; i++)
        mini_ops = min(mini_ops, abs(a[i]));

    cout << mini_ops << endl;
    return 0;
}
