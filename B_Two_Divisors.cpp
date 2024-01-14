#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define loop for (int i = 0; i < n; i++)
#define print_val               \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << arr[i];         \
    }                           \
    cout << endl;
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

void solve(ll n, ll m)
{
    ll ans = gcd(n, m);
    if (lcm(n, m) == m)
    {
        cout << m * (m / n) << endl;
    }
    else
    {
        cout << lcm(n, m) << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        solve(n, m);
    }
    return 0;
}
