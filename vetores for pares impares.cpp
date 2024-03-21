#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#define TAM 6 

//

		int main() {
			setlocale (LC_ALL, "");
			
			int i, numero[TAM];
			int pares = 0, impares = 0;
			
			for (i = 0; i < TAM; i++){
				printf ("\n Digite o %iº número: ", i + 1);
			scanf ("%i",&numero[i]);
			
			if (numero[i] % 2 == 0) {
		 		pares++;
			 } else if(numero[i] % 2 == 1) {
				impares++;
		}
			
		
	}
			for (i = 0; i < 6; i++) {
		 		printf ("\n %iº numero: %i\n", i + 1, numero[i]);
		}
			
			printf ("\nNumeros pares: %i", pares);
			printf ("\nNumeros impares: %i", impares);
			
			 return 0;
		}
