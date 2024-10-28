#include <stdio.h>

int main()
{

    int n;

    printf("Unesite duzinu niza: ");
    scanf("%d", &n);

    int niz[n];

    printf("Unesite elemente niza:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niz[i]);
    }

    int bilo_zamene = 1;

    for (int i = 0; i < n - 1 && bilo_zamene; i++)
    {
        bilo_zamene = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (niz[j] > niz[j + 1])
            {
                int tmp = niz[j];
                niz[j] = niz[j + 1];
                niz[j + 1] = tmp;
                bilo_zamene = 1;
            }
        }
    }

    printf("Sortiran niz je:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", niz[i]);
    }
    printf("\n");

    return 0;
}