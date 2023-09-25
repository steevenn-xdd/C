/*Escriba un programa en el que se pida ingresar numeros del 1 al 7 segun el numero elegido va a representar un dia de la semana*/

#include <stdio.h>
int main(){
    int dia;
    printf("Ingrese un numero para indicar su dia: ");
    scanf("%d",&dia);
    
    switch (dia)
    {
    case 1:
        printf("Hoy es Domingo dia %d de la semana ", dia); 
        break;
    case 2:
        printf("Hoy es Lunes dia %d de la semana ", dia); 
        break;
    case 3:
        printf("Hoy es Martes dia %d de la semana ", dia); 
        break;
    case 4:
        printf("Hoy es Miercoles dia %d de la semana ", dia); 
        break;
    case 5:
        printf("Hoy es Jueves dia %d de la semana ", dia); 
        break;
    case 6:
        printf("Hoy es Viernes dia %d de la semana ", dia); 
        break;
    case 7:
        printf("Hoy es Sabado dia %d de la semana ", dia); 
        break;
    
    default:
        break;
    }

    return 0;
}