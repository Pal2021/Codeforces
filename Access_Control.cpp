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

void solve(string s, int X)
{
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            c--;
            if (c < 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == '1')
        {
            c = X;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;
        string s;
        cin >> s;
        solve(s, X);
    }
    return 0;
}
