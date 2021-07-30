#include <bits/stdc++.h>
using namespace std;
int Palindrome(string s, int n)
{
    unordered_map<char, int> cnt;
    string R = "";
    for (int i = 0; i < n; i++)
    {
        char a = s[i];
        cnt[a]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (cnt[i] % 2 != 0)
            R += i;
    }

    int l = R.length();
    int j = 0;
    for (int i = l - 1; i >= l / 2; i--)
    {
        cnt[R[i]]--;
        R[i] = R[j];
        cnt[R[j]]++;
        j++;
    }
    string first, middle, second;

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (cnt[i] != 0)
        {
            if (cnt[i] % 2 == 0)
            {
                int j = 0;
                while (j < cnt[i] / 2)
                {
                    first += i;
                    j++;
                }
            }
            else
            {
                int j = 0;
                while (j < (cnt[i] - 1) / 2)
                {
                    first += i;
                    j++;
                }
                middle += i;
            }
        }
    }
    second = first;
    reverse(second.begin(), second.end());
    string resultant = first + middle + second;
    cout << resultant << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.length();
        Palindrome(str, n);
    }
    return 0;
}
/*
Palindrome String
Prepbuddy has a string 
S
, and he is wondering if it can be converted to a palindrome or not. But there are some conversion rules:

Choose any position in the string and convert that character to any other lowercase character. This operation has a cost of 
1
 unit.
Permute the characters in the string to get a palindrome. This operation has a cost of 
0
 unit. 
The length of string should not change in any of the two operations. Your task is to obtain a palindrome string with the minimum cost. If there are several ways to do that you should get the lexicographically smallest palindrome. So firstly you should minimize the number of changes and then minimize the palindrome lexicographically. You have to answer for 
T
 independent test cases.

A palindrome is a word or a sequence of characters that reads the same backward as forward. For example, "madam" or "noon" are palindrome but "abc" is not. Lexicographically smallest palindrome means a palindrome string that is alphabetically smallest. For example, "abba" is smaller than "baab".

Input Format
The first line contains an integer 
T
, representing the number of test cases.
T
 ​test cases follow.
Each test case contains a string
S
￼ in single line.
String
S
￼ consists of lowercase English letters

Output Format
For each test case, print the lexicographically smallest palindrome that can be obtained with the minimum cost, in new line.

Constraints
1
≤
T
≤
10
2

1
≤
|
S
|
≤
10
5

Time Limit
1 second

Example
Sample Input
2
aabcd
baaab

Sample Output
abcba
ababa

Sample test case explanation
In the first test case, convert the character 'd' with 'b' and then permute to get "abcba" which is lexicographically smallest palindrome string that can be made with minimum cost.

In the second test case, 
S
 is already a palindrome but permute it to get the lexicographically smallest palindrome string i.e., "ababa".
 */