#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int sum = accumulate(a.begin(), a.end(), 0);
        while (k-- && sum < 0 && x--)
        {
            sum -= 2 * (*lower_bound(a.begin(), a.end(), 0));
        }
        cout << sum << "\n";
    }
    return 0;
}
