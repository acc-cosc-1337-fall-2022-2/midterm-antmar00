#include "question1.h"
using namespace std;
using std::cout, std::cin;

int main()
{
    double c;

    do{
        cout << "\n*Celsius to Fareheit*\n";
        cout<< "Enter a temperateure to convert, else enter 999 to leave;\n";
        cin >> c;

        if (c == 999)
        {
            cout << "\nCome again!";
        }
        else
        {
            cout << "\n" << c << " degrees Celsuis is " << get_farenheit(c) <<" degrees Fahrenheit.\n";
        }
    }
    while (c != 999);
    return 0;
}