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

void solve(vll arr, ll n, ll f, ll a, ll b)
{
    int point1 = arr[0];
    for (int i = 1; i < n; i++)
    {
        point1 += arr[i] - arr[i - 1];
    }
    point1 = point1 * a;
    int point2 = 1;
    point2 *= n;
    point2 = point2 * b;
    // int ans = min(point1, point2);
    // cout << point1 << " " << point2 << endl;
    // return;
    if (point1 > f || point2 > f)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;
        vll arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n, f, a, b);
    }
    return 0;
};