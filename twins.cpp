#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;

    // total coin sum
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    sort(a.begin(), a.end(), greater<>()); // desc order

    int mySum = 0; // sum of my coins
    int count = 0; // min coins count

    for (int i = 0; i < n; i++)
    {
        mySum += a[i];
        count++;
        if (mySum > total - mySum)
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}