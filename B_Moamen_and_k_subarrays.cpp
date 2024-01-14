#include <iostream>
#include <vector>

int main()
{
    // Input
    int N;
    std::cin >> N;

    // Constants
    const int L = 12;

    // Generate repunits
    std::vector<int> r;
    for (int i = 0; i < L; ++i)
    {
        r.push_back(std::stoi(std::string(i + 1, '1')));
    }

    // Find N-th smallest integer
    for (int i = 0; i < L; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            for (int k = 0; k <= j; ++k)
            {
                N -= 1;
                if (N == 0)
                {
                    std::cout << r[i] + r[j] + r[k] << std::endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
