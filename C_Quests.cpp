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

void solve(vector<int> arr1, vector<int> arr2, int n, int k)
{
    int ans = 0;
    int my_ans = 0;
    int maxi = 0;
    for (int i = 0; i < min(n, k); i++)
    {
        ans += arr1[i];
        maxi = max(maxi, arr2[i]);
        my_ans = max(ans + maxi * abs(k - i - 1), my_ans);
    }
    cout << my_ans << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr1(n);
        vector<int> arr2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        solve(arr1, arr2, n, k);
    }

    return 0;
}
