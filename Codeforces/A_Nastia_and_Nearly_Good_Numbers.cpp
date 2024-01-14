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

void solve(ll a, ll b)
{
    if (b == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << a << ' ' << a * b << ' ' << a * (b + 1) << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, m;
        cin >> n >> m;

        solve(n, m);
    }
    return 0;
}
