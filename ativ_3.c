#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	
	// leitura do n�mero
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &num);
	
	if (num % 2 == 0) // verifica se o n�mero � par
	{
		printf ("\nO numero %d e par e ", num);
	}
	else 
	{
		printf ("\nO numero %d e impar e ", num);
	}
	if (num > 0) // verifica se o n�mero � positivo
	{
		printf ("positivo");
	}
	else
	{
		printf ("negativo");
	}
	
	return 0;
}
