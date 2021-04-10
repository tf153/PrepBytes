#include <iostream>
#include <climits>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n, neg = 0;
    long min = INT_MAX;
    cin >> n;
    long A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] < 0)
            neg++;
    }
    if (!(n & 1))
    {
        for (int i = 0; i < n; i++)
        {
            if (A[i] < 0)
                cout << A[i] << " ";
            else
                cout << -A[i] - 1 << " ";
        }
    }
    else
    {
        if (n == neg)
        {
            for (int i = 0; i < n; i++)
            {
                if (A[i] > min)
                {
                    min = i;
                }
            }
        }
        else
        {
            min = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                if (A[i] > min)
                    min = i;
            }
        }
        for (int i = 0; i < min; i++)
        {
            if (A[i] > 0)
                cout << -A[i] - 1 << " ";
            else
                cout << A[i] << " ";
        }
        if (A[min] > 0)
            cout << A[min] << " ";
        else
            cout << -A[min] - 1 << " ";
        for (int i = min + 1; i < n; i++)
        {
            if (A[i] > 0)
                cout << -A[i] - 1 << " ";
            else
                cout << A[i] << " ";
        }
    }
}