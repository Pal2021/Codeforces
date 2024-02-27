#include <bits/stdc++.h>
using namespace std;

void solve(vector<pair<int, int>> vpi)
{
    int maxi = 0;
    int ans = -1;
    for (int i = 0; i < vpi.size(); i++)
    {
        int c = vpi[i].first + 20 * vpi[i].second;
        if (maxi < c)
        {
            ans = i;
            maxi = c;
        }
    }
    cout << ans + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> vpi;
        int k = 22;
        while (k--)
        {
            int r, w;
            cin >> r >> w;
            vpi.push_back({r, w});
        }
        solve(vpi);
    }
}
