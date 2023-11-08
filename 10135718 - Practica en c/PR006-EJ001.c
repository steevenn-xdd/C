    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture dos numeros enteros y determine:
        o Si estan en orden creciente
        o Si estan en orden decreciente
        o Si ambos son pares
        o Si ambos son impares
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718001 P006
    */

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Ingrese dos numeros enteros (separar con espacios): ");
    scanf("%d %d", &num1, &num2);
    
    // Comparamos los numeros para determinar si estan en orden creciente, decreciente o son iguales
    if (num1 < num2)
    {
        printf("Los numeros estan en orden creciente.\n");
    }
    else if (num1 > num2)
    {
        printf("Los numeros estan en orden decreciente.\n");
    }
    else
    {
        printf("Los numeros son iguales.\n");
    }
    // Comparamos los numeros para determinar si ambos son pares, impares o uno es par y el otro es impar
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("Ambos numeros son pares.\n");
    }
    else if (num1 % 2 != 0 && num2 % 2 != 0)
    {
        printf("Ambos numeros son impares.\n");
    }
    else
    {
        printf("Uno de los numeros es par y el otro es impar.\n");
    }

    return 0;
}
