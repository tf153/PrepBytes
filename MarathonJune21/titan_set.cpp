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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        if (k == 0 && arr[0] != 0)
        {
            cout << 1 << endl;
            continue;
        }
        int i = 0;
        while (arr[i] < k)
        {
            i++;
        }
        if (arr[i] == k)
        {
            cout << arr[i] - i + 1 << endl;
            continue;
        }
        else
        {
            cout << k - i << endl;
        }
    }
    return 0;
}