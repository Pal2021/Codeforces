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

  ll sum1 = 0;
  ll sum2 = 0;
  ll ans1 = -1;

  for (int d = 1; d <= n; d++)
  {
    if (n % d == 0)
    {
      ll maxii = -1e18;
      ll minii = 1e18;
      for (int i = 0; i < n; i += d)
      {
        ll sum = 0;
        for (int j = i; j < i + d; j++)
        {
          sum += arr[j];
        }
        maxii = max(maxii, sum);
        minii = min(minii, sum);
      }
      ans1 = max(ans1, maxii - minii);
    }
  }
  cout << ans1 << endl;
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
  return 0;
};