#include <stdio.h>

int main()
{
  char string[100];
  printf("Unesite rec: ");
  scanf("%s", string);

  // string je 100 bajtova, tj. 99 karaktera i null terminator
  // duplo veci string bi mogao da ima 198 karaktera i null terminator sto je
  // 199 bajtova
  char modified[199];
  int i = 0, j = 0;
  for (; string[i] != 0; i++)
  {
    if (string[i] == 'x')
    {
      modified[j++] = 'k';
      modified[j++] = 's';
    }
    else
    {
      modified[j++] = string[i];
    }
  }
  modified[j] = 0;

  printf("Modifikovani string je: %s\n", modified);

  return 0;
}
