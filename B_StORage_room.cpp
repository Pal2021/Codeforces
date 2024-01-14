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

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

void solve(vector<int> arr, int n, int k)
{
    vector<int> vote_count(k + 1);

    int win_cond = 0;

    for (int i = 0; i < n; i++)
    {
        vote_count[arr[i]]++;
        if (vote_count[win_cond] < vote_count[arr[i]])
        {
            win_cond = arr[i];
        }
        else if (vote_count[win_cond] == vote_count[arr[i]])
        {
            win_cond = min(win_cond, arr[i]);
        }

        cout << win_cond << endl;
    }
}

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int k, n;
    cin >> k >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(arr, n, k);
}
