#include "04_nzds.h"

int nzd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int nzs(int a, int b)
{
    return a * b / nzd(a, b);
}
