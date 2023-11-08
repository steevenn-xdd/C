/*
Introduccion a la algoritmia
Programa: Hacer un programa que capture por teclado una nota de una asignatura:
o Valide si es una nota correcta en sus rangos
o imprima por pantalla el valor ALFA
o Determine la cantidad de puntos (de 0 hasta 4) que corresponde a dicha
calificacion

ID : 1013-5718
Autor : Steven N. Duarte C.
Practica 005
Ejercicio 10135718004 P005
*/

#include <stdio.h>

int main()
{
    int nota;
    char alfa;

    printf("Ingrese la nota (0-100): ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 100) // Validamos que la nota este entre 0 y 100
    {
        printf("La nota ingresada es incorrecta. Debe estar entre 0 y 100.\n");
    }
    else
    {
        // Determinamos el valor alfa
        if (nota >= 90)
        {
            alfa = 'A';
        }
        else if (nota >= 80)
        {
            alfa = 'B';
        }
        else if (nota >= 70)
        {
            alfa = 'C';
        }
        else if (nota >= 60)
        {
            alfa = 'D';
        }
        else
        {
            alfa = 'F';
        }

        int puntos = (nota >= 90) ? 4 : (nota >= 80) ? 3
                                    : (nota >= 70)   ? 2
                                    : (nota >= 60)   ? 1
                                                     : 0;

        printf("La calificacion es: %c\n Corresponde a %d puntos", alfa, puntos);
    }

    return 0;
}
