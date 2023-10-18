#include <stdio.h>

int main() {
    int opcion;

    printf("Seleccione una opción (1 o 2):\n");
    printf("1. Ver día de la semana\n");
    printf("2. Realizar operaciones matemáticas\n");
    printf("3. ciclos\n");

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
        
        case 3:
            char ciclo;
            int MAX; // variable que contiene el numero maximo de la tabla a imprimir
            int N; // variable que contiene el numero de la tabla a imprimir
            int i; // Variable de control del ciclo
            N = 0;
            i = 0;
            MAX = 0;
            printf("Seleccione una opción (1, 2 o 3):\n");
            printf("1. ciclo for\n");
            printf("2. ciclo while\n");
            printf("3. ciclo do while\n");
            scanf(" %c", &ciclo);

            printf("Ingrese el valor maximo de la tabla: ");
            scanf("%d", &MAX);
            printf("Ingrese el valor para general la tabla: ");
            scanf("%d", &N);

            switch (ciclo)
            {
            case 1:
                    for (
                        i = 1; 
                        i <= MAX; 
                        i++)
                {
                    printf("%3d x %3d = %6d \n", N, i, (N*i));
                // printf(" **** iteracion numero %d \n", i);   
                //Sleep(1000); // 1 segundo

                }
                break;
                
            case 2:
            // ejemplo con while
                i = 1;
                while (i <= MAX)
                {
                    
                    printf("%3d x %3d = %6d \n", N, i, (N*i));
                    i++;
                }
                break;
            case 3:
            // ejemplo con do while
                i = 1;
                do
                {
                    printf("%3d x %3d = %6d \n", N, i, (N*i));
                    i++;
                } while (i <= MAX);
                break;      
            
            default:
                break;
            }
           
            break;
        default:
            printf("Opción no válida. Debe seleccionar 1 o 2.\n");
            break;
    }

    return 0;
}
