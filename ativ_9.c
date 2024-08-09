#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetorA[10], vetorB[10], i;
	
	// leitura do vetor A, de 10 posições
	printf ("VETOR 1 (10 posicoes):\n\n");
	for (i = 0; i < 10; i++)
	{
		scanf ("%d", &vetorA[i]);
	}
	
	// leitura do vetor B, de 10 posições
	printf ("\nVETOR 2 (10 posicoes):\n\n");
	for (i = 0; i < 10; i++)
	{
		scanf ("%d", &vetorB[i]);
	}
	
	system ("cls");
	
	// armazenamentos dos vetores A e B em um terceiro vetor
	printf ("VETOR C (20 posicoes):\n\n");
	for (i = 0; i < 10; i++)
	{
		printf ("%d ", vetorA[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf ("%d ", vetorB[i]);
	}
	
	return 0;
}
