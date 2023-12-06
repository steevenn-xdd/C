#include <stdio.h>
#include <stdlib.h>

int numero;
int a,m,o,r,n;
int a1,m1,o1,r1;

int idx1, idx2;
int tmpNum;

void main()
{
	for (idx1 = 1023; idx1 <= 9876; idx1++)
	{	tmpNum = idx1;
		for (idx2 =1; idx2<=4; idx2++)
		{
			switch (idx2)
			{
				case 1 : r = tmpNum % 10; break;
				case 2 : o = tmpNum % 10; break;
				case 3 : m = tmpNum % 10; break;
				default: a = tmpNum % 10; break;
			}
			tmpNum = tmpNum / 10;
		}
		printf ("%d    %d  %d %d %d\n", idx1,a,m,o,r);
	}
		
	return;
}
