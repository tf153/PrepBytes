#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        n = n % k;
        int n1 = -1, n2 = -2, n3 = -3;
        while (n1 != n3)
        {
            n3 = n2;
            n2 = n1;
            n1 = n = abs(n - k);
        }
        cout << min(n1, min(n2, n3)) << endl;
    }
    return 0;
}