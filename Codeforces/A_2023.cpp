#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define loop for (int i = 0; i < n; i++)
#define print_val               \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << arr[i];         \
    }                           \
    cout << endl;
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define vpii vector<pair<int, int>>

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
// b,c,d
// a,e
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
bool isvovel(char s)
{
    return s == 'a' || s == 'e';
}
void solve(vll arr, ll n, ll k)
{
    ll sum = 1;
    for (int i = 0; i < n; i++)
    {
        sum *= arr[i];
    }
    if (2023 % sum != 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    ll num = 2023 / sum;
    k = k - 1;
    while (k--)
    {
        cout << 1 << " ";
    }
    cout << num << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vll arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n, k);
    }
    return 0;
}
