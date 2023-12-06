/*
11. Hacer un programa que, reciba un numero N desde el teclado, 
En base a dicho número, Determine si es Primo.
En caso de ser primo, presentar mensaje “Numero Primo”
En caso de no serlo, “presentar mensaje “Numero No Primo”.
(Este programa persigue motivar la creatividad del estudiante ante problemas con cierto nivel de 
complejidad algorítmica)
*/
#include <stdio.h>

#include <stdio.h>
int n, i;
int esPrimo(n) {
    if (n <= 1) {
        return 0;
    }

    for (i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (esPrimo(num)) {
        printf("Numero Primo\n");
    } else {
        printf("Numero No Primo\n");
    }

    return 0;
}

