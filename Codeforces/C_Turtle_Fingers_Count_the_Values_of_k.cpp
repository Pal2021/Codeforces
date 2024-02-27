#include <iostream>
#include <set>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;

        set<int> possible_ks;

        int ab_lcm = lcm(a, b);

        for (int k = 1; k <= l / ab_lcm; k++)
        {
            if ((l % (k * ab_lcm)) == 0)
            {
                possible_ks.insert(k);
            }
        }

        cout << possible_ks.size() << endl;
    }

    return 0;
}
