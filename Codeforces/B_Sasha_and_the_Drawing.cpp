#include <bits/stdc++.h>
using namespace std;

void solve(string s1, string s2, int n, int k)
{
    int c = 0;
    vector<int> temp;
    for (int i = 0; i < s1.size(); i++)
    {
        if (abs((int)(s1[i]) - (int)(s2[i])) == 25)
        {
            temp.push_back(2);
        }
        else
        {
            temp.push_back(abs((int)(s1[i]) - (int)(s2[i])) + 1);
        }
    }
    sort(temp.begin(), temp.end(), greater<int>());

    int i = 0;
    while (k--)
    {
        temp[i] = 0;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        c += temp[i];
    }
    cout << c << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;
    solve(s1, s2, n, k);
}
