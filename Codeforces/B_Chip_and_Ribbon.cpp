#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(vector<int> arr, int n)
{
}
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    solve(a, n);
  }

  return 0;
}
