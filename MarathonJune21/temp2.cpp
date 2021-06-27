#include <bits/stdc++.h>
using namespace std;

static unordered_set<long long int> us;
static vector<long long> glob;

void sieve(long long n)
{
    bool prime[n] = {true};
    for (long long p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            glob.push_back(p);
            for (long long i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
}

long long int myfun(int x, int y)
{
    long long int ans = x;
    ans *= y;
    return ans;
    ;
}

void util(vector<int> &a, vector<vector<int>> &res, vector<int> &subset, int I)
{
    res.push_back(subset);
    for (int i = I; i < a.size(); i++)
    {
        subset.push_back(a[i]);
        util(a, res, subset, i + 1);
        subset.pop_back();
    }
    return;
}
vector<vector<int>> sub(vector<int> &a)
{
    vector<int> ss;
    vector<vector<int>> res;
    int I = 0;
    util(a, res, ss, I);
    return res;
}

long long chk(vector<long long int> &vec)
{
    long long count = 0;
    for (auto a : vec)
    {
        long long i = 0;
        long long temp = glob[i];
        while (temp <= a)
        {
            if (a % temp == 0)
            {
                a /= temp;
            }
            temp = glob[++i];
            if (a == 1)
            {
                count++;
                //count=(count+1)%(1000000007);
                break;
            }
        }
    }
    return count;
}

long long solve(int N, vector<int> A)
{
    vector<long long int> vec;
    vector<vector<int>> ss = sub(A);
    for (auto a : ss)
    {
        long long int temp = accumulate(a.begin(), a.end(), 1, myfun);
        if (us.find(temp) == us.end())
        {
            vec.push_back(temp);
            us.insert(temp);
        }
    }
    return chk(vec);
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    sieve(10000);
    for (int i = 0; i < glob.size(); i++)
    {
        cout << glob[i] << '\t';
    }
    cout << endl;
    for (int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i_A = 0; i_A < N; i_A++)
        {
            cin >> A[i_A];
        }

        long long out_;
        out_ = solve(N, A);
        cout << out_;
        cout << "\n";
    }
}