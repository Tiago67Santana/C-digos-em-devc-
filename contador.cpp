#include <stdio.h>

int main() {
	int contador = 0;
	char continua;
	
	do {
	// Comandos a serem repetidos.
	
		printf ("Repetindo ....\n");
		
		contador = contador + 1;
		
		printf ("Tecle 's' se deseja comtinuar\n");
		scanf ("%c",&continua);
		fflush(stdin);
			
	} while (continua == 's') ; // Enquanto
	
	// Exibindo quantidade de vezea que o laço de repetiçao aconteceu.
	printf ("O bloco foi repetido %d vezes: ", contador);
	
	return 0;
}
