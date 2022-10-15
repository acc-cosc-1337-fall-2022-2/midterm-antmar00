//
#include "question4.h"
using std::cout, std::cin;

bool test_config()
{
    return true;
}

bool is_prime(int n)
{
    int i;

    if (n <= 1)
    {
        return false;
    }

    for (i = 2; i <= n/2; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

std::vector <int> get_primes(int num)
{
    std::vector <int> primes;
    int count = 1;
    while(count < num)
    {
        if(is_prime(count) == true)
        {
            primes.push_back(count);
        }
        else
        {
            continue;
        }
        return primes;
    }
}
