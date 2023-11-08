    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture un numero entero y determine:
        o Si es par o impar
        o Si es positivo o negativo
        o Si es cero
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718005 P006
    */

#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("El numero es par.");
    }
    else
    {
        printf("El numero es impar.");
    }

    if (numero > 0)
    {
        printf(" Es positivo.\n");
    }
    else if (numero < 0)
    {
        printf(" Es negativo.\n");
    }
    else
    {
        printf(" Es cero.\n");
    }

    return 0;
}
