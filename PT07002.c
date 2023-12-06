/*
2. Escribir un programa para sumar los números enteros de 1 a 100 utilizando:
Hacerlo en tres versiones de programa, usando
Version 1 – do … while
Version 2 - while 
Version 3 – for
(Este ejercicio persigue que los estudiantes desarrollen la habilidad de hacer un código similar con cada 
una de las estructuras de ciclos)

*/


#include <stdlib.h>
#include <stdio.h>

#define limite 100


void fnSumaFor  ();
void fnSumaWhile();
void fnSumaDoWhile();

int contador;
int sumatoria;
int N;

void main()
{
    N = 100;
    printf (" Numero para generar la suma de N Valores consecutivos \n"); //scanf("%d",&N);
    fnSumaFor();	
    fnSumaWhile();	
    fnSumaDoWhile();	
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

void fnSumaWhile()
{
    printf ("***** Tabla con el Ciclo While ***** \n");
    sumatoria = 0;
    contador  = 1;
    while (contador <= N)
    {
        sumatoria = sumatoria + contador;
        printf("   %3d  ---   %6d \n",contador,sumatoria);
        contador++;
    }
    printf ("\n\n");
    return;	
}

void fnSumaDoWhile()
{
    printf ("***** Tabla con el Ciclo Do While ***** \n");
    sumatoria = 0;
    contador  = 1;
    do
    {
        sumatoria = sumatoria + contador;
        printf("   %3d  ---   %6d \n",contador,sumatoria);
        contador++;
    } while (contador <= N);

    printf ("\n\n");
    return;	
}