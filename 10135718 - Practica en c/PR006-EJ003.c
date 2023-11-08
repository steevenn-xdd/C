/*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture un numero del 1 al 12 y determine el nombre del mes que corresponde.
        o Utilizando la estructuras IF
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718003 P006
    */

#include <stdio.h>

int main()
{
    int mes;

    printf("Ingrese un número del 1 al 12: ");
    scanf("%d", &mes);

    if (mes == 1)
    {
        printf("Enero\n");
    }
    else if (mes == 2)
    {
        printf("Febrero\n");
    }
    else if (mes == 3)
    {
        printf("Marzo\n");
    }
    else if (mes == 4)
    {
        printf("Abril\n");
    }
    else if (mes == 5)
    {
        printf("Mayo\n");
    }
    else if (mes == 6)
    {
        printf("Junio\n");
    }
    else if (mes == 7)
    {
        printf("Julio\n");
    }
    else if (mes == 8)
    {
        printf("Agosto\n");
    }
    else if (mes == 9)
    {
        printf("Septiembre\n");
    }
    else if (mes == 10)
    {
        printf("Octubre\n");
    }
    else if (mes == 11)
    {
        printf("Noviembre\n");
    }
    else if (mes == 12)
    {
        printf("Diciembre\n");
    }
    else
    {
        printf("Número fuera del rango válido.\n");
    }

    return 0;
}
