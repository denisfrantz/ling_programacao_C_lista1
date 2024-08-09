#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade_anos, idade_meses, idade_dias, total_dias;
	
	// leitura da idade em anos, meses e dias
	printf ("Anos: ");
	scanf ("%d", &idade_anos);
	printf ("Meses: ");
	scanf ("%d", &idade_meses);
	printf ("Dias: ");
	scanf ("%d", &idade_dias);
	
	// conversão da idade em anos, meses e dias para dias totais
	total_dias = (idade_anos*365);
	total_dias = total_dias + (idade_meses*30);
	total_dias = total_dias + idade_dias;
	
	printf ("\nTotal de dias: %d", total_dias);
	
	return 0;
}
