#include <iostream>
#include <numeric>
#define ll long long int
using namespace std;
ll min_time(long arr[], long n)
{
    if (n == 0)
        return 0;
    ll temp, sum = 0;
    for (long i = 0; i < n; i++)
        sum += arr[i];
    temp = sum;
    sum >>= 1;
    sum++;
    bool t[n + 1][sum + 1];
    for (long i = 0; i <= n; i++)
        t[i][0] = true;
    for (long i = 1; i <= sum; i++)
        t[0][i] = false;
    for (long i = 1; i <= n; i++)
    {
        for (long j = 1; j <= sum; j++)
        {
            t[i][j] = t[i - 1][j];
            if (arr[i - 1] <= j)
                t[i][j] |= t[i - 1][j - arr[i - 1]];
        }
    }
    for (long i = sum; i > 0; i--)
    {
        if (t[n][i])
        {
            return 2 * (temp - i);
        }
    }
    return temp;
}
int main()
{
    long n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << min_time(arr, n);
    return 0;
}