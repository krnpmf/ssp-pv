# Pokazivači i pokazivači na funkcije

## 1. Zadatak

Napisati program koji od korisnika učitava niz dužine $n$ a kao rezultat izračunava i ispisuje matricu dimenzija $n \times n$.
Matrica se sastoji od sledećih vrsta: prva vrsta matrice su svi elementi niza pomnoženi sa prvim elementom niza, druga vrsta su svi elementi pomnoženi sa drugim elementom niza, treća sa trećim itd.
Memoriju za matricu (kao i za niz) dinamički alocirati, ali koristiti za  redstavljanje matrice samo jednostruki pokazivač.

## 2. Zadatak

Napisati program koji od korisnika učitava matricu, izdvaja iz nje elemente koji
zadovoljavaju određeni uslov, a zatim primenjuje na te elemente operaciju po
korisnikovom izboru.

Program treba da sadrži sledeće funkcije:
- __ucitaj__ koja kao argumente prima ceo broj $n$ i matricu realnih brojeva dimenzija $n \times n$ i popunjava je vrednostima koje korisnik unosi; funkcija nema povratnu vrednost
- __izdvoj__ koja iz matrice izdvaja u niz sve elemente marice koji su veći od $20.0$; funkcija kao povratnu vrednost vraća niz elemenata
- __saberi__ koja sabira vrednosti prosleđena dva parametra koji su realni brojevi, a kao rezultat vraća rezultat sabiranja
- __oduzmi__ koja ima iste parametre kao funkcija saberi a kao rezultat vraća rezultat oduzimanja
- __operacija__ koja kao parametre prima niz, dužinu niza i pokazivač na funkciju; prosleđenu operaciju primenjuje na trenutnu vrednost (koja je na početku $0.0$) i sledeći element u nizu; funkcija kao rezultat vraća ukupan rezultat operacije
- __main__ koja učitava matricu od korisnika, nad matricom poziva funkciju izdvoj, zatim pita korisnika za operaciju koju želi da primeni i primenjuje tu operaciju na izdvojen niz.

Dinamički alocirati memoriju za matricu i sve potrebne promenljive.

## 3. Zadatak

Napisati program koji od korisnika učitava matricu realnih brojeva dimenzije $n \times n$ sortira je `qsort` funkcijom.
Niz je potrebno alocirati dinamičkom alokacijom memorije, i to preko niza redova (niz nizova).

Potrebno je implementirati tri funkcije (tri komparatora) koje će služiti za poređenje elemenata niza (redova matrice):
1. Redovi se porede po njihovoj sumi
2. Redovi se porede po njihovom proseku
3. Redovi se porede po njihovoj geometrijskoj sredini
