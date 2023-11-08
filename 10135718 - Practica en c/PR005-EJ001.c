    /*
        Introduccion a la algoritmia
        Programa: Hacer un programa que pida una cantidad de Pesos y la convierta a:
            o Dolares
            o Euros
            o Libras
        Las tasas de conversion deben ser definidas como constantes en el programa. (#define)
        Validaciones: Valide si el valor introducido es negativo o es Cero.
        Salida: Tiene libertad de definir la salida a conveniencia. Debe presentar mensajes especificos en las validaciones que realice.

        ID : 1013-5718
        Autor : Steven N. Duarte C.
        Practica 005
        Ejercicio 10135718001 P005
    */

#include <stdio.h>

// Definimos las tasas de conversion como constantes
#define TasaDolar 0.016
#define TasaEuro 0.018
#define TasaLibra 0.015

int main() {
    // Se utiliza double para poder leer un numero con decimales
    double pesos, dolares, euros, libras;

    printf(" *** Este programa realiza la conversion de un valor introducido hasta EU/US/LE *** \n \n Ingrese la cantidad de pesos:");
    scanf("%lf", &pesos); // Usamos %lf para leer un double
    //nota %lf significa long float
    if (pesos <= 0) // Validamos que el valor introducido sea mayor que cero
    {
        printf("El valor ingresado es invalido. Debe ser mayor que cero.\n");
    }
    else
    {
        // Realizamos las conversiones
        dolares = pesos * TasaDolar;
        euros = pesos * TasaEuro;
        libras = pesos * TasaLibra;

        //utilizamos %.2lf para imprimir el valor con dos decimales
        printf("%.2lf pesos equivale a:\n %.2lf dolares\n %.2lf euros\n %.2lf libras\n", pesos, dolares, euros, libras);
    }

    return 0;
}
