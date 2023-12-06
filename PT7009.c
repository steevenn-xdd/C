/*
9.Hacer un programa que, reciba un numero N desde el teclado, 
En base a dicho número, genere los primeros N términos de una serie conocida como “Serie de 
números Fibonacci” … Considere que los primeros 5 términos de la serie son: 1 1 2 3 5.
El programa, deberá validar:
Restricciones:
Que el número N leído desde teclado sea mayor que 1, en caso contrario, presentar mensaje de error.
(Este programa persigue motivar la creatividad del estudiante ante problemas con cierto nivel de 
complejidad algorítmica)

*/

#include <stdio.h>
#include <stdlib.h>

int n;
int numPrev, numAnt, numAct;
int i;

void main(){

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n > 1)
    {
        numPrev = 1;
        numAnt = 1;
        i = 1;

        while (i <= n)
        {
            switch (i)
            {
            case 1:
                printf("%d   %d \n", i, numPrev);
                break;
            case 2:
                printf("%d   %d \n", i, numAnt);
                break;
            default:
                numAct = numPrev + numAnt;
                printf("%d   %d \n", i, numAct);
                numPrev = numAnt;
                numAnt = numAct;
                break;
            }
            i++;
        }
    }
    else
    {
        printf("El numero debe ser mayor que 1");
    }

    return;
}