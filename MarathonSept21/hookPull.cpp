/*
Hook Pull
There are two hooks having lengths 
A
 and 
B
. When you pull the hook having length 
M
, you get 
M
 Zeni (PrepLand's currency) and the length of the hook decreases by 
1
. You can overall pull the hook twice, either you can pull the same hook two times or pull both the hooks once. What is the maximum number of Zeni you can get?

Input format
The first line of input contains an integer 
T
, denoting the number of test cases.
The second line of input contains two space-separated integers 
A
 and 
B
, denoting the length of the two hooks.

Output format
For each test case, print an integer denoting the maximum number of Zeni you can get.

Constraints
1
≤
T
≤
2
∗
10
3

1
≤
A
,
B
≤
2
∗
10
2

Time Limit
1 second

Example
Sample Input
4
1 1
4 3
5 5
100 20

Sample Output
2
7
10
199
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = max(n, m);
        if (n > m)
            n--;
        else
            m--;
        ans += max(n, m);
        cout << ans << endl;
    }
    return 0;
}