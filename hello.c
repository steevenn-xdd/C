#include <stdio.h>

//Promedio de 2 notas
int main() {
    float nota1, nota2;
    printf("Ingrese la nota 1: ");
    scanf("%f", &nota1);
    printf("Ingrese la nota 2: ");
    scanf("%f", &nota2);
    float promedio = (nota1 + nota2) / 2;
    printf("El promedio es: %.2f \nSu calificacion 1 es : %.2f \nSu calificacion 2 es: %.2f", promedio, nota1, nota2);

    return 0;
}