#include <bits/stdc++.h>
using namespace std;
long total_fight(priority_queue<long, vector<long>, greater<long>> &even, priority_queue<long, vector<long>, greater<long>> &odd)
{
    if (even.empty())
        return 0;
    long min_even = even.top() / 2, min_odd = odd.top() * 3;
    even.pop();
    odd.pop();
    if (min_even & 1)
        odd.push(min_even);
    else
        even.push(min_even);
    odd.push(min_odd);
    return (long)1 + total_fight(even, odd);
}
int main()
{
    ios::sync_with_stdio(false);
    int T, n, temp;
    priority_queue<long, vector<long>, greater<long>> odd, even;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp & 1)
                odd.push(temp);
            else
                even.push(temp);
        }
        cout << total_fight(even, odd) << endl;
    }
    return 0;
}