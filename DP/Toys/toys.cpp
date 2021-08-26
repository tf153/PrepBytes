#include <bits/stdc++.h>
using namespace std;
int solve(int n, int c, int vol[], int hap[])
{
    int dp[n + 1][c + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (vol[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], hap[i - 1] + dp[i - 1][j - vol[i - 1]]);
            }
        }
    }
    return dp[n][c];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int vol[n], hap[n];
        for (int i = 0; i < n; i++)
            cin >> vol[i];
        for (int i = 0; i < n; i++)
            cin >> hap[i];
        cout << solve(n, c, vol, hap) << endl;
    }
    return 0;
}