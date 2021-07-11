#include <bits/stdc++.h>
using namespace std;
bool solve(string &str)
{
    int len = str.length();
    if (str[0] == str[len - 1])
        return false;
    int a = 0, b = 0, c = 0;
    const char start = str[0], end = str[len - 1];
    for (int i = 0; i < len; i++)
    {
        if (str[i] == start)
        {
            a++;
        }
        else if (str[i] == end)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    stack<char> st;
    if (a + c == b)
    {
        for (int i = 0; i < len; i++)
        {
            if (str[i] == end)
            {
                if (st.top() == '(')
                    st.pop();
                else
                    return false;
            }
            else
            {
                st.push('(');
            }
        }
        if (st.empty())
            return true;
        return false;
    }
    else if (a == b + c)
    {
        for (int i = 0; i < len; i++)
        {
            if (str[i] == start)
            {
                st.push('(');
            }
            else
            {
                if (st.top() == '(')
                    st.pop();
                else
                    return false;
            }
        }
        if (st.empty())
            return true;
        return false;
    }
    else
        return false;
}
int main()
{
    int t;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> str;
        cout << (solve(str) ? "YES\n" : "NO\n");
    }
    return 0;
}