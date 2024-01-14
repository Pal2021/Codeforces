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

void solve(vector<vector<int>> vpi)
{

    int n = vpi.size();
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (vpi[i].size() == 1)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << count / 2 << endl;
    }
    else
    {
        cout << (count / 2) + 1 << endl;
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        for (int i = 1; i < n; ++i)
        {
            double u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        solve(adj);
    }

    return 0;
}
