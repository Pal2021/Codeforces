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

void solve(vector<pair<int, int>> vpi)
{
    int c = 0;
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;

    for (int i = 0; i < vpi.size(); i++)
    {
        if (vpi[i].first > 0 && vpi[i].second > 0)
        {
            x1++;
        }
        if (vpi[i].first < 0 && vpi[i].second < 0)
        {
            x2++;
        }
        if (vpi[i].first > 0 && vpi[i].second < 0)
        {
            x3++;
        }
        if (vpi[i].first < 0 && vpi[i].second > 0)
        {
            x4++;
        }
    }
    // cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << endl;
    // cout << x3 << endl;
    if (x1 * x2 * x3 * x4 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> vpi;

        while (n--)
        {
            int x1, x2;
            cin >> x1 >> x2;

            vpi.push_back({x1, x2});
        }
        solve(vpi);
    }

    return 0;
}
