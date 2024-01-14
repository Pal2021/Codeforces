
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(double n, double a, double b, double c)
{
    // cout << a << " " << b << " " << c << endl;
    double a1 = ceil(n / 6);
    double a2 = ceil(n / 8);
    double a3 = ceil(n / 12);
    cout << a1 << " " << a2 << " " << a2 << endl;

    cout << min(a1 * a, min(a2 * b, a3 * c));
}
int main()
{
    double n, a, b, c;
    cin >> n >> a >> b >> c;
    solve(n, a, b, c);
}