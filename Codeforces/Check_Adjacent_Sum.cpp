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
void solve(vector<ll> arr, ll n, int val)
{
    sort(arr.begin(), arr.end());

    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i] * 2;
    }
    int target = sum1 - val;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                map<int, int> mp;
                mp[arr[i]]++;
                mp[arr[j]]++;
                cout << arr[i] << " ";
                for (int k = 0; k < n; k++)
                {
                    if (mp.find(arr[k]) != mp.end())
                    {
                        mp[arr[k]]--;
                        if (mp[arr[k]] == 0)
                        {
                            mp.erase(arr[k]);
                        }
                    }
                    else
                    {
                        cout << arr[k] << " ";
                    }
                }
                cout << arr[j] << endl;
                // cout << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (q--)
        {
            ll k;
            cin >> k;
            solve(arr, n, k);
        }
    }
    return 0;
}