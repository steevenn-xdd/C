/*
    Introduccion a la algoritmia
    Programa: Hacer un programa que pida un numero e indique si es:
        o Multiplo de 2
        o Multiplo de 3
        o Multiplo de 5
        o Multiplo de 7
    Nota, observar que un numero puede ser multiplo de varios a la vez.

    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 005
    Ejercicio 10135718002 P005
*/

#include <stdio.h>

int main()
{
    int numero;

    printf(" *** Este programa captura un numero entero, e indica sus multiplos *** \n  Ingrese un numero:");
    scanf("%d", &numero);

    // Validamos si el numero es multiplo de 2, 3, 5 o 7 y mostramos un mensaje por cada caso
    if (numero % 2 == 0)
    {
        printf("Es multiplo de 2.\n");
    }
    if (numero % 3 == 0)
    {
        printf("Es multiplo de 3.\n");
    }
    if (numero % 5 == 0)
    {
        printf("Es multiplo de 5.\n");
    }
    if (numero % 7 == 0)
    {
        printf("Es multiplo de 7.\n");
    }

    return 0;
}
