#include "question3.h"
using namespace std;
using std::cout, std::cin;

int main()
{
    auto choice = 'Y';

    do
    {
        cout << "\nRoll die ten times? Press Y to roll, else press anything else to quit\n";
        cin >> choice;

        if (choice == 'Y' || choice == 'y')
        {
             srand(time(0));
            for(int i=0;i<10;i++)
            {
                std::cout << roll_die() << std::endl;
            } 
        }
        else
        {
            cout << "Goodbye\n";
        }
    }

    while (choice == 'Y' || choice == 'y');
    return 0;
}