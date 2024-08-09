#include <stdio.h>
#include <stdlib.h>
int main()
{
	float n1, n2, n3, media;
	
	// leitura das três notas
	printf ("Nota 1: ");
	scanf ("%f", &n1);
	printf ("Nota 2: ");
	scanf ("%f", &n2);
	printf ("Nota 3: ");
	scanf ("%f", &n3);
	
	// cálculo da média
	media = ((n1+n2+n3)/3);
	
	printf ("\nMedia: %.1f", media);
	
	return 0;
}
