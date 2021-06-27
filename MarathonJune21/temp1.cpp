#include <bits/stdc++.h>
using namespace std;
unordered_set<long long int> us;
void Util(vector<int> &A, vector<vector<int>> &res,
          vector<int> &subset, int index)
{
    res.push_back(subset);
    for (int i = index; i < A.size(); i++)
    {
        subset.push_back(A[i]);
        Util(A, res, subset, i + 1);
        subset.pop_back();
    }

    return;
}
vector<vector<int>> subsets(vector<int> &A)
{
    vector<int> subset;
    vector<vector<int>> res;
    int index = 0;
    Util(A, res, subset, index);

    return res;
}
long long int myfun(int x, int y)
{
    return x * y;
}
bool gcd(vector<int> &vec)
{
    int len = vec.size();
    if (len == 1)
        return true;
    if (len == 0)
        return false;
    long long int pro = accumulate(vec.begin(), vec.end(), 1, myfun);
    cout << pro << endl;
    if (us.find(pro) != us.end())
        return false;
    int g = __gcd(vec[0], vec[1]);
    for (int i = 2; i < len; i++)
    {
        g = __gcd(g, vec[i]);
    }
    if (g == 1)
    {
        us.insert(pro);
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<vector<int>> res = subsets(arr);
    int count = 0;
    for (vector<int> i : res)
    {
        if (gcd(i))
            count++;
    }
    cout << count;
    return 0;
}
