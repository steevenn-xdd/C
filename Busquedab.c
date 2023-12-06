#include <stdlib.h>
#include <stdio.h>

int  A[15];
char C[15];

int  B[15] = {1,5,10,15,2,19,11,16,3,7,12,19,25,75,0};

int contador;
int acumulador;
int valor;

void main()
{ 
	contador = 0;
	while (contador < 15)
	{
		printf (" %d   %3d \n", contador, B[contador]);
		contador += 1;
	}

	printf ("Valor a encontrar ... :"); scanf ("%d",&valor);
	for (contador = 0; contador < 15; contador = contador + 1)
	{
		if (B[contador]==valor) printf (" Encontrado en la posicion %d  \n",contador);
	}
	return;
}


