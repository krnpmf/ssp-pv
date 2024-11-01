#include <stdio.h>

int main()
{
  int n, m, p;
  printf("Unesite broj n: ");
  scanf("%d", &n);
  printf("Unesite broj m: ");
  scanf("%d", &m);
  printf("Unesite broj p: ");
  scanf("%d", &p);

  int m1[n][m];
  int m2[m][p];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("Unesite m1[%d][%d]: ", i, j);
      scanf("%d", &m1[i][j]);
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < p; j++)
    {
      printf("Unesite m1[%d][%d]: ", i, j);
      scanf("%d", &m2[i][j]);
    }
  }

  int m3[n][p];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < p; i++)
    {
      m3[i][j] = 0;
      for (int k = 0; k < m; k++)
      {
        m3[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }

  printf("Rezultat mnozenja:\n\n");

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < p; j++)
    {
      printf("%4d", m3[i][j]);
    }
    printf("\n");
  }

  return 0;
}
