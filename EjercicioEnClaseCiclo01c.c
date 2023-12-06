#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0
int N;  	// Valor a determinar su factorial
int ind; 
int factorial;
int bandera;

void main()
{
	printf ("Valor N	: ");	scanf  ("%d",&N);
	if (N <= 0)
	{
		printf (" Este valor no cumple con el requisito : Ser Entero / Positivo ");
	}
	else
	{
		factorial	= 1;
		ind			= 1;
		bandera		= FALSE;
		
//		while (ind <= N)
		while (bandera == FALSE)
		{
	
			factorial = factorial * ind;
			printf (" %3d    %3d  %12d 		%d\n", N, ind, factorial,bandera);	Sleep  (150);
			ind++;
			bandera = (ind > N);
//			if (ind <= N) bandera = TRUE;
	
		}
		printf (" El factorial de %d  es    :  %d \n",N, factorial);
	}
	return;
}

