#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int set = 0;
    for (int i = n - 1; i > 0; i--)
    {
        set = __builtin_popcount(i);
        if (set + i == n)
        {
            cout << "Yes";
            break;
        }
    }
    cout << "No";
    return 0;
}