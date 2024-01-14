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
ll count(ll n)
{
    ll c = 0;
    while (n > 0)
    {
        c++;
        n = n / 10;
    }
    return c;
}
void solve(ll a, ll b, ll c)
{
    cout << string(a - 1, '0').insert(0, "1") << " " << string(c - 1, '0').insert(0, string(b - c + 1, '1')) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;

        solve(n, m, k);
    }
    return 0;
};