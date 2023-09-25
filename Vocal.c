/*Escriba un programa en el que se pida ingresar una letra y determine si es vocal o consonante*/
#include <stdio.h>

int main(){

    char letra;
    printf("Ingrese la letra a consultar: ");
    scanf("%c",&letra);
    switch (letra)
    {
    case 'a':
        printf("La letra a consultar '%c' es una vocal", letra);
        break;
    case 'e':
        printf("La letra a consultar '%c' es una vocal", letra);
        break;
    case 'i':
        printf("La letra a consultar '%c' es una vocal", letra);
        break;
    case 'o':
        printf("La letra a consultar '%c' es una vocal", letra);
        break;
    case 'u':
        printf("La letra a consultar '%c' es una vocal", letra);
        break;
    
    default:
        printf("La letra a consultar '%c' es una consonante", letra);
        break;
    }
    
    
    
    return 0;

}