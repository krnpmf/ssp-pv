#include <stdio.h>
#define PI 3.14

void p_o(float r, float *o, float *p)
{
    *o = 2 * r * PI;
    *p = r * r * PI;
}

int main()
{

    float r, o, p;

    printf("Unesite poluprecnik kruga: ");
    scanf("%f", &r);

    p_o(r, &o, &p);

    printf("Krug poluprecnika %f ima povrsinu %f i obim %f.\n", r, p, o);

    return 0;
}
