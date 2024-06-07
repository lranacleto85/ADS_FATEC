#include "math_operations.h"
#include <stdlib.h>

float add (float a, float b)
{
    return a + b;
}
float subtract (float a, float b)
{
    return a - b;
}
float multiply (float a, float b)
{
    return a * b;
}
float division (float a, float b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a / b;
    }
}
