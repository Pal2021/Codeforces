#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve1(string s, int n, int k)
{
    int ans = 0;
    int sol = 0;
    int cnt = k;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (cnt > 0)
            {
                cnt--;
            }
            else
            {
                ans++;
            }
        }
        else if (s[i] == '2')
        {
            ans++;
        }
        else
        {
            ans = 0;
            cnt = k;
        }
        sol = max(sol, ans);
    }
    cout << sol << endl;
}
int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    solve1(s, n, k);
    return 0;
}
