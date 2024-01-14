#include <iostream>
#include <string>

using namespace std;

bool isValidMove(int x, int y)
{
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
}

void findPossibleMoves(int x, int y)
{
    for (int i = 1; i <= 8; ++i)
    {
        // Move horizontally
        if (isValidMove(x + i, y))
        {
            cout << char('a' + x + i - 1) << y << endl;
        }
        if (isValidMove(x - i, y))
        {
            cout << char('a' + x - i - 1) << y << endl;
        }
        // Move vertically
        if (isValidMove(x, y + i))
        {
            cout << char('a' + x - 1) << y + i << endl;
        }
        if (isValidMove(x, y - i))
        {
            cout << char('a' + x - 1) << y - i << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = s[0] - 'a' + 1;
        int y = s[1] - '0';
        findPossibleMoves(x, y);
    }
    return 0;
}
