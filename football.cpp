#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() < 7)
    {
        cout << "NO";
        return 0;
    }
    int currStreak = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            currStreak++;
        }
        else
        {
            currStreak = 1;
        }
        if (currStreak >= 7)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}