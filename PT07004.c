/*
4. Hacer un programa que recibe como entrada dos números enteros positivos N y M.
Determina el producto de dichos números, pero a través de Sumas sucesivas basadas en ciclos (no de multiplicación).
Presenta el resultado de dicho producto.
(Este ejercicio persigue que el estudiante pueda tener control de varios elementos dentro de un ciclo)

*/


#include <stdlib.h>
#include <stdio.h>

int N, M, producto; 
int cont;

void main()
{
    N      = 1;
    printf (" Multiplicando  : "); scanf("%d",&N);
    printf (" Multiplicador  : "); scanf("%d",&M);
    
    cont = 1;
    producto = 0;

    while (cont <= M)
    {
        producto = producto + N;
        printf ("residuo es: %d\n", residuo);
    
    return 0;
} 
printf(" %d    %d    %d     %d\n",M,N,cont,producto); 
        cont++;
    }
    
    return;
}