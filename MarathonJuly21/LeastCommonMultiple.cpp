#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        cout << (a * c) / __gcd(a, c) << ' ';
        cout << __gcd(b, d) << endl;
    }
    return 0;
}