#include <bits/stdc++.h>
using namespace std;
string findSmallestPermutation(string s)
{
    int len = s.length();
    sort(s.begin(), s.end());
    int i = 0;
    while (s[i] == '0')
        i++;

    swap(s[0], s[i]);
    return s;
}
int main()
{
    string s = "5468001";
    string res = findSmallestPermutation(s);
    cout << res << endl;
    return 0;
}