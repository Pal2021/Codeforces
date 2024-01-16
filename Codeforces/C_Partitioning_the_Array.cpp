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

void solve(vll arr, ll n)
{
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ll k = n / i;
            ll g = 0;
            for (int j = 0; j < k; j++)
            {
                ll diff = 0;
                for (int l = j; l < n; l += k)
                {
                    diff = gcd(diff, abs(arr[j] - arr[l]));
                }
                g = gcd(g, diff);
            }
            ans += (g != 1);
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
        ll n;
        cin >> n;
        vll arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;
};