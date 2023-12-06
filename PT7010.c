/*
10. Dado un numero N decir si pertenece a la serie de Fibonacci.
Hacer la validación de pertenencia a la serie, a través de funciones
(Este programa persigue motivar la creatividad del estudiante ante problemas con cierto nivel de 
complejidad algorítmica
*/

#include <stdio.h>
#include <stdlib.h>

int n;
int numPrev, numAnt, numAct;
int i;

int FibonacciT(int num) {
    
    numPrev = 0;
    numAnt = 1;
    numAct = numPrev + numAnt;
    
    while (numAct <= num) {
        if (numAct == num) {
            return 1;
        }
        
        numPrev = numAnt;
        numAnt = numAct;
        numAct = numPrev + numAnt;
    }
    
    return 0;
}

void main(){
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    
    if (FibonacciT(n)) {
        printf("%d pertenece a la serie de Fibonacci.\n", n);
    } else {
        printf("%d no pertenece a la serie de Fibonacci.\n", n);
    }
}
