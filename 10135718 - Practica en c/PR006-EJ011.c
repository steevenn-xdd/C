
    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture los coeficientes de una ecuacion cuadratica (A, B, C, o como
    entienda).
    Esos tres valores seran considerados los coeficientes de AX2 + BX + C = 0.
    El programa, debera validar:
    Restricciones:
    N/A
    Una vez validado esto, El programa debera generar una salida como Sigue:
    • Si estos 3 valores realmente conforman una ecuacion cuadratica
    • Cuales son los valores de X1 / X2 que realmente satisfacen la ecuacion con dichos
    coeficientes
    • Determinar excepciones de tipo de resultado que puedan tenerse (ie – imaginarios?)

    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718011 P006
    */

#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C;
    printf("Ingrese los coeficientes de la ecuacion cuadratica (A, B, C) separados por espacios: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A == 0)
    {
        printf("Esto no es una ecuacion cuadratica.\n");
    }
    else
    {
        float discriminante = B * B - 4 * A * C;
        if (discriminante < 0)
        {
            printf("La ecuacion no tiene soluciones reales (raices imaginarias).\n");
        }
        else
        {
            float x1 = (-B + sqrt(discriminante)) / (2 * A);
            float x2 = (-B - sqrt(discriminante)) / (2 * A);
            printf("Las soluciones son:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}
