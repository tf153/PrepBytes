#include <iostream>
#include <algorithm>
typedef unsigned long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int T;
    ll a, b, c, d;
    cin >> T;
    while (T--)
    {
        a = b = c = d = 0;
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (a <= b && a <= c && a <= d)
                a += arr[i];
            else if (b <= c && b <= d && b <= a)
                b += arr[i];
            else if (c <= d && c <= a && c <= b)
                c += arr[i];
            else
                d += arr[i];
        }
        // cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
        cout << max(a, max(b, max(c, d))) - min(a, min(b, min(c, d))) << endl;
    }
    return 0;
}