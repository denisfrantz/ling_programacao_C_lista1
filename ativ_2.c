#include <stdio.h>
#include <stdlib.h>
int main()
{
	int total_dias, idade_anos, idade_meses, idade_dias;
	
	// leitura da idade em dias
	printf ("Total de dias: ");
	scanf ("%d", &total_dias);
	
	// conversão da idade em dia para anos, meses e dias
	idade_anos = (total_dias/365);
	idade_meses = ((total_dias%365)/30);
	idade_dias = ((total_dias%365)%30);
	
	printf ("\nAnos: %d", idade_anos);
	printf ("\nMeses: %d", idade_meses);
	printf ("\nDias: %d", idade_dias);
	
	return 0;
}
