#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M, N;
    cin >> M >> N;
    int result = M * (N / 2);
    if (N % 2)
    {
        result += (M / 2);
    }
    cout << result;
    return 0;
}