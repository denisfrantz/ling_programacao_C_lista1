#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetorA[10], vetorB[10], i, j;
	
	printf ("VETOR A (10 posicoes)\n\n"); // leitura do vetor A
	for (i = 0; i < 10; i++)
	{
		scanf ("%d", &vetorA[i]);
	}
	
	printf ("\nVETOR B (10 posicoes)\n\n"); // leitura do vetor B
	for(j = 0; j < 10; j++)
	{
		scanf ("%d", &vetorB[j]);
	}
	
	system ("cls");
	printf ("VETOR A\n\n"); // impressão do vetor A
	for (i = 0; i < 10; i++)
	{
		printf ("%d ", vetorA[i]);
	}
	
	printf ("\n\nVETOR B\n\n"); // impressão do vetor B
	for (i = 0; i < 10; i++)
	{
		printf ("%d ", vetorB[i]);
	}
	
	return 0;
}
