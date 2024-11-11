#include <stdio.h>

int main()
{
    int n;
    printf("Unesite n (n >= 3): ");
    scanf("%i", &n);

    if (n < 3)
    {
        printf("n mora biti bar 3\n");
        return 0;
    }

    int polaSirine = n - 2;

    // gornja polovina krila
    for (int i = 1; i <= polaSirine; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= polaSirine; j++)
            {
                printf("*");
            }
            printf("\\ /");
            for (int j = 1; j <= polaSirine; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= polaSirine; j++)
            {
                printf("-");
            }
            printf("\\ /");
            for (int j = 1; j <= polaSirine; j++)
            {
                printf("-");
            }
            printf("\n");
        }
    }

    // telo
    for (int i = 1; i <= polaSirine + 1; i++)
    {
        printf(" ");
    }
    printf("@\n");

    // donja polovina krila (identicna kao gornja polovina)
    for (int i = 1; i <= polaSirine; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= polaSirine; j++)
            {
                printf("*");
            }
            printf("/ \\");
            for (int j = 1; j <= polaSirine; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= polaSirine; j++)
            {
                printf("-");
            }
            printf("/ \\");
            for (int j = 1; j <= polaSirine; j++)
            {
                printf("-");
            }
            printf("\n");
        }
    }

    return 0;
}
