/*
9.	Hacer un programa que, reciba un numero N desde el teclado, 
En base a dicho n�mero, genere los primeros N t�rminos de una serie conocida como "Serie de n�meros Fibonacci" �  Considere que los primeros 5 t�rminos de la serie son: 1  1  2  3  5.
El programa, deber� validar:
Restricciones:
Que el n�mero N le�do desde teclado sea mayor que 1, en caso contrario, presentar mensaje de error.

(Este programa persigue motivar la creatividad del estudiante ante problemas con cierto nivel de complejidad algor�tmica)
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

