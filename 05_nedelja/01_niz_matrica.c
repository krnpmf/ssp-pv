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

  int *m = malloc(sizeof(int) * n * n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      // m[i * n + j] = niz[i] * niz[j];
      *(m + i * n + j) = *(niz + i) * *(niz + j);
    }
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

  free(m);
  free(niz);

  return 0;
}
