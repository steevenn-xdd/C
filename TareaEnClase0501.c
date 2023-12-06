// Programa de conversion de moneda
// Erick Barinas / 13 Nov / 2023

// Hacer un programa que pida una cantidad en pesos y la covierta a Dolares / Euros / libras
// Restricciones --- la tasa de conversion debe ser definida como constante en el program
// 					 Valide si los valores introducidos son negativos o Cero

#include <stdio.h>
//#include <stdlib.h>

// Aqui puse las constantes que reflejanm cuantos pesos se necesitan para el cambio a la moneda
#define CNST_TASA_DOLAR 56.66
#define CNST_TASA_LIBRA 69.45
#define CNST_TASA_EURO  60.71

int main()
{
	float cntPesos;
	float ttlDolares, ttlEuros, ttlLibras;
	
	// Captura de datos
	printf ("  Cantidad en pesos  : "); 
	scanf  ("%f",&cntPesos);
	
	if (cntPesos <= 0)
	{
		printf (" Se espera la introduccion de valores positivos \n");
	}
	else
	{
		ttlDolares	= cntPesos / CNST_TASA_DOLAR;
		ttlEuros    = cntPesos / CNST_TASA_EURO;
		ttlLibras   = cntPesos / CNST_TASA_LIBRA;

		printf ("  Total de Pesos       : %7.6f \n",cntPesos);
		printf ("  Total de Dolares     : %7.5f \n",ttlDolares);
		printf ("  Total de Euros       : %7.4f \n",ttlEuros);
		printf ("  Total de Libras      : %7.3f \n",ttlLibras);
	}
	return 0;
}

