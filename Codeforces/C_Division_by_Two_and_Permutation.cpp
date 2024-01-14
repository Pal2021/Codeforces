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
#define Sort sort(arr.begin(), arr.end())
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
void solve(vll arr, ll n)
{
    vector<bool> check(n + 1, false);
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        while (arr[i] > n || check[arr[i]])
        {
            arr[i] = arr[i] / 2;
        }
        if (arr[i] <= 0)
        {
            ok = false;
            break;
        }
        check[arr[i]] = true;
    }
    cout << (ok ? "YES" : "NO") << endl;
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
