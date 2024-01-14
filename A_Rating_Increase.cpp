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
    string s1 = "";
    string s2 = "";
    int i = 0;
    int j = 1;
    while (j < n)
    {
        if (s[j] != '0')
        {
            s1 = s.substr(0, j);
            s2 = s.substr(j, n);
            if (stoi(s1) < stoi(s2) && s1[0] != '0')
            {
                cout << s1 << " " << s2 << endl;
                return;
            }
            cout << -1 << endl;
            return;
        }

        j++;
    }
    if (s2.size() == 0)
    {
        cout << -1 << endl;
        return;
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
