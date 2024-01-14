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

void solve(string s, int n)
{
    map<char, int> mp;
    int mod = 1e9 + 7;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int ans = 1;
    for (auto i : mp)
    {
        ans = (ans * (i.second + 1)) % mod;
    }
    cout << (ans - 1) % mod << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s, n);
    }
}
