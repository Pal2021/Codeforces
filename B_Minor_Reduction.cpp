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
    string temp = "";
    int idx = -1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        ll t1 = s[i - 1] - '0';
        ll t2 = s[i] - '0';
        // ll temp = t1 + t2;

        if (i - 1 >= 0 && t1 + t2 >= 10)
        {
            idx = i - 1;
            temp = to_string(t1 + t2);
            break;
        }
    }
    string ans = "";
    for (int i = 0; i < idx; i++)
    {
        ans += s[i];
    }

    if (idx == -1)
    {
        ll t1 = s[0] - '0';
        ll t2 = s[1] - '0';
        string temp = to_string(t1 + t2);

        // cout << temp << endl;
        cout << temp + s.substr(2, s.size() - 2) << endl;
        return;
    }

    ans = ans + temp;

    for (int i = idx + 2; i < s.size(); i++)
    {
        ans += s[i];
    }
    cout << ans << endl;
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
