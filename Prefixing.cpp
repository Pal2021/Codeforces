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

void solve(vector<int> arr, int n)
{
    int max1 = *max_element(arr.begin(), arr.end());
    vector<int> ans;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) != mp.end())
        {
            ans.push_back(max1);
        }
        else
        {
            ans.push_back(arr[i]);
        }
        mp[arr[i]]++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;
};