/*
8. Hacer un programa que calcule el MCM de dos números A y B.
(Este programa persigue motivar la creatividad del estudiante ante problemas con cierto nivel de 
complejidad algorítmica)
*/


#include <stdio.h>

void main()
{
    int a, b, mcm, i, max;

    printf("Ingrese el valor de A: ");
    scanf("%d", &a);
    printf("Ingrese el valor de B: ");
    scanf("%d", &b);

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    i = max;

    while (i % a != 0 || i % b != 0)
    {
        i++;
    }

    mcm = i;

    printf("El MCM es: %d", mcm);

    return;
}