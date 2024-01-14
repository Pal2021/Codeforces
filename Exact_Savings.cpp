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

void solve(vll arr, ll n, ll x, ll z)
{
    int val = 0;
    int c = 0;
    while (val < z)
    {
        c++;
        val += x;
    }

    for (int i = 0; i < n; i++)
    {
        val = val - arr[i];
        if (val == 0)
        {
            cout << c << endl;
            return;
        }
        else if (val < 0)
        {
            cout << -1 << endl;
            return;
        }
        else if (val == z)
        {
            cout << c << endl;
            return;
        }
    }
    if (val == z)
    {
        cout << c << endl;
        return;
    }
    cout << -1 << endl;
    return;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, x, z;
        cin >> n >> x >> z;
        vector<ll> arr1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        solve(arr1, n, x, z);
    }
    return 0;
}
