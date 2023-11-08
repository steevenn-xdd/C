/*
Introduccion a la algoritmia
Programa: Hacer un programa que:

    o Presente un menu con las figuras (cuadrado / rectangulo / triangulo / circulo)
    o Para cada uno de los puntos siguientes crear una (o varias) funcion(es) que pida(n)
los datos necesarios y calcule el AREA y PERIMETRO de la figura indicada
    • Un cuadrado (Capturar lado)
    • Un rectangulo (Capturar lados)
    • Un triangulo (Usando metodo de Base-Altura).
    • Un circulo (Capturar Radio)
[Se persigue ver el uso de variables / identificadores / tipos de datos / Funciones]
Salida: Tiene libertad de personalizar la salida. En todo caso, presentar los valores de perimetro /
Area, o si la combinacion provista no tiene una solucion.
ID : 1013-5718
Autor : Steven N. Duarte C.
Practica 005
Ejercicio 10135718006 P005
*/



#include <stdio.h>
#include <math.h>

// Función para calcular el área y el perímetro de un cuadrado
void calcularCuadrado() {
    float lado;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    float area = lado * lado;
    float perimetro = 4 * lado;
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);
}

// Función para calcular el área y el perímetro de un rectángulo
void calcularRectangulo() {
    float base, altura;
    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);
    float area = base * altura;
    float perimetro = 2 * (base + altura);
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);
}

// Función para calcular el área de un triángulo
void calcularTriangulo() {
    float base, altura;
    printf("Ingrese la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triángulo: ");
    scanf("%f", &altura);
    float area = 0.5 * base * altura;
    printf("Área: %.2f\n", area);
    printf("No se puede calcular el perímetro con base y altura.\n");
}

// Función para calcular el área y el perímetro de un círculo
void calcularCirculo() {
    float radio;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);
    float area = M_PI * radio * radio;
    float perimetro = 2 * M_PI * radio;
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);
}

int main() { 
    int opcion;

    printf("Programa para calcular el área y el perímetro de figuras geométricas\n");
    printf("1. Cuadrado\n");
    printf("2. Rectángulo\n");
    printf("3. Triángulo\n");
    printf("4. Círculo\n");
    printf("Seleccione una figura (1-4): ");
    scanf("%d", &opcion);

    // Llamamos a la función correspondiente según la opción seleccionada
    switch (opcion) {
        case 1:
            calcularCuadrado();
            break;
        case 2:
            calcularRectangulo();
            break;
        case 3:
            calcularTriangulo();
            break;
        case 4:
            calcularCirculo();
            break;
        default:
            printf("Opción no válida.\n");
            return 1;
    }

    return 0;
}
