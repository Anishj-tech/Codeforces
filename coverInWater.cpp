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
        string s;
        cin >> s;

        bool cont_three_em_cells = false;
        int total_count_of_empty_cells = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                cont_three_em_cells = true;
                break;
            }
            if (s[i] == '.')
                total_count_of_empty_cells++;
        }
        if (cont_three_em_cells)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << total_count_of_empty_cells << endl;
        }
    }
    return 0;
}
