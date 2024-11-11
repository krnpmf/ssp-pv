# Pokazivači

## 1. Zadatak

Napisati funkciju `void stat(int* niz, int n, int* min, int* max, float* avg)` koja za prosleđen niz dužine $n$ određuje minimalni element niza, maksimalni element niza i prosečnu vrednost elemenata niza i smešta rezultate redom u promenljive `min`, `max` i `avg`.
Niz učitati od korisnika (prvo pitati za dužinu, dinamički alocirati memoriju za
niz) i rezultate ispisati na ekran.

## 2. Zadatak

Napisati funkciju `void ucitaj(int* niz, int n)` koja u promenljivu niz dužine $n$ učitava elemente niza od korisnika.
Zatim, napisati funkciju `void ispisi_obrnuto(int* niz, int n)` koja ispisuje prosleđen niz dužine $n$ u obrnutom poretku.
U main funkciju pitati korisnika za dužinu niza, dinamički alocirati potrebnu memoriju za niz, pozvati funkciju ucitaj i zatim ispisati učitane elemente funkcijom ispisi_obrnuto.

## 3. Zadatak

Napisati funkciju `void ucitaj(float** matrica, int n, int m)` koja učitava elemente matrice sa $n$ vrsta i $m$ kolona; koristiti pokazivačku aritmetiku za iteriranje kroz matricu.
Zatim, napisati funkciju `float* maksimumi(float** matrica, int n, int m)` koja vraća niz koji čine najveći elementi svake vrste.
U main funkciji pitati korisnika za dimenzije matrice, dinamički alocirati memoriju za matricu, učitati je i zatim ispisati maksimume po vrstama.

## 4. Zadatak

Napisati funkciju koja kao argumente prima niz celih brojeva (pokazivač na prvi element), dužinu niza i niz pokazivača (iste dužine) i sortira prosleđeni niz celih brojeva tako što postavlja elemente niza pokazivača da pokazuju na odgovarajuće elemente u nizu brojeva (prvi element niza pokazivača pokazuje na najmanji element niza celih brojeva, drugi element na sledeći najmanji itd.).
Funkcija nema povratnu vrenost i ne sme da promeni originalni niz.
Korisniku ispisati sortiran niz brojeva.
