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
    sort(arr.begin(), arr.end());
    ll ans = 0;
    vector<int> prefix(n + 1, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        prefix[i] = prefix[i + 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int k = lower_bound(arr.begin(), arr.end(), arr[i] + arr[i]) - arr.begin();
        ans += max(0ll, prefix[k] - prefix[i + 1] - arr[i] * (k - i - 1));
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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve(a, n);
    }
    return 0;
};