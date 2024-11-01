#include <stdio.h>
#include <string.h>

int main()
{
  char str[5][50], temp[50];
  printf("Unesite 5 reci: ");

  // Ucitavanje stringova
  for (int i = 0; i < 5; ++i)
  {
    scanf("%s", str[i]);
  }

  // sortiranje stringova u leksikografskom poretku
  for (int i = 0; i < 5; ++i)
  {
    for (int j = i + 1; j < 5; ++j)
    {

      // ukoliko stringovi nisu u leksikografskom poretku menjamo im mesta
      if (strcmp(str[i], str[j]) > 0)
      {
        strcpy(temp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], temp);
      }
    }
  }

  printf("\nReci sortirane u leksikografskom poretku: \n");

  for (int i = 0; i < 5; ++i)
  {
    printf("%s\n", str[i]);
  }

  return 0;
}
