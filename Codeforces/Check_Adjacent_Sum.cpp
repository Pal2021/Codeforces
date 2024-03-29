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
void solve(string s)
{
    vector<int> arr(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - 'a']++;
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < 26; i++)
    {
        maxi = max(maxi, arr[i]);
        if (arr[i] != 0)
        {
            mini = min(mini, arr[i]);
        }
    }
    cout << maxi << " " << mini << endl;
}

int main()
{
    string s;

    cin >> s;
    solve(s);
    return 0;
}