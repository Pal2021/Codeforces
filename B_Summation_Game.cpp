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

void solve(vi arr, int n, int k, int x)
{
    sort(arr.begin(), arr.end());
    vector<int> pre(n, 0);
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }
    int ans = INT_MIN;
    for (int i = n - 1; i > 0; i--)
    {
        int ch = n - i ;
        if (ch > k)
            break;
        int r = min(i, x);
        int sum = (pre[i - r] - (pre[i] - pre[i - r]));
        ans = max(ans, sum);
    }
    cout << ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve(a, n, k, x);
    }
    return 0;
}
