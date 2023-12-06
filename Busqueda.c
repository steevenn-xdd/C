#include <stdlib.h>
#include <stdio.h>

int  A[15];
char C[15];

int  B[15] = {1,5,10,15,2,6,11,16,3,7,12,19,25,75,0};

int contador;
int acumulador;
int valor;

void main()
{ 

	for (contador = 0; contador < 15; contador = contador + 1)
	{
		printf ("    %3d \n", B[contador]);
	}

	printf ("Valor a encontrar ... :"); scanf ("%d",&valor);
	for (contador = 0; contador < 15; contador = contador + 1)
	{
		if (B[contador]==valor) printf (" Encontrado en la posicion %d  \n",contador);
	}
	return;
}

int fnEsPrimo(int piNumero)
{
	int i;
	int EsPrimo;
	EsPrimo = 1;
	i       = 2;
	if (piNumero <= 2) EsPrimo = 0;
	else
		while (i <= piNumero/2)
		{
			if ((piNumero % i) == 0) EsPrimo = 0;
			i = i + 1;
		}

	return EsPrimo;
}




