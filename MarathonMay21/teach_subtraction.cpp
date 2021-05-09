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
        int i = 0;
        while (i != k)
        {
            if (n % 10 == 0)
                n /= 10;
            else
                n--;
            i++;
        }
        cout << n << endl;
    }
    return 0;
}