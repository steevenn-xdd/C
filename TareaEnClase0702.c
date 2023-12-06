/*
2.	Escribir un programa para sumar los números enteros de 1 a 100 utilizando:
Hacerlo en tres versiones de programa, usando
Version 1 - do … while  
Version 2 - while 
Version 3 - for
(Este ejercicio persigue que los estudiantes desarrollen la habilidad de hacer 
un código similar con cada una de las estructuras de ciclos)

*/

#include <stdlib.h>
#include <stdio.h>

#define limite 100

//Prototipos de funciones
void fnSumaFor  ();
void fnSumaDo	();

int contador;
int sumatoria;
int N;

void main()
{
	N = 100;
	printf (" Numero para generar la suma de N Valores consecutivos \n"); //scanf("%d",&N);
	fnSumaFor();	
	fnSumaDo();	
	return;
}

void fnSumaFor()
{
	printf ("***** Tabla con el Ciclo For ***** \n");
	sumatoria = 0;
	for (contador = 1; contador <= N; contador++)
	{
		sumatoria = sumatoria + contador;
		printf("   %3d  ---   %6d \n",contador,sumatoria);
	}
	printf ("\n\n");
	return;	
}

void fnSumaDo()
{
	printf ("***** Tabla con el Ciclo DO ***** \n");
	
	sumatoria = 0;
	contador  = 1;
	
	do
	{
		sumatoria = sumatoria + contador;
		printf("   %3d  ---   %6d \n",contador,sumatoria);
		contador++;
	}
	while (contador <= N);

	printf ("\n\n");
	return;	
}

