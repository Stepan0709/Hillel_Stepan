#include "math_funcs.h"
#include <cmath>

int Math::multiply(int a, int b)
{
    return a * b;
}

int Math::divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    return -1;
}

int Math::square(int a)
{
    return pow(a, 2);
}