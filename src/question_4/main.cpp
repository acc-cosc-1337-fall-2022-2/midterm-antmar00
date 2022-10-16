#include "question4.h"
using std::cout, std::cin;

int main()
{
    std::vector <int> prime_nums;
    int num;

    while(true)
    {
        cout << "\nPrime Numbers\n";
        cout << "\nEnter a number between 1 and 60, else press 0 to exit: ";        
        cin >> num;

        if (num == 0)
        {
            cout << "Until next time.";
            break;
        }

        else if (num < 1 || num > 60)
        {
            cout<<"Not in between 1 and 60...\n";
        }
        else if (num > 1 || num < 60)
        {
            prime_nums = get_primes(num);
            cout << "The prime numbers for " << num << " are\n";
            for (auto num: prime_nums)
            {
                cout << num;
            }         
        }   
    }
    return 0;

}