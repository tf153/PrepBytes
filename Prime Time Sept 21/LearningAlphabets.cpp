/*
Learning Alphabets
Arif is learning about alphabets and the keys associated with them. He got to know that 
a
 has a key 
1
, 
b
 has a key 
2
, 
c
 has a key 
3
, and so on. Now, Arif wants to replace a character with its repetition 
K
 number of times, where 
K
 is the key associated with the character. He wants to apply this logic within a segment in a string 
S
 of lowercase English letters. After applying the logic he is interested in the length of the segment. Given the 
Q
 number of queries, help Arif to find the length of the segment after applying the logic.

Input Format
The first line of input contains a single integer 
T
 denoting the number of test cases:
Each test case follows:

First line of each test case contains two integers 
N
 and 
Q
 denoting the length of the string and the number of queries respectively.
Second line of each test case contains a single string 
S
.
Q
 ​lines follow: each containing two integers
L
￼ and
R
￼ denoting the range of the segments
Output Format
For each test case, print 
Q
 lines: each line containing a single integer denoting the length of the segment after applying the logic.

Time Limit
1 second

Constraints
1
≤
T
≤
10

1
≤
N
,
Q
≤
10
5

1
≤
L
≤
R
≤
N

Example
Sample Input
2
6 3
babacd
1 3
2 4
1 5
9 3
prepbytes
4 6
2 8
6 7

Sample Output
5
4
9
43
91
45

Sample test Case Explanation
For the first testcase:

1st Query: babacd -> bbabbacd -> 5
2nd Query: babacd -> babbacd -> 4
3rd Query: babacd -> bbabbacccd ->9
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, l, r;
        cin >> n >> q;
        string str;
        cin >> str;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = str[i] - 'a' + 1;
        }
        for (int Q = 0; Q < q; Q++)
        {
            cin >> l >> r;
            cout << accumulate(arr + l - 1, arr + r, 0) << endl;
        }
    }
    return 0;
}