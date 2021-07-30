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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ans = 0;
        for (int i = 0; i < m && arr[i] < 1; i++)
        {
            ans += arr[i];
        }
        cout << abs(ans) << endl;
    }
    return 0;
}
/*
Book Sales
Once Prepbudy is gone to a book sales. There were 
N
 books in the stall. Book with index 
i
 costs 
P
i
. Some books have a negative price - their owners are ready to pay Prepbudy if he buys their very old book. But the sales have a rule that Prepbudy can buy at most 
M
 books.
Prepbudy is busy buying the books to help him to find the maximum amount of money he gets from the sale.
Note: It is possible that Prepbudy does not buy any book.

Input Format
The first line of the input contains a single integer 
T
 - the number of test cases.
The first line of each test case contains two space-separated integers 
N
 - the number of books in the sale and 
M
 denoting the maximum number of books Prepbudy can buy.
The next line contains 
N
 space-separated integers 
P
1
,
P
2
.
.
.
.
.
P
N
 - the price of the 
i
t
h
 box.

Output Format
For each test case print, a single integer - the maximum amount of money Prepbudy can get from the sale.

Constraints
1
≤
T
≤
10
2

1
≤
N
,
M
≤
10
4

−
10
3
≤
P
i
≤
10
3

Time Limit
1 second

Example
Sample Input
3
5 3 
-6 0 35 -2 4
4 2 
7 0 0 -7
3 2
1 2 3

Sample Output
8
7
0
*/