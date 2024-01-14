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

void solve(vector<pair<int, int>> arr1, vector<pair<int, int>> arr2, vector<int> arr, int n)
{
    vector<pair<int, int>> ans_arr;
    for (int i = 0; i < n; i++)
    {
        ans_arr.push_back(arr1[i]);
        ans_arr.push_back(arr2[i]);
    }
    sort(ans_arr.begin(), ans_arr.end());
    sort(arr.begin(), arr.end(), greater<int>());
    int ans = 0;
    vector<int> ans_arr1;
    stack<int> st;
    for (int i = 0; i < ans_arr.size(); i++)
    {
        if (ans_arr[i].second == 0)
        {
            st.push(ans_arr[i].first);
        }
        else
        {
            if (!st.empty())
            {
                ans_arr1.push_back(abs(ans_arr[i].first - st.top()));
            }
            st.push(ans_arr[i].first);
        }
    }
    cout << ans_arr1.size() << endl;
    // cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> arr1(n);
        vector<pair<int, int>> arr2(n);
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i].first;
            cin >> arr1[i].second;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i].first;
            cin >> arr2[i].second;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr1, arr2, arr, n);
    }

    return 0;
}
