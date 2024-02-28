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
void solve(int n, vector<int> arr)
{
    int total_people = 0;
    for (int i = 0; i < n; ++i)
    {

        total_people += arr[i];
    }
    int rooms_needed = ceil((double)total_people / 2);
    cout << rooms_needed << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        int total_people = 0;

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
            total_people += A[i];
        }
        solve(N, arr);
    }
}
