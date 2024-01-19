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
void solve(vll arr1, vll arr2, ll n, ll m)
{
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end(), greater<ll>());
    int i1 = 0, j1 = n - 1;
    int i2 = 0, j2 = m - 1;
    ll sum = 0;
    while (i1 <= j1)
    {
        if (abs(arr1[i1] - arr2[i2]) < abs(arr1[j1] - arr2[j2])) // Corrected here
        {
            sum += abs(arr1[j1] - arr2[j2]); // And here
            j1--, j2--;
        }
        else
        {
            sum += abs(arr1[i1] - arr2[i2]);
            i1++, i2++;
        }
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a1(n), a2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a2[i];
        }
        solve(a1, a2, n, m);
    }
    return 0;
};