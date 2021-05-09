#include <iostream>
#include <algorithm>
using namespace std;
struct Axis
{
    int x, y;
};
bool comp(Axis a, Axis b) { return a.x < b.x; }
int main()
{
    int t, n;
    cin >> t;
    long long ans;
    while (t--)
    {
        cin >> n;
        Axis axis[n];
        ans = 0;

        for (int i = 0; i < n; i++)
            cin >> axis[i].x >> axis[i].y;
        sort(axis, axis + n, comp);
        int index = 0;
        for (int i = 1; i < n; i++)
        {
            if (axis[index].y >= axis[i].x)
            {
                axis[index].y = max(axis[index].y, axis[i].y);
                axis[index].x = min(axis[index].x, axis[i].x);
            }
            else
            {
                index++;
                axis[index] = axis[i];
            }
        }
        for (int i = 0; i <= index; i++)
            ans += axis[i].y - axis[i].x;
        cout << ans << endl;
    }
    return 0;
}