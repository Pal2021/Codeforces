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
void solve(ll n, vll nums)
{
    int ans = 0;
    sort(nums.begin(), nums.end());
    for (int i = 1; i < n; i++)
    {
        ans += nums[i] - nums[i - 1];
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        solve(n, nums);
    }
}
