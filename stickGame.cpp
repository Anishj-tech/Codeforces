#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (min(n, m) % 2 == 1) // the game continues for exactly min(n,m) if odd then akshat or else malvika
        cout << "Akshat";
    else
        cout << "Malvika";

    return 0;
}