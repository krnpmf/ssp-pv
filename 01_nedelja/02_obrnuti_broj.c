#include <stdio.h>

int main()
{

	int broj;
	printf("Unesite broj: ");
	scanf("%i", &broj);

	int obrnuti = 0;
	while (broj != 0)
	{
		int cifra = broj % 10;
		broj /= 10;
		obrnuti = obrnuti * 10 + cifra;
	}

	printf("Broj sa obrnutim redosledom cifara je %i", obrnuti);

	return 0;
}