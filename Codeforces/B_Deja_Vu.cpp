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

void solve(vector<ll> &A, vll &Q, ll n, ll q)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < Q.size(); j++)
        {
            if (A[i] % (1 << Q[j]) == 0)
            {
                A[i] += (1 << (Q[j] - 1));
            }
        }
    }
    for (auto &a : A)
        cout << a << ' ';
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vll arr1(n);
        vll arr2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        solve(arr1, arr2, n, m);
    }
    return 0;
};