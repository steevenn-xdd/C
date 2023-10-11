#include <stdio.h>

int main() {
    int opcion;

    printf("Seleccione una opción (1 o 2):\n");
    printf("1. Ver día de la semana\n");
    printf("2. Realizar operaciones matemáticas\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            int dia;

            printf("Ingresa un número (1-7) para conocer el día de la semana: ");
            scanf("%d", &dia);

            switch (dia) {
                case 1:
                    printf("Lunes\n");
                    break;
                case 2:
                    printf("Martes\n");
                    break;
                case 3:
                    printf("Miércoles\n");
                    break;
                case 4:
                    printf("Jueves\n");
                    break;
                case 5:
                    printf("Viernes\n");
                    break;
                case 6:
                    printf("Sábado\n");
                    break;
                case 7:
                    printf("Domingo\n");
                    break;
                default:
                    printf("Número no válido, introduce un número entre 1 y 7.\n");
                    break;
            }
            break;

        case 2:
            char operador;
            double num1, num2, resultado;

            printf("Ingresa un operador (+, -, *, /): ");
            scanf(" %c", &operador);

            printf("Ingresa dos números: ");
            scanf("%lf %lf", &num1, &num2);

            switch (operador) {
                case '+':
                    resultado = num1 + num2;
                    break;
                case '-':
                    resultado = num1 - num2;
                    break;
                case '*':
                    resultado = num1 * num2;
                    break;
                case '/':
                    if (num2 != 0) {
                        resultado = num1 / num2;
                    } else {
                        printf("No se puede dividir por cero.\n");
                        break;
                    }
                    break;
                default:
                    printf("Operador no válido.\n");
                    break;
            }

            printf("Resultado: %.2lf %c %.2lf = %.2lf\n", num1, operador, num2, resultado);
            break;

        default:
            printf("Opción no válida. Debe seleccionar 1 o 2.\n");
            break;
    }

    return 0;
}
