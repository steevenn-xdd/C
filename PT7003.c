/*
3.    Escribir un programa que capture un conjunto de valores numéricos.  
    Terminará cuando se introduzca valor 0.
Cuando concluya la captura, escribir cuantos valores fueron negativos y cuantos valores fueron positivos.
(Este ejercicio persigue el uso de contadores dentro de ciclos, a través de condiciones)


*/

#include <stdlib.h>
#include <stdio.h>

int contNeg, contPos, N;

void main()
{
    N      = 1;
    contNeg = 0;
    contPos = 0;
    
    while (N != 0)
    {
        printf (" Valor a considerar : "); scanf("%d",&N);
        if (N < 0) contNeg++;
        if (N > 0) contPos++;
    }

    printf (" Total valores positivos : %d \n", contPos); 
    printf (" Total valores Negativos : %d \n", contNeg); 
    return;
}