#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade;
	
	// leitura da idade
	printf ("Idade: ");
	scanf ("%d", &idade);
	
	if (idade < 5) // caso a idade seja inferior a 5 anos, a pessoa não se encaixa em nenhuma categoria
	{
		printf ("\nSem categoria");
	}
	else // caso contrário, o algoritmo verifica as outras possibilidades de categoria
	{
		if ((idade >= 5)&&(idade <= 7))
		{
			printf ("\nCategoria INFANTIL A");
		}
		if ((idade >= 8)&&(idade <= 10))
		{
			printf ("\nCategoria INFANTIL B");
		}
		if ((idade >= 11)&&(idade <= 13))
		{
			printf ("\nCategoria JUVENIL A");
		}
		if ((idade >= 14)&&(idade <= 17))
		{
			printf ("\nCategoria JUVENIL B");
		}
		if (idade >= 18)
		{
			printf ("\nCategoria ADULTO");
		}
	}
	
	return 0;
}
