    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture tres numeros enteros y los imprima en orden ascendente y descendente.
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718004 P006
    */

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Ingrese tres numeros enteros separados por espacios: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // creamos una variable temporal para intercambiar los valores
    int temp;

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Orden ascendente: %d %d %d\n", num1, num2, num3);
    printf("Orden descendente: %d %d %d\n", num3, num2, num1);

    return 0;
}
