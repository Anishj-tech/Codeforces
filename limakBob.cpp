#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int count = 0; // initialize count as 0

    while (a <= b)
    {
        a *= 3;  // a's weight is tripled
        b *= 2;  // b's weight is doubled
        count++; // increment the count
    }
    cout << count;
    return 0;
}