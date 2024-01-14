
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(string s1, int n, string s2, int m)
{
  bool ok = true;
  if (s2[0] != s2[m - 1])
  {
    ok = false;
  }

  for (int i = 0; i < m - 1; i++)
  {
    if (s2[i] == s2[i + 1])
    {
      ok = false;
      break;
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    if (s1[i] == s1[i + 1])
    {
      if (!ok || s1[i] == s2[0])
      {
        cout << "No" << endl;
        return;
      }
    }
  }
  cout << "Yes" << endl;
}
void solve1(string s1, int n, string s2, int m)
{
  bool check = false;
  for (int i = 1; i < m; i++)
  {
    if (s2[i - 1] == s2[i])
    {
      check = true;
    }
  }

  for (int i = 1; i < n; i++)
  {
    if (s1[i] == s1[i - 1] && check)
    {
      cout << "No" << endl;
      return;
    }
  }

  for (int i = 1; i < n; i++)
  {
    if (s1[i - 1] == s1[i])
    {
      if (s2[0] == s1[i - 1] || s2[m - 1] == s1[i])
      {
        cout << "No" << endl;
        return;
      }
    }
  }
  cout << "Yes" << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    solve1(s1, n, s2, m);
  }
}