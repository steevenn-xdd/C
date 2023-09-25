// Introducir la edad de una persona, y saber si es mayor de edad o no.

#include <stdio.h>

int main(){
    const int mayoriaEdad = 18;
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    

    if (edad >= mayoriaEdad)
    {
        printf("Su edad es %d. Usted es mayor de edad", edad);
    } else {
        printf("Usted es menor de edad, su edad es: %d la cual es menor a %d", edad, mayoriaEdad);
    }
    
    return 0;
}