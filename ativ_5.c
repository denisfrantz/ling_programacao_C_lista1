#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, soma;
	
	soma = 0;
	
	// estrutura de repetição para somar os valores digitados
	while (num != 0) // enquanto o número digitado for diferente de zero, o programa continua sendo executado
	{
		printf ("Digite um valor para somar: ");
		scanf ("%d", &num);
		soma = soma + num;
	}
	
	printf ("\nSoma dos valores digitados: %d", soma);
	
	return 0;
}
