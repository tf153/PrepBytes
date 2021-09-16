/*
Prepbuddy and his Stones
Prepbuddy has 
N
 stones. The value of 
i
t
h
 stone is 
A
i
. You are his friend and you will have to choose some of these stones, possibly all or none and take them. However, you need to pay a cost of 
B
i
 to get the 
i
t
h
 stone. Let 
S
 be the sum of the value of the stones obtained and 
C
 be the sum of the cost paid. Find the maximum possible value of the difference of 
S
 and 
C
.  

Input format
The first line of input contains an integer 
T
, denoting the number of test cases.
The first line of the test case contains an integer 
N
.
The second line of the test case contains 
N
 space-separated integers 
A
1
,
A
2
,
A
3
,
.
.
.
.
,
A
N
 where 
A
i
 denotes the 
i
t
h
 element of array 
A
.
The third line of the testcase contains 
N
 space-separated integers 
B
1
,
B
2
,
B
3
,
.
.
.
.
,
B
N
 where 
B
i
 denotes the 
i
t
h
 element of array 
B
.

Output format
For each test case, print an integer denoting the maximum possible value of the difference of 
S
 and 
C
 (more precisely: 
S
−
C
).

Constraints
1
≤
T
≤
2
∗
10
2

1
≤
N
≤
5
∗
10
4

1
≤
A
i
,
B
i
≤
5
∗
10
4
 

Time Limit
1 second

Example
Sample Input
2
3
10 2 5
6 3 4
4
13 21 6 19
11 30 6 15

Sample Output
5
6
*/
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
        int a[n], b[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < a[i])
                ans += a[i] - b[i];
        }
        cout << ans << endl;
    }
    return 0;
}