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

void solve(vector<ll> arr, ll n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += abs(arr[i]);
    }
    if (sum % 3 == 1)
    {
        for (int i = 0; i < n; i++)
        {

            if ((sum - arr[i]) % 3 == 0)
            {
                cout << 1 << endl;
                return;
            }
        }

        cout << 2 << endl;
        return;
    }
    else if (sum % 3 == 2)
    {

        cout << 1 << endl;
        return;
    }
    else if (sum % 3 == 0)
    {
        cout << 0 << endl;
    }
    else
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
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
}
