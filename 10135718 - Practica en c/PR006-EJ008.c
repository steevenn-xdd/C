  /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture tres numeros enteros y determine:
        o Si estan en (Combinacion #1)
        o Si estan en (Combinacion #2)
        o Si estan en (Combinacion #3)
        o Si los valores son negativos presentar un mensaje de error
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718008 P006
    */

#include <stdio.h>

int main() {
    int A, B, C;

    printf("Ingrese tres numeros enteros positivos separados por espacios: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A <= 0 || B <= 0 || C <= 0)
    {
        printf("Valores negativos introducidos.\n");
    }
    else
    {
        if (A >= B && A >= C)
        {
            printf("Combinacion #1\n");
        }
        else if (B >= A && B >= C)
        {
            printf("Combinacion #2\n");
        }
        else
        {
            printf("Combinacion #3\n");
        }
    }

    return 0;
}
