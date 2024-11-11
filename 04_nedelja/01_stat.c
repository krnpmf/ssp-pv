#include<stdio.h>
#include<stdlib.h>
#include<limits.h> 

void stat(int*, int, int*, int*, int*);

int main() {

    int n;
    printf("Unesite duzinu niza: ");
    scanf("%i", &n);

    int* niz = malloc(n * sizeof(int));
    /*
    posto u tekstu zadatka nije naglaseno
    da se niz mora dinamicki alocirati, mogli
    smo niz deklarisati i kao
    int niz[n];
    */

    //popunjavamo alociranu memoriju
    for(int i = 0; i < n; i++) {
        printf("Unesite %i. element niza: ", i);
        scanf("%i", niz + i);
    }

    int min, max, avg; 
    /*
    u tekstu zadatka je navedeno da je avg
    tipa int, ali je u potpunosti ekvivalentan
    postupak za bilo koji tip podataka ukljucujuci
    i float (sto je najverovatnije trebao biti tip
    promenljive avg)
    */

    stat(niz, n, &min, &max, &avg);

    printf("Minimalni el. niza je %i.\n", min);
    printf("Maksimalni el. niza je %i.\n", max);
    printf("Prosek vrednosti elemenata niza je %i.\n", avg);

	free(niz);
    return 0;
}

void stat(int* niz, int n, int* min, int* max, int* avg) {
    *min = INT_MAX; //makro iz limits.h
    *max = INT_MIN; //makro iz limits.h
    *avg = 0;

    for(int i = 0; i < n; i++) {
        if(*min > *(niz + i)) { // moze i *min > niz[i]
            *min = *(niz + i); //moze i *min = niz[i]
        }

        if(*max < *(niz + i)) { //moze i *max < niz[i]
            *max = *(niz + i); //moze i *max = niz[i]
        }

        *avg += niz[i]; //moze i *avg += *(niz + i)
    }

    *avg /= n;
}
