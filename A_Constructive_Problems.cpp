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

void solve(double n, double m)
{
    int c = 0;
    double x = ceil(n / 2);
    double y = ceil(m / 2);
    cout << max(n, m) << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double n, m;
        cin >> n >> m;

        solve(n, m);
    }

    return 0;
}
