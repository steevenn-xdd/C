    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture una temperatura en grados Fahrenheit y la convierta a grados Celsius.
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718009 P006
    */

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("La temperatura en grados Celsius es: %.2f\n", celsius);

    return 0;
}
