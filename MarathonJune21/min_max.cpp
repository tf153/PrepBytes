#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if (n & 1)
    {
        cout << arr[n >> 1];
    }
    else
    {
        cout << arr[(n >> 1) - 1];
    }
    return 0;
}