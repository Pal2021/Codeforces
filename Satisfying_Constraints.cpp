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
#define cin_arr                          \
    for (int i = 0; i < arr.size(); i++) \
    {                                    \
        cin >> arr[i];                   \
    }
#define cout_arr                         \
    for (int i = 0; i < arr.size(); i++) \
    {                                    \
        cout << arr[i];                  \
    }
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l = 1, r = 1e9;
        vector<int> not_equal;
        while (n--)
        {
            int a, x;
            cin >> a >> x;
            if (a == 1)
            {
                l = max(l, x);
            }
            else if (a == 2)
            {
                r = min(r, x);
            }
            else
            {
                not_equal.push_back(x);
            }
        }
        sort(not_equal.begin(), not_equal.end());
        not_equal.erase(unique(not_equal.begin(), not_equal.end()), not_equal.end());
        int ans = max(0, r - l + 1);
        for (auto x : not_equal)
        {
            if (l <= x && x <= r)
            {
                ans--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
