/*
6.	Hacer un programa que reciba un numero N y lo presente invertido.
    Ejemplo… si introduzco 1357, retorne 7531
	(Este programa persigue que el estudiante pueda usar operaciones matemáticas 
	y haga combinaciones creativas que den solución a problemas con cierto nivel de complejidad)
*/

#include <stdlib.h>
#include <stdio.h>

int numero;
int residuo;

void main()
{
	printf (" numero : "); scanf("%d",&numero);
	while (numero > 0)
	{
		residuo = numero % 10;
		numero  = numero / 10;
		printf ("%d",residuo); 
	}
	return;
}

