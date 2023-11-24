#include <stdio.h>
//#include <stdlib.h>
#include "funkcje.h"

void mnoz(int a, int b);

void odejmij(int a, int b)
{
	printf("Wynik odejmowania to %d\n", a - b);
}

int main(void)
{
	dodaj(7, 3);
	odejmij(5, 3);
	mnoz(4, 5);

	struct Node leaf = {3, 1};

	return 0;
}

void mnoz(int a, int b)
{
	printf("Wynik mnozenia to %d\n", a * b);
}