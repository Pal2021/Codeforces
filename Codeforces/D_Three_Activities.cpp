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

void solve(vector<int> arr1, vector<int> arr2, vector<int> arr3, int n)
{
    int ans = 0;
    vpii vpi1, vpi2, vpi3;

    for (int i = 0; i < n; i++)
    {
        vpi1.push_back({arr1[i], i});
        vpi2.push_back({arr2[i], i});
        vpi3.push_back({arr3[i], i});
    }

    sort(vpi1.begin(), vpi1.end());
    sort(vpi2.begin(), vpi2.end());
    sort(vpi3.begin(), vpi3.end());
    vector<pair<int, int>> arr;
    for (int i = 0; i < 5; i++)
    {
        
        arr.push_back(vpi1[i]);
        arr.push_back(vpi2[i]);
        arr.push_back(vpi3[i]);
    }

    sort(arr.begin(), arr.end());
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i].first << " ";
    // }
    // cout << endl;
    // return;
    ans += arr[0].first;
    int idx = arr[0].second;
    int idx1 = -1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i].second != idx)
        {
            ans += arr[i].first;
            idx1 = arr[i].second;
        }
    }
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i].second != idx && arr[i].second != idx1)
        {
            ans += arr[i].first;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr1(n);
        vector<int> arr2(n);
        vector<int> arr3(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr3[i];
        }
        solve(arr1, arr2, arr3, n);
    }

    return 0;
}
