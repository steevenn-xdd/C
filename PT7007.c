/*
Hacer un programa que calcule el MCD de dos números A y B. Como restricción, A debe ser >= B.
(Este programa persigue motivar la creatividad del estudiante ante problemas con cierto nivel de 
complejidad algorítmica)
*/
#include <stdio.h>

int main()
{
    int mcd, a, b, residuo;
    printf("Ingrese el valor de A: ");
    scanf("%d", &a);
    printf("Ingrese el valor de B: ");
    scanf("%d", &b);

    if (a >= b)
    {
       

    while (b != 0)
    {
        residuo = a % b;
        a = b;
        b = residuo;
    }

    mcd = a;

    printf("El MCD es: %d", mcd);
    }
    
    else
    {
        printf("A debe ser mayor o igual que B");
    }

    

    return 0;
}





