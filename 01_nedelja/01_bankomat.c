#include <stdio.h>

int main()
{
	int svota;
	printf("Unesite svotu: ");
	scanf("%d", &svota);

	int kolicnik = svota / 100;
	int ostatak = svota % 100;

	printf("Novcanica od 100 treba %i\n", kolicnik);

	kolicnik = ostatak / 50;
	ostatak %= 50;

	printf("Novcanica od 50 treba %i\n", kolicnik);

	kolicnik = ostatak / 20;
	ostatak %= 20;

	printf("Novcanica od 20 treba %i\n", kolicnik);

	kolicnik = ostatak / 10;
	ostatak %= 10;

	printf("Novcanica od 10 treba %i\n", kolicnik);

	kolicnik = ostatak / 5;
	ostatak %= 5;

	printf("Novcanica od 5 treba %i\n", kolicnik);

	kolicnik = ostatak / 2;
	ostatak %= 2;

	printf("Novcanica od 2 treba %i\n", kolicnik);
	printf("Novcanica od 1 treba %i\n", ostatak);

	return 0;
}
