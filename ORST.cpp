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

void solve(vll arr1, vll arr2, ll n, ll m)
{
    ll k = -1;
    for (int i = 0; i < m; i++)
    {
        k = max(k, arr2[i]);
    }
    sort(arr1.begin() + n - k, arr1.end());
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> arr1(n), arr2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        solve(arr1, arr2, n, m);
    }
    return 0;
}
