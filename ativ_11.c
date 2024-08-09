#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[5][5], i, j, cont;
	
	cont = 0;
	
	// leitura da matriz 5x5
	printf ("MATRIZ 5x5:\n\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf ("%d", &matriz[i][j]);
		}
	}
	
	system ("cls");

	// quando o índice da linha é o mesmo da coluna, o algoritmo verifica se o valor é igual a 1
	printf ("IMPRESSAO DA MATRIZ:\n\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf ("%d ", matriz[i][j]);
			if (i == j)
			{
				if (matriz[i][j] == 1)
				{
					cont++;
				}
			}
		}
		printf ("\n");
	}
	
	// se toda a diagonal prinicipal for composta por elementos 1, ela é uma matriz identidade
	if (cont == 5)
	{
		printf ("\nA matriz e identidade");
	}
	else
	{
			printf ("\nA matriz nao e identidade");
	}
	
	return 0;
}
