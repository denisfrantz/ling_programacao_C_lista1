#include <stdio.h>
#include <stdlib.h>
int main()
{
	int cod, qntd; 
	float valor_total;
	
	// leitura do código do lanche e da quantidade comprada
	printf ("Codigo: ");
	scanf ("%d", &cod);
	printf ("Quantidade: ");
	scanf ("%d", &qntd);
	
	// verificação do código e cálculo do valor a ser pago
	if (cod == 100)
	{
		valor_total = (qntd*1.2);
	}
	if (cod == 101)
	{
		valor_total = (qntd*1.3);
	}
	if (cod == 102)
	{
		valor_total = (qntd*1.5);
	}
	if (cod == 103)
	{
		valor_total = (qntd*1.2);
	}
	if (cod == 104)
	{
		valor_total = (qntd*1.3);
	}
	if (cod == 105)
	{
		valor_total = (qntd*1.0);
	}
	
	printf ("\nTotal: R$ %.2f", valor_total);
	
	return 0;
}
