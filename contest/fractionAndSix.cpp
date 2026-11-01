
#include <bits/stdc++.h>
using namespace std;

string cancel(string p, string q)
{
    int freq[26] = {0};

    for (char c : p)
        freq[c - 'a']++;

    for (char c : q)
        freq[c - 'a']--;

    string ans = "";

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] < 0)
            return "";

        while (freq[i] > 0)
        {
            ans += char(i + 'a');
            freq[i]--;
        }
    }

    return ans;
}

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        string p, q;
        cin >> p >> q;

        string ans = cancel(p, q);

        if (ans == "isx")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
