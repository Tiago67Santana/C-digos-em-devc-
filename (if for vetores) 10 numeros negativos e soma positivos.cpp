#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAM 2

		int main() {
			setlocale (LC_ALL, "");
			
			int i, numero[TAM], soma = 0;
			char negativo = 0, positivo;
			
			for (i = 0; i < TAM; i++) {
				printf ("Digite o %iº numero: ", i +1);
				scanf ("%i",&numero[i]);
		
		 		if (numero[i] < 0) {
		 		 	negativo++;
			} 		else {
				soma += numero[i];
		}
	}
		
			printf ("\nSoma dos positivos: %i", soma);
		printf ("\nNúmeros negativos: %i", negativo);
		
		
			return 0;
	}
