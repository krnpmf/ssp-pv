#include <stdio.h>

void sortiraj(int*, int, int**);

int main(){
    int n;

    printf("Unesite broj elementa niza: \n");
    scanf("%i", &n);

    int niz[n];
    int* nizPokazivaca[n];

    for (int i = 0; i < n; i++){
        printf("Unesite %i. elemenat niza: \n", i);
        scanf("%i", niz + i);
        nizPokazivaca[i] = niz + i;
    }

    printf("Niz pokazivaca pre sortiranja je: \n");

    for (int i = 0; i < n; i++) {
        printf("%i\t",*nizPokazivaca[i]);
    }
    printf("\n");

    sortiraj(niz, n, nizPokazivaca);

    printf("Niz brojeva posle sortiranja je: \n");

    for (int i = 0; i < n; i++){
        printf("%i\t", niz[i]);
    }
    printf("\n");

    printf("Niz pokazivaca posle sortiranja je: \n");

    for (int i = 0; i < n; i++){
        printf("%i\t", *nizPokazivaca[i]);

    }
    printf("\n");

    return 0;
}

/*
Koriscen je bubble sort, ali ekvivalentan nacin
rada je i za bilo koje drugo sortiranje
*/
void sortiraj(int* niz, int n, int** niz_pok) {
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (*niz_pok[j] > *niz_pok[j + 1]){
                int* temp  = niz_pok[j];
                niz_pok[j]=niz_pok[j + 1];
                niz_pok[j + 1] = temp;
            }
        }
    }
}
