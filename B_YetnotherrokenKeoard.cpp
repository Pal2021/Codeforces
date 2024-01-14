#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> lowercase, uppercase;
        for (char c : s)
        {
            if (islower(c))
            {
                if (c != 'b')
                {
                    lowercase.push(c);
                }
                else if (!lowercase.empty())
                {
                    lowercase.pop();
                }
            }
            else
            {
                if (c != 'B')
                {
                    if (uppercase.empty() || uppercase.top() != c)
                    {
                        uppercase.push(c);
                    }
                }
                else if (!uppercase.empty() && uppercase.top() == c)
                {
                    uppercase.pop();
                }
            }
        }
        string typed;
        while (!lowercase.empty())
        {
            typed.push_back(lowercase.top());
            lowercase.pop();
        }
        while (!uppercase.empty())
        {
            typed.push_back(uppercase.top());
            uppercase.pop();
        }
        reverse(typed.begin(), typed.end());
        cout << typed << endl;
    }
    return 0;
}
