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

#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  k = min(k, n);
  int last = n - 1;
  for (int i = 0; i < k; i++)
  {
    if (a[last] > n)
    {
      cout << "No" << endl;
      return;
    }
    last += n - a[last];
    if (last >= n)
    {
      last -= n;
    }
  }
  cout << "Yes" << endl;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}