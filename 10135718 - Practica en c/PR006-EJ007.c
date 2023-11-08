    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que determine si es una vocal.
        o Hacerlo usando IF
        (punto adicional si usa estructura switch / case)
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718007 P006
    */

#include <stdio.h>

int main() {
    char letra;

    printf("Ingrese una letra: ");
    scanf(" %c", &letra);

    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        switch (letra) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("La letra es una vocal.\n");
                break;
            default:
                printf("La letra no es una vocal.\n");
                break;
        }
    } else {
        printf("No ingresó una letra válida.\n");
    }

    return 0;
}
