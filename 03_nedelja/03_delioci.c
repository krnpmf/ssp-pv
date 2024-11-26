#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void delioci(int n, int *a, int *b)
{
    int min_a, min_b, min_razl = n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int curr_a = i;
            int curr_b = n / i;
            if (abs(curr_b - curr_a) < min_razl)
            {
                min_a = curr_a;
                min_b = curr_b;
                min_razl = min_b - min_a;
            }
        }
    }

    *a = min_a;
    *b = min_b;
}

void delioci2(int n, int *a, int *b)
{
    int gr = (int)sqrt(n);
    for (int i = gr; i >= 1; i--)
    {
        if (n % i == 0)
        {
            *a = i;
            *b = n / i;
            break;
        }
    }
}

int main()
{

    int ok = 1;

    for (int i = 2; i <= 10000; i++)
    {
        int a, b;
        delioci(i, &a, &b);
        printf("Delioci za %i: %i, %i\n", i, a, b);

        int a1, b1;
        delioci2(i, &a1, &b1);
        printf("Delioci za %i: %i, %i\n\n", i, a1, b1);

        if (a != a1)
        {
            ok = 0;
        }
    }

    if (ok)
        printf("OK!!!\n");

    return 0;
}
