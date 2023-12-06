/*

1
Ejercicio final (10 puntos) 
Fecha tope Entrega miércoles 6 diciembre 6:00PM 
 
Realizar un programa que determine combinación de un numero de 4 dígitos ( A M O R), que 
multiplicado por un numero de 1 digito ( N ), da como resultado otro numero de 4 dígitos (R O M A)... 
con las restricciones siguientes 
- En el numero de 4 dígitos, cada digito es diferente a los otros 3 (A M O R) 
- El numero de 1 digito, este digito (N) es diferente a los 4 dígitos del primer número (ROMA) 
- El resultado final, es los primeros 4 dígitos invertidos (R O M A) 
 
Algo así como que ... 
 2 1 7 8   *   4   =   8 7 1 2 
 

ID: 1013-5718
Autor: Steven N. Duarte
 
*/

#include <stdio.h>

int main() {
    int AMOR, cont, ROMA;

    
    for (AMOR = 1000; AMOR <= 9999; AMOR++) {
        
        int A = AMOR / 1000;
        int M = (AMOR / 100) % 10;
        int O = (AMOR / 10) % 10;
        int R = AMOR % 10;

        
        if (A != M && A != O && A != R && M != O && M != R && O != R) {
            
            for (cont = 0; cont <= 9; cont++) {
                
                if (cont != A && cont != M && cont != O && cont != R) {

                    ROMA = cont * AMOR;
                    int R2 = ROMA % 10;
                    int O2 = (ROMA / 10) % 10;
                    int M2 = (ROMA / 100) % 10;
                    int A2 = ROMA / 1000;

                    if (R2 == R && O2 == O && M2 == M && A2 == A) {
                    
                        printf("%d * %d = %d %d %d %d\n", AMOR, cont, A2, M2, O2, R2);
                    }
                }
            }
        }
    }

    return 0;
}
