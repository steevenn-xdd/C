// Programa que dados los resutlados de 4 asignaturas (calificacion / credito / etc.)
// Permita calcular el indice trimestral

#include <stdio.h>
#include <stdlib.h>

// Definicion de prototipos
char fnLetra (int);
int  fnPeso  (int);

// Declaracion de variables

char *asig1, asig2[15],  asig3[15],  asig4[15];
char letra1,  	letra2,  	letra3,  	letra4; 

int  calif1, 	calif2, 	calif3, 	calif4;
int  cred1,  	cred2,  	cred3,  	cred4; 
int  peso1,  	peso2,  	peso3,  	peso4; 

float indice;

int main()
{
	// Captura asignaturas
	printf ("\nAsignatura   #1     :  "); scanf("%S",&asig1);
	printf ("Creditos     #1     :  "); scanf("%d",&cred1);
	printf ("Calificacion #1     :  "); scanf("%d",&calif1);
	letra1 = fnLetra(calif1);
	peso1  = fnPeso (calif1);

	// Captura asignaturas
	printf ("\nAsignatura   #2     :  "); scanf("%S",&asig2);
	printf ("Creditos     #2     :  "); scanf("%d",&cred2);
	printf ("Calificacion #2     :  "); scanf("%d",&calif2);
	letra2 = fnLetra(calif2);
	peso2  = fnPeso (calif2);

	// Captura asignaturas
	printf ("\nAsignatura   #3     :  "); scanf("%S",&asig3);
	printf ("Creditos     #3     :  "); scanf("%d",&cred3);
	printf ("Calificacion #3     :  "); scanf("%d",&calif3);
	letra3 = fnLetra(calif3);
	peso3  = fnPeso (calif3);

	// Captura asignaturas
	printf ("\nAsignatura   #4     :  "); scanf("%S",&asig4);
	printf ("Creditos     #4     :  "); scanf("%d",&cred4);
	printf ("Calificacion #4     :  "); scanf("%d",&calif4);
	letra4 = fnLetra(calif4);
	peso4  = fnPeso (calif4);

	// Hacemos casting de datos para asegurar que el resultado es numero real
	
	indice = (float) ((peso1 * cred1) + 
	          (peso2 * cred2) + 
			  (peso3 * cred3) + 
			  (peso4 * cred4)) 
			  / (cred1 + cred2 + cred3 + cred4); 
	
	printf ( "\n\n");
	printf ( " Asignatura 1 -  %c    %c    %d    %d    %d \n", asig1, letra1, cred1, calif1, peso1);
	printf ( " Asignatura 2 -  %c    %c    %d    %d    %d \n", asig2, letra2, cred2, calif2, peso2);
	printf ( " Asignatura 3 -  %c    %c    %d    %d    %d \n", asig3, letra3, cred3, calif3, peso3);
	printf ( " Asignatura 4 -  %c    %c    %d    %d    %d \n", asig4, letra4, cred4, calif4, peso4);

	printf ( "\n\n Indice trimestral  : %1.2f",indice);
	return 0;
}

char fnLetra (int piCalificacion)
{
	char LETRA;
	if ((piCalificacion >=  0) && (piCalificacion <=  59)) LETRA = 'F';
	if ((piCalificacion >= 60) && (piCalificacion <=  69)) LETRA = 'D';
	if ((piCalificacion >= 70) && (piCalificacion <=  79)) LETRA = 'C';
	if ((piCalificacion >= 80) && (piCalificacion <=  89)) LETRA = 'B';
	if ((piCalificacion >= 90) && (piCalificacion <= 100)) LETRA = 'A';
	return LETRA;
}

int fnPeso (int piCalificacion)
{
	int PESO; 

	if ((piCalificacion >=  0) && (piCalificacion <=  59)) PESO = 0;
	if ((piCalificacion >= 60) && (piCalificacion <=  69)) PESO = 1;
	if ((piCalificacion >= 70) && (piCalificacion <=  79)) PESO = 2;
	if ((piCalificacion >= 80) && (piCalificacion <=  89)) PESO = 3;
	if ((piCalificacion >= 90) && (piCalificacion <= 100)) PESO = 4;

	return PESO;
}

