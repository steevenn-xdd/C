// Programa que determine si un numero N es multiplo de otros
// Erick Barinas / 13 Nov / 2023

// Hacer un programa que pida un numero e indique si es multiplo de 2/3/5/7

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero;
	
	printf ("  Numero a validar   : "); 
	scanf  ("%d",&numero);
	
	if ((numero%2) == 0) printf ("Multiplo de 2 \n");
	if ((numero%3) == 0) printf ("Multiplo de 3 \n");
	if ((numero%5) == 0) printf ("Multiplo de 5 \n");
	if ((numero%7) == 0) printf ("Multiplo de 7 \n");

	return 0;
}

