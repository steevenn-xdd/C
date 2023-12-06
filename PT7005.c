/*
5. Hacer un programa que recibe como entrada dos números enteros positivos N y M.
Determina el cociente y el residuo de dichos números, pero a través de restas sucesivas basadas en 
ciclos (no de división).
Presenta el resultado de su cociente y residuo.
(Este ejercicio persigue que el estudiante pueda tener control de varios elementos dentro de un ciclo)


*/

#include <stdio.h>

int main() {
    int N, M;
    int cociente = 0, residuo = 0;

    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    printf("Ingrese el valor de M: ");
    scanf("%d", &M);

    while (N >= M) {
        N -= M;
        cociente++;
    }

    residuo = N;

    printf("El cociente es: %d\n", cociente);
    printf("El residuo es: %d\n", residuo);

    return 0;
}
