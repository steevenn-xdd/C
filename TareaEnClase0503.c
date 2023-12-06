// Programa de conversion de segundos a formato hora militar
// Erick Barinas / 13 Nov / 2023

// Hacer un programa que reciba una cantidad de segundos
// e indique la hora en formato HH:MM:SS

#include <stdio.h>
#include <stdlib.h>

// Aqui puse las constantes que reflejanm cuantos pesos se necesitan para el cambio a la moneda

int main()
{
	int cntSegundosOriginales;
	int ttlHoras;
	int ttlMinutos;
	int ttlSegundos;
	int cntSegundosRestantes;	
	
	printf ("  Cantidad de Segundos  : "); scanf  ("%d",&cntSegundosOriginales);
	
	ttlHoras             = cntSegundosOriginales / 3600;
	cntSegundosRestantes = cntSegundosOriginales % 3600;

	ttlMinutos			 = cntSegundosRestantes / 60;
	cntSegundosRestantes = cntSegundosOriginales % 60;
	
	ttlSegundos			 = cntSegundosRestantes;

	printf (" %4d:%2d:%2d",ttlHoras, ttlMinutos, ttlSegundos);

	return 0;
}


