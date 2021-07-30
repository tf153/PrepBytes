#include <bits/stdc++.h>
using namespace std;
int solve(vector<string> &words)
{
    long long int i, j, k, m = 0;
    for (i = 0; i < words.size(); i++)
    {
        for (j = 0; j < words.size() && i != j; j++)
        {
            if (words[i].find_first_of(words[j]) == -1)
            {
                k = words[i].length() * words[j].length();
                if (k > m)
                    m = k;
            }
        }
    }
    return m;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        cout << solve(vec) << endl;
    }
    return 0;
}
/*
Find P
Whenever Jethalal gets into any sort of trouble he asks for help from his best friend Mehta. So like always Jetha is in big trouble since he has lost a number 
P
 that Babita Ji (Jetha's Crush) had given him. Mehta being the smart guy figured out a way to find that number 
P
 in the following manner.

Given a string array 
A
 of size 
N
, the required number 
P
 can be found as:

The maximum value of 
l
e
n
g
t
h
(
A
[
i
]
)
∗
l
e
n
g
t
h
(
A
[
j
]
)
 where 
i
<
j
.
Where the two words do not share common letters.
If no such two words exist, number 
P
=
0
.
Help Mehta to find the number 
P
 otherwise, Babita will get mad at Jetha.

Input Format
The first line of input contains an integer 
T
 denoting the number of test cases.
The first line of each test case contains an integer 
N
 denoting the number of strings in the array 
A
.
The second line of each test case contains 
N
 strings the elements of the array 
A
.

Output Format
Print an integer denoting the number 
P
.

Constraints
1
≤
T
≤
3

2
≤
N
≤
10
3

1
≤
A
[
i
]
.
l
e
n
g
t
h
≤
10
3

A
[
i
]
 ​consists only of lowercase English letters.
Where
A
[
i
]
￼ denotes elements of array
A
￼

Time Limit
1 second

Example
Sample Input
2
4
abc ab def bc
3
z zz zzzz

Sample Output
9
0

Sample Test case Explanation
In the first test case: abc and def can be taken, so the product is 
9
.
In the second test case: no two words satisfy the conditions.
*/