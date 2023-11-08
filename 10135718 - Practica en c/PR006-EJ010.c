    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que, reciba 3 numeros desde el teclado (Puede llamarles A, B, C, o como
    entienda).
    Esos tres valores potencialmente formaran un triangulo.
    El programa, debera validar:
    Restricciones:
    - Si hubiese valores negativos o 0 introducidos, en cuyo caso debera presentar un
    mensaje de incongruencia en los datos, y no continuar.
    - Si los 3 lados NO forman un triangulo, presentar un mensaje de “Valores no
    conforman Triangulo”
    - Si los 3 lados forman un triangulo, en cuyo caso, continuar la validacion
    Una vez validado esto, El programa debera generar una salida como Sigue:
    • Presentar el Valor del Area (Calculados en base a los valores de los lados)
    • Clasificacion Lateral
    Investigar como hacer lo siguiente, y hacerlo
    • Presentar apropiadamente los valores de los angulos (calculados en base a los
    valores de los lados)
    • Clasificacion Angular
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718010 P006
    */

#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Ingrese las longitudes de los tres lados del triangulo separados por espacios: "); 
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0 || (lado1 + lado2 <= lado3) || (lado2 + lado3 <= lado1) || (lado3 + lado1 <= lado2))
    {
        printf("Valores no conforman un triangulo o son invalidos.\n");
    }
    else
    {
        printf("Los valores conforman un triangulo.\n");

        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("Triangulo equilatero\n");
        }
        else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
        {
            printf("Triangulo isosceles\n");
        }
        else
        {
            printf("Triangulo escaleno\n");
        }

        if (lado1 * lado1 + lado2 * lado2 == lado3 * lado3 || lado2 * lado2 + lado3 * lado3 == lado1 * lado1 || lado3 * lado3 + lado1 * lado1 == lado2 * lado2)
        {
            printf("Triangulo rectangulo\n");
        }
        else if (lado1 * lado1 + lado2 * lado2 < lado3 * lado3 || lado2 * lado2 + lado3 * lado3 < lado1 * lado1 || lado3 * lado3 + lado1 * lado1 < lado2 * lado2)
        {
            printf("Triangulo obtuso\n");
        }
        else
        {
            printf("Triangulo agudo\n");
        }
    }

    return 0;
}
