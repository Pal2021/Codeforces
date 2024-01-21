#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define vpii vector<pair<int, int>>
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
void solve(string a, string b, string c)
{
    for (int i = 0; i < a.size(); i++)
    {
        if ((a[i] != c[i] && b[i] != c[i]))
        {
            cout << "YES" << endl;

            return;
        }
    }
    cout << "NO" << endl;
    return;
}
void bfs(vector<int> adj[], int V, int E)
{
    int vis[V + 1] = {0};
    vis[1] = 1;
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                q.push(it);
                vis[it] = 1;
            }
        }
    }
}

int main()
{
    int V, E;
    cin >> V >> E;
    vector<int> adj[V + 1];
    for (int i = 1; i <= E; i++)
    {
        int v, u;
        cin >> v >> u;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    // for (int i = 1; i <= V; i++)
    // {
    //     cout << i << "->";
    //     for (auto it : adj[i])
    //     {
    //         cout << it << " ";
    //     }
    //     cout << endl;
    // }
    bfs(adj, V, E);
    return 0;
};