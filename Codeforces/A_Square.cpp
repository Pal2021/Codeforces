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

void solve(string s, int n, int k)
{
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> x(4), y(4);
        for (int i = 0; i < 4; i++)
            cin >> x[i] >> y[i];
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        int dx = x[3] - x[0];
        int dy = y[3] - y[0];
        cout << max(dx, dy) * max(dx, dy) << endl;
    }
    return 0;
};
