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
        if (n & 1)
            cout << "Sheldon\n";
        else
            cout << "Raj\n";
    }
    return 0;
}