/*
New Office
PrepBytes has opened a new office having 
N
 floors in it called the 
1
s
t
 floor through 
N
t
h
 floor and each floor has 
K
 rooms called the 
1
s
t
 room through 
K
t
h
 room. Here both 
N
 and 
K
 are single-digit integers and the 
j
t
h
 room on the 
i
t
h
 floor has the room number 
i
0
j
.

For Example, the 
3
r
d
 room on the 
2
n
d
 floor has room number 
203
.

Prepbudy appointed as new manager interested in the sum of room numbers of all rooms in the office where each room number is seen as a three-digit integer. Find this sum.

Input format
The first line contains a single integer 
T
 - the number of test cases.
The first line of the test case contains two space-separated integers 
N
 and 
K
 - the number of floors in the office and the number of rooms on each floor.

Output format
For each test case print a single integer - the sum of all room numbers in the office.

Constraints
1
≤
T
≤
100

1
≤
N
,
K
≤
9

Time Limit
1 second

Example
Sample Input
1
1 2

Sample Output
203

Explanation
For this test case 
The office has two rooms 
101
 and 
102
 so we have sum = 
101
+
102
=
203
.
*/
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
        int ans = 0;
        int temp = 0;
        for (int i = 1; i <= k; i++)
            temp += i;
        for (int i = 1; i <= n; i++)
        {
            ans += i * k * 100;
            ans += temp;
        }
        cout << ans << endl;
    }
    return 0;
}