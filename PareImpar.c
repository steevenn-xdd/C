//Realice un programa que determine si un numero es [par  o impar].

#include <stdio.h>
int main (){
    //tienen que ser entero
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    int res = num % 2;

    if (res == 0){
        printf("Su residuo es igual a %d El numero %d es par",res, num);
    } else {
        printf("Su residuo es igual a %d El numero %d es impar",res, num);
    
    
    
    
    }    
    
    return 0;


}