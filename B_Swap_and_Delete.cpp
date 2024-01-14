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

void solve(string s)
{

    int n = s.size();
    int c0 = 0;
    int c1 = 0;
    for (auto i : s)
    {
        if (i == '0')
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }
    if (c0 == c1)
    {
        cout << 0 << endl;
        return;
    }
    else if (c0 == 0 || c1 == 0)
    {
        cout << max(c0, c1) << endl;
        return;
    }
    else
    {
        int ans = abs(c0 - c1);
        int str1 = n - ans;
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}
