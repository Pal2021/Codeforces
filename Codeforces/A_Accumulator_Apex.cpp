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
    int c = 0;
    int p = n - 1;
    int t = k;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            c++;
        }
    }
    int c1 = 0;
    if (c == k)
    {
        cout << 0 << endl;
        return;
    }
    else if (c < k)
    {
        cout << 1 << endl;
        int count = 0;
        for (int i = k - 1; i < n; i++)
        {
            if (s[i] == 'B')
            {
                count++;
            }
        }
        cout << k - count << " " << 'B' << endl;
        return;
    }
    else
    {
        int i = n - 1;
        for (i = n - 1; i >= 0 && c1 != k; i--)
        {
            if (s[i] == 'B')
            {
                c1++;
            }
        }
        i = n - i;
        // cout<<i;
        cout << 1 << endl;
        cout << n - i + 1 << " " << 'A' << endl;
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        solve(s, n, k);
    }
    return 0;
};