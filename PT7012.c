/*
12. Hacer un programa que, reciba un numero N desde el teclado, 
En base a dicho número, presente Los Primeros Números primos a partir de 3.
(Este programa persigue motivar la creatividad del estudiante ante problemas con cierto nivel de 
complejidad algorítmica. Evidenciar también reusabilidad de código a partir de código hecho 
previamente)

*/

#include <stdio.h>
int i;
int primoT(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    
    int i = 0;
    int num = 3;
    
    printf("Los primeros %d numeros primos a partir de 3 son:\n", N);
    
    while (i < N) {
        if (primoT(num)) {
            printf("%d ", num);
            i++;
        }
        num++;
    }
    
    return 0;
}