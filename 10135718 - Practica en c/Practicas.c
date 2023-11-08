/*
Algoritmo de Secuencia y condicionales
Practicas 005 y 006
Introduccion a la algoritmia
Id : 1013-5718
Autor : Steven N. Duarte C.
Programa : Practicas.c en este archivo se encuentran las practicas 005 y 006 las cuales se pueden ejecutar desde el menu interactivo que se muestra al ejecutar el programa.

para poder navegar entre las funciones de las practicas 005 y 006 se puede hacer de la siguiente manera ejemplo: para buscar el la asignacion 1 de la practica 005 colocamo el numero de asignacion 001 seguido de un espacio y el numero de la practica 005 (001 P005)(001 P006) y asi sucesivamente para las demas asignaciones de las practicas 005 y 006
*/

// Librerias
#include <stdio.h> // Libreria estandar de entrada y salida
#include <stdlib.h> // Libreria estandar de funciones de uso general
#include <math.h> // Libreria para funciones matematicas
#include <windows.h> // Libreria para funciones de windows asi como Sleep() para pausar o ralentizar el programa

// Funciones de las practicas 005
void P005_ConvDivisa();
void P005_VerifMultiplos();
void P005_ConvSegundos();
void P005_ConvNotas();
void P005_VerifMaxMin();
void P005_CalcAreaPerim();
void P005_CalcIndiceTrim();
// Funciones de las practicas 006
void P006_OrdenParidadNum();
void P006_DiaSemanaIf();
void P006_NombreMesIf();
void P006_OrdenarAscDesc();
void P006_ParidadPositNum();
void P006_ValidarCaractExcl();
void P006_ValidarVocal();
void P006_EncontrarComb();
void P006_ConvFahrCent();
void P006_ClasifTriang();
void P006_ValidarEcuad();
void P006_UnSegDespues();
// Funciones de los menus
void P005_Menu();
void P006_Menu();

// Funcion principal
int main()
{
    int practica, asignacion;

    do
    {
        // Usamos do-while para que el menu se muestre al menos una vez y se repita hasta que se seleccione la opcion 0
        printf("Seleccione una practica:\n 1. Practica005\n 2. Practica006\n 0. Salir\n Ingrese el numero de la practica o 0 para salir: ");
        scanf("%d", &practica);

        // Usamos switch para seleccionar las practicas y asignaciones
        switch (practica)
        {
        case 1:
            do
            {
                Sleep(3000); // Espera 3 segundos antes de mostrar el menu de la practica 005
                P005_Menu();
                scanf("%d", &asignacion);

                switch (asignacion) //utilizamos asignacion para seleccionar el ejercicio de la practica 005
                {
                case 1:
                    P005_ConvDivisa();
                    break;
                case 2:
                    P005_VerifMultiplos();
                    break;
                case 3:
                    P005_ConvSegundos();
                    break;
                case 4:
                    P005_ConvNotas();
                    break;
                case 5:
                    P005_VerifMaxMin();
                    break;
                case 6:
                    P005_CalcAreaPerim();
                    break;
                case 7:
                    P005_CalcIndiceTrim();
                    break;

                case 0:

                    break;
                default:
                    printf("Asignacion/ejercicio no valido. Intente de nuevo.\n");
                }
            } while (asignacion != 0); //cuando asignacion sea 0 se sale del menu de la practica 005
            break;

        case 2:
            do
            {
                P006_Menu();
                scanf("%d", &asignacion);

                switch (asignacion)
                {
                case 1:
                    P006_OrdenParidadNum();
                    break;
                case 2:
                    P006_DiaSemanaIf();
                    break;
                case 3:
                    P006_NombreMesIf();
                    break;
                case 4:
                    P006_OrdenarAscDesc();
                    break;
                case 5:
                    P006_ParidadPositNum();
                    break;
                case 6:
                    P006_ValidarCaractExcl();
                    break;
                case 7:
                    P006_ValidarVocal();
                    break;
                case 8:
                    P006_EncontrarComb();
                    break;
                case 9:
                    P006_ConvFahrCent();
                    break;
                case 10:
                    P006_ClasifTriang();
                    break;
                case 11:
                    P006_ValidarEcuad();
                    break;
                case 12:
                    P006_UnSegDespues();
                    break;

                case 0:
                    break;
                default:
                    printf("Asignacion/ejercicio no valido. Intente de nuevo.\n");
                }
            } while (asignacion != 0);
            break;

        case 0:
            printf("Saliendo del programa.\n");
            break;

        default:
            printf("Practica no valida. Intente de nuevo.\n");
        }
    } while (practica != 0); //cuando practica sea 0 se sale del programa

    return 0;
}

// PRACTICAS 005 desde el ejercio 1 al 7

void P005_ConvDivisa()
{
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
// Definimos las tasas de conversion como constantes
#define TasaDolar 0.016 
#define TasaEuro 0.018
#define TasaLibra 0.015

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
}

void P005_VerifMultiplos()
{
    /*
        Introduccion a la algoritmia
        Programa: Hacer un programa que pida un numero e indique si es:
            o Multiplo de 2
            o Multiplo de 3
            o Multiplo de 5
            o Multiplo de 7
        Nota, observar que un numero puede ser multiplo de varios a la vez.

        ID : 1013-5718
        Autor : Steven N. Duarte C.
        Practica 005
        Ejercicio 10135718002 P005
    */
    int numero;

    printf(" *** Este programa captura un numero entero, e indica sus multiplos *** \n  Ingrese un numero:");
    scanf("%d", &numero);

    // Validamos si el numero es multiplo de 2, 3, 5 o 7 y mostramos un mensaje por cada caso   
    if (numero % 2 == 0)
    {
        printf("Es multiplo de 2.\n");
    }
    if (numero % 3 == 0)
    {
        printf("Es multiplo de 3.\n");
    }
    if (numero % 5 == 0)
    {
        printf("Es multiplo de 5.\n");
    }
    if (numero % 7 == 0)
    {
        printf("Es multiplo de 7.\n");
    }
}

void P005_ConvSegundos()
{
    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que pida una cantidad de segundos y la convierta a:
        o Horas, minutos y segundos

    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 005
    Ejercicio 10135718003 P005
    */

   
    int segundos, horas, minutos, segundos_restantes;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600; // 3600 segundos en una hora
    segundos_restantes = segundos % 3600; // Calculamos los segundos restantes
    minutos = segundos_restantes / 60; // 60 segundos en un minuto
    segundos_restantes = segundos_restantes % 60; // Calculamos los segundos restantes

    printf("Tiempo en formato HH:MM:SS: %02d:%02d:%02d\n", horas, minutos, segundos_restantes);// %02d imprime el valor con dos digitos, si el valor es menor que 10, se rellena con un cero a la izquierda
}

void P005_ConvNotas()
{
    /*
Introduccion a la algoritmia
Programa: Hacer un programa que capture por teclado una nota de una asignatura:
o Valide si es una nota correcta en sus rangos
o imprima por pantalla el valor ALFA
o Determine la cantidad de puntos (de 0 hasta 4) que corresponde a dicha
calificacion

ID : 1013-5718
Autor : Steven N. Duarte C.
Practica 005
Ejercicio 10135718004 P005
*/
    int nota;
    char alfa;

    printf("Ingrese la nota (0-100): ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 100) // Validamos que la nota este entre 0 y 100
    {
        printf("La nota ingresada es incorrecta. Debe estar entre 0 y 100.\n");
    }
    else
    {
        // Determinamos el valor alfa
        if (nota >= 90)
        {
            alfa = 'A';
        }
        else if (nota >= 80)
        {
            alfa = 'B';
        }
        else if (nota >= 70)
        {
            alfa = 'C';
        }
        else if (nota >= 60)
        {
            alfa = 'D';
        }
        else
        {
            alfa = 'F';
        }

        int puntos = (nota >= 90) ? 4 : (nota >= 80) ? 3
                                    : (nota >= 70)   ? 2
                                    : (nota >= 60)   ? 1
                                                     : 0;

        printf("La calificacion es: %c\n Corresponde a %d puntos", alfa, puntos);
    }
}

void P005_VerifMaxMin()
{
    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture por teclado 4 numeros enteros y determine:
        o El maximo
        o El minimo
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 005
    Ejercicio 10135718005 P005
    */
    int num1, num2, num3, num4;

    printf("Ingrese cuatro valores enteros (separar con espacios): ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    
    int max = num1; // Suponemos que el primer numero es el maximo
    int min = num1; // Suponemos que el primer numero es el minimo

    // Comparamos los numeros para determinar el maximo y el minimo
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num4;
    }

    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    if (num4 < min)
    {
        min = num4;
    }

    printf("El maximo es: %d\n", max);
    printf("El minimo es: %d\n", min);
}
// ojo con el ejercicio 6
void P005_CalcAreaPerim()
{
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

}


void P005_CalcIndiceTrim()
{
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
}

// PRACTICAS 006 desde el ejercio 1 al 12

void P006_OrdenParidadNum()
{

    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture dos numeros enteros y determine:
        o Si estan en orden creciente
        o Si estan en orden decreciente
        o Si ambos son pares
        o Si ambos son impares
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718001 P006
    */

    int num1, num2;

    printf("Ingrese dos numeros enteros (separar con espacios): ");
    scanf("%d %d", &num1, &num2);
    
    // Comparamos los numeros para determinar si estan en orden creciente, decreciente o son iguales
    if (num1 < num2)
    {
        printf("Los numeros estan en orden creciente.\n");
    }
    else if (num1 > num2)
    {
        printf("Los numeros estan en orden decreciente.\n");
    }
    else
    {
        printf("Los numeros son iguales.\n");
    }
    // Comparamos los numeros para determinar si ambos son pares, impares o uno es par y el otro es impar
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("Ambos numeros son pares.\n");
    }
    else if (num1 % 2 != 0 && num2 % 2 != 0)
    {
        printf("Ambos numeros son impares.\n");
    }
    else
    {
        printf("Uno de los numeros es par y el otro es impar.\n");
    }
}

void P006_DiaSemanaIf()
{

    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture un numero del 1 al 7 y determine el dia de la semana que corresponde.
        o Utilizando la estructuras IF
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718002 P006
    */
    int dia;

    printf("Ingrese un numero del 1 al 7: ");
    scanf("%d", &dia);

    if (dia == 1)
    {
        printf("Lunes\n");
    }
    else if (dia == 2)
    {
        printf("Martes\n");
    }
    else if (dia == 3)
    {
        printf("Miercoles\n");
    }
    else if (dia == 4)
    {
        printf("Jueves\n");
    }
    else if (dia == 5)
    {
        printf("Viernes\n");
    }
    else if (dia == 6)
    {
        printf("Sabado\n");
    }
    else if (dia == 7)
    {
        printf("Domingo\n");
    }
    else
    {
        printf("Numero fuera del rango valido.\n");
    }
}

void P006_NombreMesIf()
{

    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture un numero del 1 al 12 y determine el nombre del mes que corresponde.
        o Utilizando la estructuras IF
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718003 P006
    */
    int mes;

    printf("Ingrese un numero del 1 al 12: ");
    scanf("%d", &mes);

    if (mes == 1)
    {
        printf("Enero\n");
    }
    else if (mes == 2)
    {
        printf("Febrero\n");
    }
    else if (mes == 3)
    {
        printf("Marzo\n");
    }
    else if (mes == 4)
    {
        printf("Abril\n");
    }
    else if (mes == 5)
    {
        printf("Mayo\n");
    }
    else if (mes == 6)
    {
        printf("Junio\n");
    }
    else if (mes == 7)
    {
        printf("Julio\n");
    }
    else if (mes == 8)
    {
        printf("Agosto\n");
    }
    else if (mes == 9)
    {
        printf("Septiembre\n");
    }
    else if (mes == 10)
    {
        printf("Octubre\n");
    }
    else if (mes == 11)
    {
        printf("Noviembre\n");
    }
    else if (mes == 12)
    {
        printf("Diciembre\n");
    }
    else
    {
        printf("Numero fuera del rango valido.\n");
    }
}

void P006_OrdenarAscDesc()
{

    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture tres numeros enteros y los imprima en orden ascendente y descendente.
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718004 P006
    */
    int num1, num2, num3;

    printf("Ingrese tres numeros enteros separados por espacios: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // creamos una variable temporal para intercambiar los valores
    int temp;

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Orden ascendente: %d %d %d\n", num1, num2, num3);
    printf("Orden descendente: %d %d %d\n", num3, num2, num1);
}

void P006_ParidadPositNum()
{

    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture un numero entero y determine:
        o Si es par o impar
        o Si es positivo o negativo
        o Si es cero
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718005 P006
    */
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("El numero es par.");
    }
    else
    {
        printf("El numero es impar.");
    }

    if (numero > 0)
    {
        printf(" Es positivo.\n");
    }
    else if (numero < 0)
    {
        printf(" Es negativo.\n");
    }
    else
    {
        printf(" Es cero.\n");
    }
}

void P006_ValidarCaractExcl()
{

    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que determine si es un caracter exclusivo.
        o Determinar si es una letra mayuscula o minuscula
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718006 P006
    */
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
}

void P006_ValidarVocal()
{

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
    char letra;

    printf("Ingrese una letra: ");
    scanf(" %c", &letra);

    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) // con el codigo ascii validamos si es una letra
    {
        switch (letra)
        {
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
    }
    else
    {
        printf("No ingreso una letra valida.\n");
    }
}

void P006_EncontrarComb()
{

    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture tres numeros enteros y determine:
        o Si estan en (Combinacion #1)
        o Si estan en (Combinacion #2)
        o Si estan en (Combinacion #3)
        o Si los valores son negativos presentar un mensaje de error
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718008 P006
    */

    int A, B, C;

    printf("Ingrese tres numeros enteros positivos separados por espacios: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A <= 0 || B <= 0 || C <= 0)
    {
        printf("Valores negativos introducidos.\n");
    }
    else
    {
        if (A >= B && A >= C)
        {
            printf("Combinacion #1\n");
        }
        else if (B >= A && B >= C)
        {
            printf("Combinacion #2\n");
        }
        else
        {
            printf("Combinacion #3\n");
        }
    }
}

void P006_ConvFahrCent()
{
    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture una temperatura en grados Fahrenheit y la convierta a grados Celsius.
    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718009 P006
    */
    float fahrenheit, celsius;

    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("La temperatura en grados Celsius es: %.2f\n", celsius);
}

void P006_ClasifTriang()
{

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
}

void P006_ValidarEcuad()
{

    /*
    Introduccion a la algoritmia
    Programa: Hacer un programa que capture los coeficientes de una ecuacion cuadratica (A, B, C, o como
    entienda).
    Esos tres valores seran considerados los coeficientes de AX2 + BX + C = 0.
    El programa, debera validar:
    Restricciones:
    N/A
    Una vez validado esto, El programa debera generar una salida como Sigue:
    • Si estos 3 valores realmente conforman una ecuacion cuadratica
    • Cuales son los valores de X1 / X2 que realmente satisfacen la ecuacion con dichos
    coeficientes
    • Determinar excepciones de tipo de resultado que puedan tenerse (ie – imaginarios?)

    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718011 P006
    */

    float A, B, C;
    printf("Ingrese los coeficientes de la ecuacion cuadratica (A, B, C) separados por espacios: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A == 0)
    {
        printf("Esto no es una ecuacion cuadratica.\n");
    }
    else
    {
        float discriminante = B * B - 4 * A * C;
        if (discriminante < 0)
        {
            printf("La ecuacion no tiene soluciones reales (raices imaginarias).\n");
        }
        else
        {
            float x1 = (-B + sqrt(discriminante)) / (2 * A);
            float x2 = (-B - sqrt(discriminante)) / (2 * A);
            printf("Las soluciones son:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}

void P006_UnSegDespues()
{

    /*
    Introduccion a la algoritmia
    Programa: Que lea una hora en 3 distintos valores
            H - Correspondiente a la hora
            M – Correspondiente a los minutos
            S – Correspondiente a los segundos
            y diga la hora que es un segundo despues.

    ID : 1013-5718
    Autor : Steven N. Duarte C.
    Practica 006
    Ejercicio 10135718012 P006
    */
    int horas, minutos, segundos;

    printf("Ingrese la hora en formato HH:MM:SS: separados por : ");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);

        // Validamos que la hora sea valida
    if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59)
    {
        // Aumentar un segundo
        segundos++;

        if (segundos == 60)
        {
            segundos = 0;
            minutos++;

            if (minutos == 60)
            {
                minutos = 0;
                horas++;

                if (horas == 24)
                {
                    horas = 0;
                }
            }
        }

        printf("Un segundo despues, la hora es: %02d:%02d:%02d\n", horas, minutos, segundos);
    }
    else
    {
        printf("Hora ingresada no valida.\n");
    }
}

//Menu de practicas
void P005_Menu(){
    printf("\n Practica 005 - Seleccione un ejercicio/asignacion:\n");

    printf("1. ej001 - Conversor de Divisa\n");
    printf("2. ej002 - Verificador de Multiplos\n");
    printf("3. ej003 - Conversor de Segundos\n");
    printf("4. ej004 - Conversor de Notas\n");
    printf("5. ej005 - Verificador de Maximo y Minimo\n");
    printf("6. ej006 - Calculadora de Area y Perimetro\n");
    printf("7. ej007 - Calculadora de Indice de Trimestre\n");

    printf("0. Volver al menu principal\n Seleccione una asignacion/ejercicio o 0 para volver al menu principal:\n");
}

void P006_Menu(){
    printf("\n Practica 006 - Seleccione un ejercicio/asignacion:\n");

    printf("1. ej001 - Orden y Paridad de numeros\n");
    printf("2. ej002 - Dia de la semana - Utilizando If\n");
    printf("3. ej003 - Nombre del mes - Utilizando If\n");
    printf("4. ej004 - Ordenar captura\n");
    printf("5. ej005 - paridad y positividad de un numero\n");
    printf("6. ej006 - Validar si es caracter exclusivo\n");
    printf("7. ej007 - Validar si es vocal\n");
    printf("8. ej008 - Encontrar combinacion\n");
    printf("9. ej009 - Conversor de grados fahrenheit a grados centigrados\n");
    printf("10. ej010 - Clasificador de Triangulo\n");
    printf("11. ej011 - Validar Ecuacion cuadratica\n");
    printf("12. ej012 - 1 segundo despues\n");

    printf("0. Volver al menu principal\n Seleccione una asignacion/ejercicio o 0 para volver al menu principal:\n");
}

