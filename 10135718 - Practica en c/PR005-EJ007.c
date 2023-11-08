/*
    Introduccion a la algoritmia
    Programa: Capture los resultados de 4 asignaturas,
        o Creditos de cada una
        o Calificacion en numero.
    A partir de ahi
        o Indique en Letra la calificacion de cada una
        o Determine el indice del trimestre basado en los resultados de las 4 asignaturas
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 005
    Ejercicio 10135718007 P005
    */
#include <stdio.h>

int main() {
        // Definimos los arreglos para almacenar los creditos y las calificaciones
    int creditos[4];
    int calificaciones[4];

    for (int i = 0; i < 4; i++)//iniciamo en ciclo con i=0 y mientras i sea menor que 4 se ejecuta el ciclo y se le suma 1 a i y declaramos i como entero dentro del for para que comience en 0 cada vez que se ejecute el ciclo
    {
        printf("Ingrese el numero de creditos de la asignatura %d: ", i + 1);
        scanf("%d", &creditos[i]);
        printf("Ingrese la calificacion (0-100) de la asignatura %d: ", i + 1);
        scanf("%d", &calificaciones[i]);

        if (calificaciones[i] < 0 || calificaciones[i] > 100) // Validamos que la calificacion este entre 0 y 100
        {
            printf("La calificacion ingresada para la asignatura %d es incorrecta. Debe estar entre 0 y 100.\n", i + 1);//se utiliza i+1 para que el numero de la asignatura sea el correcto
            return 1;
        }
    }

    for (int i = 0; i < 4; i++) //inicio el ciclo con i=0 y mientras i sea menor que 4 se ejecuta el ciclo y se le suma 1 a i y declaramos i como entero dentro del for para que comience en 0 cada vez que se ejecute el ciclo
    {
        char letra;
        int puntos;
        
        // Determinamos la letra y los puntos
        if (calificaciones[i] >= 90)
        {
            letra = 'A';
            puntos = 4;
        }
        else if (calificaciones[i] >= 80)
        {
            letra = 'B';
            puntos = 3;
        }
        else if (calificaciones[i] >= 70)
        {
            letra = 'C';
            puntos = 2;
        }
        else if (calificaciones[i] >= 60)
        {
            letra = 'D';
            puntos = 1;
        }
        else
        {
            letra = 'F';
            puntos = 0;
        }

        printf("Asignatura %d: %d creditos, calificacion %d (en letra: %c, puntos: %d).\n", i + 1, creditos[i], calificaciones[i], letra, puntos);
    }
    //credito empieza desde cero 0, 1, 2, 3 y calificacion empieza desde cero 0, 1, 2, 3 asi esto dan 4
    int total_creditos = creditos[0] + creditos[1] + creditos[2] + creditos[3];
    int total_puntos = (creditos[0] * calificaciones[0] + creditos[1] * calificaciones[1] + creditos[2] * calificaciones[2] + creditos[3] * calificaciones[3]); // Multiplicamos cada calificacion por sus creditos y sumamos los resultados
    double promedio = (double)total_puntos / total_creditos; //dividimos los puntos totales entre los creditos totales para obtener el promedio


    printf("Indice del trimestre: %.2lf\n", promedio);

    return 0;
}
