/* 	Primer ejercicio de ejemplo de ciclos realizado en clases (Tabla de multiplicar) */
#include <stdio.h>
#include <stdlib.h>
#define  TOPE 15

int N,cnt;		// Variable que contiene el numero de la tabla a imprimir (N, y el contador (cnt)
void main()
{
	N     = 0;	cnt   = 0;  // Inicializacion;
	printf ("Valor del numero para generar la tabla   : ");	scanf  ("%d",&N);

	cnt = 1;
	while (cnt <= TOPE)
	{
		printf ("  %3d    *    %3d    =    %6d  \n", N, cnt, (N * cnt));
		cnt = cnt + 1;
	}
	return;
}


/*
	}
*/

	// Ejemplo de ciclo "do .. while"
	// Inicializacion 			   : Antes del inicio del ciclo, 
	// incremento/decremento 	   : Dentro del ciclo
	// Condicion de finalizacion   : Al final del ciclo
/*	cnt = 1;
	do
	{
		printf ("  %3d    *    %3d    =    %6d  \n", N, cnt, (N * cnt));
		Sleep  (100);
		cnt++;
	}	//while (cnt <= TOPE);
*/



