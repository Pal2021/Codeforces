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

void solve(ll n, ll m, ll x1, ll y1, ll x2, ll y2)
{

    int dx[4] = {-1, 1, -1, 1};
    int dy[4] = {1, -1, -1, 1};
    set<pair<int, int>> spi1, spi2;
    for (int j = 0; j < 4; j++)
    {
        spi1.insert({(x1 + dx[j] * n), (y1 + dy[j] * m)});
        spi1.insert({(x1 + dx[j] * m), (y1 + dy[j] * n)});

        spi2.insert({(x2 + dx[j] * n), (y2 + dy[j] * m)});
        spi2.insert({(x2 + dx[j] * m), (y2 + dy[j] * n)});
    }
    int ans = 0;
    for (auto i : spi1)
    {
        if (spi2.find(i) != spi2.end())
        {
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, x1, x2, y1, y2;
        cin >> n >> m;
        cin >> x1 >> x2 >> y1 >> y2;
        solve(n, m, x1, x2, y1, y2);
    }
    return 0;
};