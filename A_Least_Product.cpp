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
    int c = 0;
    int c0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            c++;
        }
        if (arr[i] == 0)
        {
            c0++;
        }
    }
    if (c0 > 0)
    {
        cout << 0 << endl;
        return;
    }
    if (c % 2 != 0)
    {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    cout << 1 << " " << 0 << endl;
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
}
