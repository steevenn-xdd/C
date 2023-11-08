    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que determine si es un caracter exclusivo.
        o Determinar si es una letra mayuscula o minuscula
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718006 P006
    */

#include <stdio.h>

int main() {
    char letra;

    printf("Ingrese una letra (S o N): ");
    scanf(" %c", &letra);

    if (letra == 'S' || letra == 's') // Validamos si es S o s 
    {
        printf("Ingreso 'S'.\n");
    }
    else if (letra == 'N' || letra == 'n') // Validamos si es N o n
    {
        printf("Ingreso 'N'.\n");
    }
    else
    {
        printf("Caracter no valido.\n");
    }

    return 0;
}
