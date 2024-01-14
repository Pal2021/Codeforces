
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(vector<int> arr, int n)
{
  map<int, int> mp2;
  for (int i = 0; i < n; i++)
  {
    mp2[arr[i]]++;
  }
  // cout<<mp2.size();
  if (mp2.size() > 2 || mp2.size() < 1)
  {
    cout << "No" << endl;
    return;
  }
  sort(arr.begin(), arr.end());
  map<int, int> mp1;
  mp1[arr[0] + arr[n - 1]]++;
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (mp1.find(arr[i] + arr[j]) == mp1.end())
    {
      cout << "No" << endl;
      return;
    }
    i++;
    j--;
  }
  cout << "Yes" << endl;
}
void solve1(vector<int> arr, int n)
{
  map<int, int> mp;
  for (auto i : arr)
  {
    mp[i]++;
  }
  if (mp.size() > 2)
  {
    cout << "NO" << endl;
    return;
  }
  int size = 0;
  if (n % 2 != 0)
  {
    size = (n / 2) + 1;
  }
  else
  {
    size = (n / 2);
  }
  for (auto i : mp)
  {
    // cout << i.second << endl;
    if (i.second < n / 2)
    {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    solve1(arr, n);
  }
}