// Programa que determina el valor Alfa de una nota, y dice su peso para GPA
// Erick Barinas / 13 Nov / 2023

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ResultadoCalificacion;
	
	printf ("  Calificacion recibida  : "); 
	scanf  ("%d",&ResultadoCalificacion);

	if ((ResultadoCalificacion < 0) || (ResultadoCalificacion > 100))
	{
		printf (" Calificacion debe estar en el rango de valores del 1..100 \n ");
	}
	else
	{
		if ((ResultadoCalificacion >= 0) && (ResultadoCalificacion <= 59))
		{
			printf ("  Valor F ... peso 0 ");
		}
		else 
		{
			if ((ResultadoCalificacion >= 60) && (ResultadoCalificacion <= 69))
			{
				printf ("  Valor D ... peso 1 ");
			}
			else 
			{
				if ((ResultadoCalificacion >= 70) && (ResultadoCalificacion <= 79))
				{
					printf (" Valor C ... peso 2");
				}
				else 
				{	
					if ((ResultadoCalificacion >= 80) && (ResultadoCalificacion <= 89))
					{
						printf (" Valor B ... peso 3");
					}
					else
					{
						printf (" Valor A ... peso 4");
					}
				}
			}
			
		}
	}
	
	return 0;
}


