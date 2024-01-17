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
void solve(vpii vpi, vll arr, ll n)
{
    vll ans;
    vll ans1;
    for (auto it : vpi)
    {
        if (it.first == 1)
        {
            ans.push_back(it.second);
            ans.push_back(it.second);
        }
        else if (it.first == 2)
        {
            ans.push_back(it.second);
            ans.push_back(it.second);
            ans.push_back(it.second);
            ans.push_back(it.second);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     ans1.push_back(ans[i + 1]);
    // }
    // for (int i = 0; i < ans1.size(); i++)
    // {
    //     cout << ans1[i] << " ";
    // }
    // cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k, n;
        cin >> k >> n;
        vpii vpi;
        while (k--)
        {
            ll n1, n2;
            cin >> n1 >> n2;
            vpi.push_back({n1, n2});
        }
        vll arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(vpi, arr, n);
    }
    return 0;
};