#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);

  int *niz = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", niz + i);
  }

  int nn = n * n;
  int *m = malloc(sizeof(int) * nn);

  for (int i = 0; i < nn; i++)
  {
    // m[i] = niz[i / n] * niz[i % n];
    *(m + i) = *(niz + i / n) * *(niz + i % n);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      // printf("%4d", m[i * n + j]);
      printf("%4d", *(m + i * n + j));
    }
    printf("\n");
  }

  return 0;
}
