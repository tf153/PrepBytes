#include <iostream>
using namespace std;
int K_small[20000];

long find_nth(int n)
{
    int count = 0;
    for (long i = 19;; i += 9)
    {
        int sum = 0;
        for (long x = i; x > 0; x /= 10)
            sum += x % 10;
        if (sum == 10)
            count++;
        if (count == n)
            return i;
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    int T, n, temp, sum;
    cin >> T;
    while (T--)
    {
        cin >> n;
        cout << find_nth(n) << endl;
    }
    return 0;
}