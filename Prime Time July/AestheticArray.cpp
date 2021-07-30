#include <bits/stdc++.h>
using namespace std;
bool solve(int arr[], int gcd, int n)
{
    for (int i = 0; i < n; i++)
    {
        int quo = arr[i] / gcd;
        while (quo % 3 == 0)
        {
            quo /= 3;
        }
        while (quo % 2 == 0)
        {
            quo >>= 1;
        }
        if (quo != 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    int gcd = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        gcd = __gcd(gcd, arr[i]);
    }
    cout << (solve(arr, gcd, n) ? "Yes" : "No");
    return 0;
}
/*
Aesthetic Array
Dev has an array 
A
 containing 
N
 integers. He wants to make this array aesthetic. He considers an array aesthetic if all elements of the array are equal.

To make his array aesthetic, he can perform the following 
2
 operations:

He can double any element.
He can triple any element.
He can perform any of these two operations any number of times on any element. Is it possible that Dev can make his array 
A
 aesthetic?

Input Format
The first line of the input contains an integer 
N
, the number of array elements.
The second line of the input contains 
N
 space-separated integer 
A
1
,
A
2
,
.
.
.
,
A
N
, present in the array 
A
.

Output Format
Print "Yes" (without the quotes) if Dev can make his array aesthetic, or "No" otherwise.

Constraints
2
≤
N
≤
10
5

1
≤
A
i
≤
10
9

Time Limit
2 seconds

Example
Sample Input 1
4
75 150 75 50

Sample Output 1
Yes

Sample Input 2
3
100 150 250

Sample Output 2
No

Explanation
In the first sample input, the first and third numbers should be doubled twice, the second number should be doubled once and the fourth number should be both doubled and tripled.
*/