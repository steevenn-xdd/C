#include <stdio.h>
#include <stdlib.h>

char car;

void main()
{
	car = ' ';
	while ((car != 27) && (car != 13))
	{
		car = getch();
		if (car == 0) 
		{
			car = getch();
			switch (car)
			{
				case 72 : {
							printf (" \n Cursor Arriba ...");
							break;
						  }
				default : break;
			}
		}
		else printf ("%c",car);
	}
	return;
}


