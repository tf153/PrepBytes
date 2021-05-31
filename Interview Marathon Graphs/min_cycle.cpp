#include <bits/stdc++.h>
using namespace std;
#define N 100200

void Add_edge(int x, int y, vector<int> gr[])
{
    gr[x].push_back(y);
    gr[y].push_back(x);
}

int shortest_cycle(int n, vector<int> gr[])
{
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        vector<int> dist(n, (int)(1e9));
        vector<int> par(n, -1);
        dist[i] = 0;
        queue<int> q;

        // Push the source element
        q.push(i);

        // Continue until queue is not empty
        while (!q.empty())
        {

            // Take the first element
            int x = q.front();
            q.pop();

            // Traverse for all it's childs
            for (int child : gr[x])
            {

                // If it is not visited yet
                if (dist[child] == (int)(1e9))
                {

                    // Increase distance by 1
                    dist[child] = 1 + dist[x];

                    // Change parent
                    par[child] = x;

                    // Push into the queue
                    q.push(child);
                }

                // If it is already visited
                else if (par[x] != child and par[child] != x)
                    ans = min(ans, dist[x] + dist[child] + 1);
            }
        }
    }

    // If graph contains no cycle
    if (ans == INT_MAX)
        return -1;

    // If graph contains cycle
    else
        return ans;
}

// Driver code
int main()
{
    int n, e, t, u, v;
    cin >> t;
    while (t--)
    {
        vector<int> gr[N];
        cin >> n >> e;
        for (int i = 0; i < e; i++)
        {
            cin >> u >> v;
            Add_edge(u, v, gr);
        }
        cout << shortest_cycle(n, gr) << endl;
    }
    return 0;
}
