#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    int a;
    while (t--)
    {
        cin >> str;
        while ((a = str.find("10")) != string::npos)
        {
            str.erase(a, 2);
        }
        while ((a = str.find("00")) != string::npos)
        {
            str.erase(a, 2);
        }
        cout << str.length() << endl;
    }
    return 0;
}