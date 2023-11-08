    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture un numero del 1 al 7 y determine el dia de la semana que corresponde.
        o Utilizando la estructuras IF
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718002 P006
    */

#include <stdio.h>

int main()
{
    int dia;

    printf("Ingrese un número del 1 al 7: ");
    scanf("%d", &dia);

    if (dia == 1)
    {
        printf("Lunes\n");
    }
    else if (dia == 2)
    {
        printf("Martes\n");
    }
    else if (dia == 3)
    {
        printf("Miércoles\n");
    }
    else if (dia == 4)
    {
        printf("Jueves\n");
    }
    else if (dia == 5)
    {
        printf("Viernes\n");
    }
    else if (dia == 6)
    {
        printf("Sábado\n");
    }
    else if (dia == 7)
    {
        printf("Domingo\n");
    }
    else
    {
        printf("Número fuera del rango válido.\n");
    }

    return 0;
}
