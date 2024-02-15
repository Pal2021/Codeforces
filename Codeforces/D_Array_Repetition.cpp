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
void solve(ll n, ll k, vll nums)
{
    map<int, int> mp;
    int sum = 0;
    int maxi = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            maxi = min(maxi, i);
        }
        if (mp.find(sum - k) != mp.end())
        {

            maxi = min(maxi, abs(i - mp[sum - k]));
        }
        mp[sum] = i;
    }
    cout << maxi << endl;
}

int main()
{

    ll n, t;
    cin >> n >> t;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    solve(n, t, nums);
}
