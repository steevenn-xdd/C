/*
9.	Hacer un programa que, reciba un numero N desde el teclado, 
En base a dicho número, genere los primeros N términos de una serie conocida como "Serie de números Fibonacci" …  Considere que los primeros 5 términos de la serie son: 1  1  2  3  5.
El programa, deberá validar:
Restricciones:
Que el número N leído desde teclado sea mayor que 1, en caso contrario, presentar mensaje de error.

(Este programa persigue motivar la creatividad del estudiante ante problemas con cierto nivel de complejidad algorítmica)
*/

#include <stdlib.h>
#include <stdio.h>

int N;
int numPrev, numAnt, numAct;
int contador;

void main()
{
	printf (" numero : "); scanf("%d",&N);
	numPrev  = 1;
	numAnt   = 1;
	contador = 1;
	while (contador <= N)
	{
		switch (contador)
		{
			case 1  : printf ("%d   %d \n",contador, numPrev); break;
			case 2  : printf ("%d   %d \n",contador, numAnt ); break;
			default : {
							numAct = numPrev + numAnt;
							printf ("%d   %d \n",contador, numAct );
							numPrev = numAnt;
							numAnt  = numAct;
							break;
				      }
		}
		contador++;
	}
	return;
}

