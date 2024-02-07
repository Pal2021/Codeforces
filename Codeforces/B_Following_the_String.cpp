#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> last(n, 0);
        vector<char> s(n);
        int next_char = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                s[i] = next_char + 'a';
                next_char++;
            }
            else
            {
                s[i] = s[last[a[i] - 1]];
            }
            if (a[i] != 0)
                last[a[i]] = i;
        }
        for (int i = 0; i < n; i++)
            cout << s[i];
        cout << "\n";
    }
    return 0;
}
