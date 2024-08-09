#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matrizA[3][2], matrizB[2][3], i, j;
	
	// leitura da matriz A
	printf ("MATRIZ A (3X2)\n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf ("%d", &matrizA[i][j]);
		}
	}
	
	// leitura da matriz B
	printf ("\nMATRIZ B (2X3)\n\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf ("%d", &matrizB[i][j]);
		}
	}
	
	system ("cls");
	
	// impressão da matriz A
	printf ("IMPRESSAO DA MATRIZ A\n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf ("%d ", matrizA[i][j]);
		}
		printf ("\n");
	}
	
	// impressão da matriz B
	printf ("\nIMPRESSAO DA MATRIZ B\n\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("%d ", matrizB[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
