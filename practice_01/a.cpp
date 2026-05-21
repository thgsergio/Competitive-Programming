#include <iostream>

int main()
{
    long n;
    std::cin >> n;

    long customers[n][2];
    long max = 0;
    long max_interval = 0;
    for (long i = 0; i < n; i++)
    {
        std::cin >> customers[i][0] >> customers[i][1];
        if (customers[i][1] > max_interval)
        {
            max_interval = customers[i][1];
        }
    }

    for (long i = 0; i < max_interval; i++)
    {
        long local_max = 0;
        for (long j = 0; j < n; j++)
        {
            if (i + 1 >= customers[j][0] && i + 1 <= customers[j][1])
            {
                local_max++;
            }
        }
        if (local_max > max)
        {
            max = local_max;
        }
    }

    std::cout << max;

    return 0;
}