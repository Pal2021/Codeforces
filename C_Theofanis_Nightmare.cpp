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

void solve(vector<ll> arr, ll n)
{

    vector<ll> postfix(n);
    postfix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        postfix[i] = postfix[i + 1] + arr[i];
    }
    ll ans = postfix[0];
    for (int i = 1; i < n; i++)
    {
        if (postfix[i] > 0)
        {
            ans += postfix[i];
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
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        solve(arr, n);
    }

    return 0;
}