#include <stdio.h>

int main()
{

    int n1, n2;

    printf("Unesite duzinu prvog niza: ");
    scanf("%i", &n1);

    int niz1[n1];

    printf("Unesite elemente prvog niza:\n");
    for (int i = 0; i < n1; i++)
    {
        printf("Element %i: ", i);
        scanf("%i", &niz1[i]);
    }

    printf("Unesite duzinu drugog niza: ");
    scanf("%i", &n2);

    int niz2[n2];

    printf("Unesite elemente drugog niza:\n");
    for (int i = 0; i < n2; i++)
    {
        printf("Element %i: ", i);
        scanf("%i", &niz2[i]);
    }

    int suma1 = 0, suma2 = 0;

    for (int i = 0; i < n1; i++)
    {
        suma1 += niz1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        suma2 += niz2[i];
    }

    int duzina_rezultata = n1 + n2;
    int rezultat[duzina_rezultata];

    if (suma1 < suma2)
    {
        for (int i = 0; i < n1; i++)
        {
            rezultat[i] = niz1[i];
        }

        for (int i = n1; i < duzina_rezultata; i++)
        {
            rezultat[i] = niz2[i - n1];
        }
    }
    else
    {
        for (int i = 0; i < n2; i++)
        {
            rezultat[i] = niz2[i];
        }

        for (int i = n2; i < duzina_rezultata; i++)
        {
            rezultat[i] = niz1[i - n2];
        }
    }

    printf("Rezultujuci niz ima elemente:\n");
    for (int i = 0; i < duzina_rezultata; i++)
    {
        printf("%i\t", rezultat[i]);
    }
    printf("\n");

    return 0;
}
