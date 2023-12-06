/*
6. Hacer un programa que reciba un numero N y lo presente invertido.
   Ejemplo… si introduzco 1357, retorne 7531
    (Este programa persigue que el estudiante pueda usar operaciones matemáticas 
    y haga combinaciones creativas que den solución a problemas con cierto nivel de complejidad)
*/

#include <stdlib.h>
#include <stdio.h>

int num;
int res;

void main()
{
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    while (num > 0)
    {
        res = num % 10;
        num = num / 10;
        printf("%d", res);
    }

    return;
}