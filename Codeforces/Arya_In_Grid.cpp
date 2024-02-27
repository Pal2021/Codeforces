#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool isvalid(int x, int y, int n, int m, vector<vector<int>> &dp)
{
    if (x < 1 || x > n || y < 1 || y > m || dp[x][y] == -1)
    {
        return false;
    }
    return true;
}

int f(int x, int y, int n, int m, int l, vector<vector<int>> &dp)
{
    if (!isvalid(x + l, y, n, m, dp))
    {
        return 0; // Add a default return value
    }
    dp[x][y] = -1;
    return 1 + f(x + l, y, n, m, l, dp);
}

void solve(ll n, ll m, ll x, ll y, ll l)
{
    int c = 0;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0)); // Fix array size
    int dx[] = {1, -1, 1, -1};
    int dy[] = {-1, 1, 1, -1};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int X = x + dx[i];
            int Y = y + dy[i];
            c += f(X, Y, n, m, l, dp); // Use '+=' to accumulate results
        }
    }
    cout << c << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, x, y, l;
        cin >> n >> m >> x >> y >> l;
        solve(n, m, x, y, l);
    }
}
