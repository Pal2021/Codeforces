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

void solve(ll n, ll k, ll a, ll b, vector<pair<ll, ll>> vpi)
{
    ll dist1 = 0;
    if (a <= k && b <= k)
    {
        cout << 0 << endl;
        return;
    }
    if (b < a)
    {
        swap(a, b);
    }
    ll ans = INT_MIN;
    dist1 = (abs(vpi[a - 1].first - vpi[b - 1].first) + abs(vpi[a - 1].second - vpi[b - 1].second));
    ll d1 = INT_MAX;
    ll d2 = INT_MAX;
    for (int i = 0; i < k; i++)
    {
        d1 = min(d1, (abs(vpi[a - 1].first - vpi[i].first) + abs(vpi[a - 1].second - vpi[i].second)));
        d2 = min(d2, (abs(vpi[b - 1].first - vpi[i].first) + abs(vpi[b - 1].second - vpi[i].second)));
    }

    ans = min(dist1, d1 + d2);
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<pair<ll, ll>> vpi;
        for (int i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            vpi.push_back({x, y});
        }

        solve(n, k, a, b, vpi);
    }

    return 0;
}
