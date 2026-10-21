#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;

    cin >> N;
    long long a[N];

    for (int i = 0; i < N; i++)
        cin >> a[i];

    long long mini_ops = INT_MAX;
    for (int i = 0; i < N; i++)
        mini_ops = min(mini_ops, abs(a[i]));

    cout << mini_ops << endl;
    return 0;
}
