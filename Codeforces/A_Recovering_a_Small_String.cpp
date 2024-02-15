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
void solve(int n)
{
    vector<char> temp;
    temp.push_back('0');
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        temp.push_back(ch);
    }

    string ans = "";
    for (int i = 1; i <= 26; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            for (int k = 1; k <= 26; k++)
            {
                if ((i + j + k) == n)
                {
                    ans += temp[i];
                    ans += temp[j];
                    ans += temp[k];
                    cout << ans << endl;
                    return;
                }
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
};