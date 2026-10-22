
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> frequency_map;

        for (int i = 0; i < n; i++)
        {
            int X;
            cin >> X;
            frequency_map[X]++;
        }

        if (frequency_map.size() > 2)
        {
            cout << "No\n";
        }
        else if (frequency_map.size() == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            int freq1 = frequency_map.begin()->second;
            int freq2 = frequency_map.rbegin()->second;

            if (abs(freq1 - freq2) <= 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
