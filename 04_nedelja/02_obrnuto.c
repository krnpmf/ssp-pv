#include<stdio.h>
#include<stdlib.h>

/*
Poenta zadatka je shvatiti da je niz referentni tip
i da se njegova izmena u funkciji vidi i u delu koda
u kom je funkcija pozvana (konkretno u main funkciji u
nasem programu), kao i svuda gde se kasnije koristi.
*/

void ucitaj(int*, int);
void ispisi_obrnuto(int*, int);

int main() {

    int n;
    printf("Unesite duzinu niza: ");
    scanf("%i", &n);
    int* niz = malloc(n * sizeof(int));

    ucitaj(niz, n);
    ispisi_obrnuto(niz, n);

	free(niz);
    return 0;
}

void ucitaj(int* niz, int n) {
    for (int i = 0; i < n; i++) {
        printf("Unesite %i. el. niza: ", i);
        scanf("%i", niz + i);
    }
}

void ispisi_obrnuto(int* niz, int n) {
    printf("Niz obrnuto ispisan je:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%i\t", niz[i]);
    }
    printf("\n");
}
