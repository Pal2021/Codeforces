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
void solve(vector<vector<char>> arr, int n)
{
    string ans = "";

    set<string> st;
    ans += arr[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 1 && j == 0)
            {
                ans = ans + arr[i][j];
                break;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        ans += arr[1][i];
    }
    // cout << ans << endl;
    string mini = ans;
    int j = 1;
    for (int i = 0; i < ans.size(); i++)
    {
        swap(ans[i], arr[0][j]);
        st.insert(ans);
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<vector<char>> arr(2, vector<char>(n, 0));
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char ch;
                cin >> ch;
                arr[i][j] = ch;
            }
        }
        solve(arr, n);
    }
    return 0;
}