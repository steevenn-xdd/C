    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que pida una cantidad de segundos y la convierta a:
        o Horas, minutos y segundos

    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 005
    Ejercicio 10135718003 P005
    */

#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600; // 3600 segundos en una hora
    segundos_restantes = segundos % 3600; // Calculamos los segundos restantes
    minutos = segundos_restantes / 60; // 60 segundos en un minuto
    segundos_restantes = segundos_restantes % 60; // Calculamos los segundos restantes

    printf("Tiempo en formato HH:MM:SS: %02d:%02d:%02d\n", horas, minutos, segundos_restantes);// %02d imprime el valor con dos digitos, si el valor es menor que 10, se rellena con un cero a la izquierda
    return 0;
}
