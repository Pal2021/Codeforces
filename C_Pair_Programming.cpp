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

void solve(vll arr1, vll arr2, ll k)
{
    ll n = arr1.size();
    ll m = arr2.size();
    ll i = 0;
    ll j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (i < n && j < m)
        {
            if (arr1[i] == 0)
            {
                k++;
                i++;
                ans.push_back(0);
            }
            else if (arr2[j] == 0)
            {
                k++;
                j++;
                ans.push_back(0);
            }
            else
            {
                if (arr1[i] < arr2[j] && arr1[i] <= k)
                {

                    ans.push_back(arr1[i]);
                    i++;
                }
                else if (arr1[i] >= arr2[j] && arr2[j] <= k)
                {

                    ans.push_back(arr2[j]);
                    j++;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        else if (i < n)
        {
            if (arr1[i] == 0)
            {
                ans.push_back(0);
                k++;
                i++;
            }
            else
            {
                if (arr1[i] <= k)
                {
                    ans.push_back(arr1[i]);
                    i++;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        else if (j < m)
        {
            if (arr2[j] == 0)
            {
                ans.push_back(0);
                j++;
                k++;
            }
            else
            {
                if (arr2[j] <= k)
                {
                    ans.push_back(arr2[j]);
                    j++;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
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
        ll n, m, k;
        cin >> k >> n >> m;
        vll arr1(n);
        vll arr2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        solve(arr1, arr2, k);
    }

    return 0;
}
