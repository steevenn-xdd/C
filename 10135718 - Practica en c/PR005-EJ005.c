 /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture por teclado 4 numeros enteros y determine:
        o El maximo
        o El minimo
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 005
    Ejercicio 10135718005 P005
    */

#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    
    printf("Ingrese cuatro valores enteros: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    
    int max = num1; // Suponemos que el primer numero es el maximo
    int min = num1; // Suponemos que el primer numero es el minimo

    // Comparamos los numeros para determinar el maximo y el minimo
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }

    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    if (num4 < min) {
        min = num4;
    }

    printf("El máximo es: %d\n", max);
    printf("El mínimo es: %d\n", min);

    return 0;
}
