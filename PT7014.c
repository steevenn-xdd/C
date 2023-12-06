/*
Hacer un programa que reciba un numero N, y presente el Factorial de dicho número.
En el algoritmo, se solicita que el cálculo de Factorial se haga a través de una función, y que la misma 
sea recursiva. Mirar la posibilidad de usar números largos y no signos.
(Este programa persigue introducir al concepto de Recursividad, a la vez de motivar la creatividad del 
estudiante ante problemas con cierto nivel de complejidad algorítmica)
*/
#include <stdio.h>
int n;
long factorial(n);

int main() {
    int N;
    printf("Ingrese un numero N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("El numero N debe ser no negativo.\n");
        return 1;
    }

    long resultado = factorial(N);

    printf("El factorial de %d es: %ld\n", N, resultado);

    return 0;
}

long factorial(n) {
    if (n == 0 || n == 1) {
        return 1;  
    } else {
        return n * factorial(n - 1); 
    }
}
