#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    s[0] = toupper(s[0]); // toupper function in c++  is directly used here to convert the first char(s[0] to capital letter)
    cout << s;
    return 0;
}