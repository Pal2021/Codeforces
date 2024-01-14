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

void solve(vll arr, ll n)
{
    ll c=1;
    ll ans=0;
    for(int i=n-2;i>=0;i--)
    {
       if(c==0)
       {
        ans++;
        
       }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll arr(n);
        cin_arr
            solve(arr, n);
    }
    return 0;
}