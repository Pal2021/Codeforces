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
    vector<int> ans(s.size(), 0);
    for (int i = 1; i < s.size(); i++)
    {
        int j = 0;
        int c = 0;
        while (j < s.size() && s[j] == s[j + i])
        {
            c++;
            j++;
        }
        ans[i] = c;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    string s;
    cin >> s;
    solve(s);
    return 0;
};