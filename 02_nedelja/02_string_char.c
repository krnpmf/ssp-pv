#include <stdio.h>

int main()
{
  char string[100];
  printf("Unesite neki string (maks 99 karaktera): ");
  scanf("%[^\n]s", string);
  getchar(); // pokupimo \n karakter sa kraja bafera

  char karakter;
  printf("Unesite karakter: ");
  scanf("%c", &karakter);

  int count;
  for (int i = 0; string[i] != 0; i++)
  {
    if (string[i] == karakter)
    {
      count++;
    }
  }

  printf("Karakter se pojavio %d puta.\n", count);

  return 0;
}
