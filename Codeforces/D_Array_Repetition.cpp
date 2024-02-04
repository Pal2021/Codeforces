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
void solve(ll n, ll k)
{
    if (n < k)
    {
        cout << 0 << endl;
    }
    else if (n == k)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        if (n / 2 >= k)
        {
            if (n % 2 == 0)
            {
                for (int i = n; i > 0 && k--; i = i - 2)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            else
            {
                for (int i = n - 1; i > 0 && k--; i = i - 2)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = n; i > 0 && k--; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}
