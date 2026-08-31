
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> nums;

    // Store numbers in vector
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            nums.push_back(s[i] - '0');
        }
    }

    // Sort numbers
    sort(nums.begin(), nums.end());

    // Print numbers
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0)
            cout << "+";

        cout << nums[i];
    }

    cout << endl;

    return 0;
}
