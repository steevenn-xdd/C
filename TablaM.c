#include <stdio.h>
#include <stdlib.h>

//#define MAX 15

int MAX; // variable que contiene el numero maximo de la tabla a imprimir
int N; // variable que contiene el numero de la tabla a imprimir
int i; // Variable de control del ciclo


int main ()
{   
    N = 0;
    i = 0;
    MAX = 0;
    
    printf("Ingrese el valor maximo de la tabla: ");
    scanf("%d", &MAX);
    printf("Ingrese el valor para general la tabla: ");
    scanf("%d", &N);

    //ejemplo con for
    // inicializacion :             En la definicion
    // incremento :                 En la definicion 
    // condicion de finalizacion :  En la definicion
/*
    for (
        i = 1; 
        i <= MAX; 
        i++)
    {
        printf("%3d x %3d = %6d \n", N, i, (N*i));
       // printf(" **** iteracion numero %d \n", i);   
       //Sleep(1000); // 1 segundo

    }
*/  
    // ejemplo con while
    i = 1;
    while (i <= MAX)
    {
        
        printf("%3d x %3d = %6d \n", N, i, (N*i));
        i++;
    }

    // ejemplo con do while

    


    return 0;

}