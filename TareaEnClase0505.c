// Programa que captura 4 valores y determina el mayor y el menor
// Erick Barinas / 13 Nov / 2023

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N1, N2, N3, N4;
	int Mayor, Menor;
	
	printf ("  Valor 01  : "); scanf  ("%d",&N1);
	printf ("  Valor 02  : "); scanf  ("%d",&N2);
	printf ("  Valor 03  : "); scanf  ("%d",&N3);
	printf ("  Valor 04  : "); scanf  ("%d",&N4);

	// Inicializo
	Mayor = 0;
	Menor = N1;

	if (N1 > Mayor) Mayor = N1; if (N1 < Menor) Menor = N1;	
	if (N2 > Mayor) Mayor = N2; if (N2 < Menor) Menor = N2;	
	if (N3 > Mayor) Mayor = N3; if (N3 < Menor) Menor = N3;	
	if (N4 > Mayor) Mayor = N4; if (N4 < Menor) Menor = N4;
	
	printf (" El mayor numero es : %d \n",Mayor);
	printf (" El menor numero es : %d \n",Menor);

	return 0;
}

