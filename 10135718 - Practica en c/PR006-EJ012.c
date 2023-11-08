 /*
    Introduccion a la algoritmia
    Programa: Que lea una hora en 3 distintos valores
            H - Correspondiente a la hora
            M – Correspondiente a los minutos
            S – Correspondiente a los segundos
            y diga la hora que es un segundo despues.

    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718012 P006
    */

#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Ingrese la hora en formato HH:MM:SS: separados por : ");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);

        // Validamos que la hora sea valida
    if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59)
    {
        // Aumentar un segundo
        segundos++;

        if (segundos == 60)
        {
            segundos = 0;
            minutos++;

            if (minutos == 60)
            {
                minutos = 0;
                horas++;

                if (horas == 24)
                {
                    horas = 0;
                }
            }
        }

        printf("Un segundo despues, la hora es: %02d:%02d:%02d\n", horas, minutos, segundos);
    }
    else
    {
        printf("Hora ingresada no valida.\n");
    }


    return 0;
}
