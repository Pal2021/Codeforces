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
#define cin_arr                          \
    for (int i = 0; i < arr.size(); i++) \
    {                                    \
        cin >> arr[i];                   \
    }
#define cout_arr                         \
    for (int i = 0; i < arr.size(); i++) \
    {                                    \
        cout << arr[i];                  \
    }
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve(string s, ll n)
{
    map<char, int> mp;
    ll t_count = 0;
    ll m_count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'T')
        {
            t_count++;
        }
        else
        {
            m_count++;
        }
    }
    if (2 * m_count != t_count)
    {
        cout << "NO" << endl;
        return;
    }
    int c1 = 0;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'T')
        {
            c1++;
        }
        else
        {
            c1--;
            if (c1 < 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    reverse(s.begin(), s.end());

    int c2 = 0;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'T')
        {
            c2++;
        }
        else
        {
            c2--;
            if (c2 < 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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