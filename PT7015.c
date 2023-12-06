/*
15. Hacer un programa que (presuma que usted es un cajero) capture dos valores: 
o Monto del Billete con el cual paga
o Valor del Consumo realizado
Con dichos valores, determinar:
o Si son válidos (o no … por ejemplo, valores negativos, o consumo mayor que billete de pago, etc) 
o El monto que debe devolver
o Al determinar el monto a devolver, también calcular la combinación mínima de papeletas / 
monedas a devolver, basándonos en los billetes existentes en República Dominicana
(Este programa persigue motivar la creatividad del estudiante ante problemas con cierto nivel de 
complejidad algorítmica.
*/
#include <stdio.h>

void cCambio(double mPago, double consumo);

int main() {
    double mPago, consumo;

    printf("Ingrese el monto del billete con el cual paga: ");
    scanf("%lf", &mPago);

    printf("Ingrese el valor del consumo realizado: ");
    scanf("%lf", &consumo);

    
    if (mPago <= 0 || consumo < 0 || consumo > mPago) {
        printf("Valores no válidos. Asegúrese de ingresar montos correctos.\n");
        return 1;
    }

    cCambio(mPago, consumo);

    return 0;
}

void cCambio(double mPago, double consumo) {

    int dop[] = {1000, 500, 200, 100, 50, 25, 10, 5, 1};

    double cambio = mPago - consumo;

    printf("Monto a devolver: %.2f\n", cambio);

    printf("Combinación mínima de billetes/monedas a devolver:\n");

    for (int i = 0; i < sizeof(dop) / sizeof(dop[0]); i++) {
        int cantidad = cambio / dop[i];
        cambio -= cantidad * dop[i];

        if (cantidad > 0) {
            if (dop[i] >= 26) {
                printf("%d billete(s) de %d pesos dominicanos\n", cantidad, dop[i]);
            } else {
                printf("%d moneda(s) de %d pesos dominicanos\n", cantidad, dop[i]);
            }
        }
    }
}