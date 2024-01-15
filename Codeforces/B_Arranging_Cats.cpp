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

void solve(string s1, string s2, int n)
{
    int c = 0;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            c++;
        }
        if (s1[i] == '1')
        {
            c1++;
        }
        if (s2[i] == '1')
        {
            c2++;
        }
    }
    int diff = abs(c1 - c2);

    // cout << ans << endl;
    cout << diff + ((c - diff) / 2) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        solve(s1, s2, n);
    }
    return 0;
};