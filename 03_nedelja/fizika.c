#include<stdio.h>

const float g = 9.81;

void v_h(float t, float* v, float* h) {
    *v = g * t;
    *h = (g * t * t)/2;
} 

int main() {

    float t, v, h;
    printf("Unesite t: ");
    scanf("%f", &t);
    v_h(t, &v, &h);

    printf("Telo je palo sa visine %f a pre pada je imalo brzinu %f\n", v, h);

    return 0;
}