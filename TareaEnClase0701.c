/*
1.	Escribir un programa que pida un n�mero y saque por pantalla su tabla de multiplicar 
	de sus primeros 20 elementos.
	Hacerlo en tres versiones de programa, usando
		Version 1 - do � while  
		Version 2 - while 
		Version 3 - for
    Cada una de las versiones (Do / While / For), colocarlas en funciones.
(Este ejercicio persigue que los estudiantes desarrollen la habilidad de 
hacer un c�digo similar con cada una de las estructuras de ciclos)
*/

#include <stdlib.h>
#include <stdio.h>

#define limite 20

//Prototipos de funciones
void fnTablaFor  ();
void fnTablaWhile();

int N, contador;

void main()
{
	printf (" Numero para generar la tabla : "); scanf("%d",&N);
	fnTablaFor();	
	fnTablaWhile();	
	return;
}

void fnTablaFor()
{
	printf ("***** Tabla con el Ciclo For ***** \n");
	for (contador = 1; contador <= limite; contador++)
	{
		printf("   %d   *   %d   =   %d \n",N,contador,(N*contador));
	}
	printf ("\n\n");
	return;	
}

void fnTablaWhile()
{
	printf ("***** Tabla con el Ciclo While \n");
	contador = 1;
	while (contador <= limite)
	{
		printf("   %d   *   %d   =   %d \n",N,contador,(N*contador));
		contador++;
	}

	printf ("\n\n");
	return;	
}

