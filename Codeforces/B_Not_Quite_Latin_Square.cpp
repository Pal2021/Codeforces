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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> square(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> square[i];
        }
        for (char ch : {'A', 'B', 'C'})
        {
            int count = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (square[i][j] == ch)
                    {
                        count++;
                    }
                }
            }
            if (count == 2)
            {
                cout << ch << endl;
                break;
            }
        }
    }
    return 0;
}
