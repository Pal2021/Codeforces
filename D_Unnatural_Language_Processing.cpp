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
// b,c,d
// a,e
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
bool isvovel(char s)
{
    return s == 'a' || s == 'e';
}
void solve(string s, ll n)
{
    string ans = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (isvovel(s[i]) && !isvovel(s[i - 1]))
        {
            ans += s[i];
            ans += s[i - 1];
            ans += ".";
            i--;
        }
        else
        {
            ans += s[i];
        }
    }

    ans.pop_back();
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        solve(s, n);
    }
    return 0;
}
