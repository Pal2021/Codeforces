#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      string s;
      cin >> s;
      queue<int> empty;
      for (int i = 0; i < n; ++i)
      {
         if (s[i] == '.')
         {
            empty.push(i);
         }
      }
      int count = 0;
      while (!empty.empty())
      {
         int first = empty.front();
         empty.pop();
         count++;
         if (first > 0 && s[first - 1] == '.')
         {
            s[first - 1] = '#';
            empty.push(first - 1);
         }
         if (first < n - 1 && s[first + 1] == '.')
         {
            s[first + 1] = '#';
            empty.push(first + 1);
         }
      }
      cout << count << endl;
   }
   return 0;
}
