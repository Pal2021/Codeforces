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

void solve(vector<ll> arr, ll n, ll k)
{
    if (k > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        solve(a, n, k);
    }

    return 0;
}
