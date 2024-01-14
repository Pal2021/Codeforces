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
#define Sort sort(arr.begin(), arr.end())
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll bound(vector<pair<ll, ll>> arr, ll val)
{
    ll low = 0;
    ll high = arr.size() - 1;
    ll idx = arr.size();
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (arr[mid].first >= val)
        {
            idx = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return idx;
}

void solve(vector<ll> arr, int n)
{
    vector<pair<ll, ll>> arr1;
    for (int i = 0; i < n; i++)
    {
        arr1.push_back({arr[i], i});
    }
    sort(arr1.begin(), arr1.end());
    vector<pair<ll, ll>> pre(n);
    pre[0].first = arr1[0].first;
    pre[0].second = arr1[0].second;
    for (int i = 1; i < n; i++)
    {
        pre[i].first = arr1[i].first + pre[i - 1].first;
        pre[i].second = arr1[i].second;
    }
    vector<ll> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        int low = bound(arr1, pre[i].first);
        ans[pre[i].second] = low;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != 0)
        {
            cout << ans[i]  1 << " ";
        }
        else
        {
            cout << ans[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        solve(a, n);
    }

    return 0;
}
