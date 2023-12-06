// Presente un menu con las figuras cuadrado / rectangulo / triangulo / circulo
// En cada caso, segun sea ... calcule el area y el perimetro

#include <stdio.h>
#include <stdlib.h>

// Definicion de prototipos
void fnCapturaOpcion    ();
void fnCalculaTriangulo ();
void fnCalculaRectangulo();
void fnCalculaCuadrado  ();
void fnCalculaCirculo   ();

// Declaracion de variables
float L1, L2; 
float RADIO;
float B,H;
float area, perimetro;
	
int opcion;
char final;

int main()
{
	// Invoco a la funcion para capturar la opcion a ejecutar
	final = 'N';
	while ((final != 'S') && (final != 's'))
	{
		system("cls");
		fnCapturaOpcion();
		
		switch (opcion)
		{
			case 1:	{   
						printf (" Aqui calcularemos el triangulo \n");
						fnCalculaTriangulo ();
						break;
					}
			case 2:
			case 3:
			case 4: {
						break;
					}
			default : {   
						printf (" *** OPCION INVALIDA ***\n");
						break;
					}
		}
		printf (" Desea finalizar (S/N) :"); final = toupper(getch());
	}
	return 0;
}
	
void fnCapturaOpcion()
{
	printf (" *** Programa que permite calcular el Area / Perimetro (circunferencia si es circulo)  de diferentes figuras *** \n");
	printf ("\t     1 - Triangulo \n");
	printf ("\t     2 - Cuadrado  \n");
	printf ("\t     3 - Rectangulo\n");
	printf ("\t     4 - Circulo   \n");
	printf (" \nEscoga una opcion : ");	
	scanf  ("%d",&opcion);
	
	return;
}

void fnCalculaTriangulo ()
{
	printf (" Valor de base   : "); scanf("%f",&B);
	printf (" Valor de Altura : "); scanf("%f",&H);
	area = (B*H)/2;
	printf (" El valor del AREA es : %5.3f",area); 
	
	return;
}

void fnCalculaRectangulo()
{
	
	return;

}
void fnCalculaCuadrado  ()
{
	
	return;

}
void fnCalculaCirculo   ()
{
	
	return;

}


