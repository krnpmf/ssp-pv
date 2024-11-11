#include <stdio.h>
#include <stdlib.h>

void ucitaj(float** matrica, int n, int m){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("matrica[%i][%i] = ", i, j);
            scanf("%f", *(matrica + i) + j);
        }
    }
}

float* maksimumi(float** matrica, int n, int m) {
    float* ret_niz = malloc(n * sizeof(float));
    for(int i = 0; i < n; i++) {
        float max = matrica[i][0];
        for(int j = 1; j < m; j++) {
            if(max < matrica[i][j]){
                max = matrica[i][j];
            }
        }
        ret_niz[i] = max;
    }

    return ret_niz;
}

int main() {
    int n, m;
    printf("Unesite dimenzije matrice: ");
    scanf("%i, %i", &n, &m);

    float** matrica = malloc(n * sizeof(float*));
    for(int i = 0; i <n; i++){
        matrica[i] = malloc(m * sizeof(float));
    }

    printf("Unesite elemente matrice:\n");
    ucitaj(matrica, n, m);

    float* niz_max = maksimumi(matrica, n, m);
    printf("Niz maksimuma: ");
    for(int i = 0; i < n; i++) {
        printf("%f\t", niz_max[i]);
    }
    printf("\n");

    free(niz_max);
    for(int i = 0; i < n; i++) {
        free(matrica[i]);
    }
    free(matrica);

    return 0;
}
