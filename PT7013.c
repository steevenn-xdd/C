#include <stdio.h>

int primoT(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int N;
    printf("Ingrese un numero N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("El numero N debe ser al menos 1.\n");
        return 1;
    }

    int i = 0;
    int num = 3;
    
    printf("Las primeras %d duplas de primos vecinos a partir de 3 son:\n", N);

    while (i < N) {
        if (primoT(num) && primoT(num + 2)) {
            printf("Dupla #%d - %d,%d\n", i + 1, num, num + 2);
            i++;
        }
        num++;
    }

    return 0;
}
