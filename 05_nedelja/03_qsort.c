#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;

float reduce(float init, float *arr, int n, float (*op)(float, float))
{
  for (int i = 0; i < n; i++)
  {
    init = op(init, arr[i]);
  }

  return init;
}

float add(float a, float b)
{
  return a + b;
}

float multiply(float a, float b)
{
  return a * b;
}

int starship(float f)
{
  if (f < 0.)
  {
    return -1;
  }
  else if (f > 0.)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int comp_sum(const void *void_arr1, const void *void_arr2)
{
  float *arr1 = (float *)void_arr1;
  float *arr2 = (float *)void_arr2;

  float arr1_sum = reduce(0., arr1, n, add);
  float arr2_sum = reduce(0., arr2, n, add);

  float diff = arr1_sum - arr2_sum;

  return starship(diff);
}

int comp_mean(const void *void_arr1, const void *void_arr2)
{
  float *arr1 = (float *)void_arr1;
  float *arr2 = (float *)void_arr2;

  float arr1_sum = reduce(0., arr1, n, add);
  float arr2_sum = reduce(0., arr2, n, add);

  arr1_sum /= n;
  arr2_sum /= n;

  float diff = arr1_sum - arr2_sum;

  return starship(diff);
}

int comp_geom(const void *void_arr1, const void *void_arr2)
{
  float *arr1 = (float *)void_arr1;
  float *arr2 = (float *)void_arr2;

  float arr1_sum = reduce(1., arr1, n, multiply);
  float arr2_sum = reduce(1., arr2, n, multiply);

  arr1_sum = powf(arr1_sum, 1. / n);
  arr2_sum = powf(arr2_sum, 1. / n);

  float diff = arr1_sum - arr2_sum;

  return starship(diff);
}

int main()
{
  scanf("%d", &n);

  float **m = malloc(sizeof(float *) * n);
  for (int i = 0; i < n; i++)
  {
    *m = malloc(sizeof(float) * n);
  }

  for (int i = 0; i < n * n; i++)
  {
    scanf("%f", *(*(m + i / n) + i % n));
  }

  // qsort(m, n, sizeof(float *), comp_sum);
  // qsort(m, n, sizeof(float *), comp_mean);
  qsort(m, n, sizeof(float *), comp_geom);

  return 0;
}
