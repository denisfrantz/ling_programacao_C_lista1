#include <stdio.h>
#include <stdlib.h>
int main()
{
	int segundos, tempo_horas, tempo_minutos, tempo_segundos;
	
	// leitura da dura��o do evento em segundos
	printf ("Informe a duracao do evento (segundos): ");
	scanf ("%d", &segundos); 
	
	// convers�o da dura��o em segundo para horas, minutos e segundos
	tempo_horas = (segundos/3600);
	tempo_minutos = ((segundos%3600)/60);
	tempo_segundos = ((segundos%3600)%60);
	
	printf ("\nHora (s): %d", tempo_horas);
	printf ("\nMinuto (s): %d", tempo_minutos);
	printf ("\nSegundo (s): %d", tempo_segundos);
	
	return 0;
}
