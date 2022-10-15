#include "question3.h"

bool test_config()
{
    return true;
}

int roll_die()
{
    int roll;
    int min = 1;
    int max = 6;

    roll = rand() % (max - min + 1) + min;

    return roll;
}