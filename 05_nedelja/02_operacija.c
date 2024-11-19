#include <stdio.h>
#include <stdlib.h>

void ucitaj(int n, float *m);
float *izdvoj(float *m, int n);
void izdvoj_lepse(float *m, int n, float **niz, int *length);
float saberi(float, float);
float oduzmi(float, float);
float operacija(float *niz, int n, float (*op)(float, float));

int duzina;

int main()
{
  int n;
  scanf("%d", &n);

  return 0;
}

void ucitaj(int n, float *m)
{
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%f", m + i);
  }
}

float *izdvoj(float *m, int n)
{
  duzina = 0;
  for (int i = 0; i < n * n; i++)
  {
    if (*(m + i) > 20.0)
    {
      duzina++;
    }
  }

  float *niz = malloc(sizeof(float) * duzina);
  float *niz_aux = niz;
  for (int i = 0; i < n * n; i++)
  {
    if (*(m + i) > 20.0)
    {
      *(niz_aux++) = *(m + i);
    }
  }

  return niz;
}

void izdvoj_lepse(float *m, int n, float **niz, int *length)
{
  *length = 0;
  for (int i = 0; i < n * n; i++)
  {
    if (*(m + i) > 20.0)
    {
      *length++;
    }
  }

  *niz = malloc(sizeof(float) * duzina);
  float *niz_aux = *niz;
  for (int i = 0; i < n * n; i++)
  {
    if (*(m + i) > 20.0)
    {
      *(niz_aux++) = *(m + i);
    }
  }
}

float saberi(float a, float b)
{
  return a + b;
}

float oduzmi(float a, float b)
{
  return a - b;
}

float operacija(float *niz, int n, float (*op)(float, float))
{
  float res = 0.0;

  for (int i = 0; i < n; i++)
  {
    res = op(res, *(niz + i));
  }

  return res;
}
