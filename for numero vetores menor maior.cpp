#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

		int main() {
			setlocale (LC_ALL, "");
			
			int i, numero[5];
			int maiorNumero = INT_MIN, menorNumero = INT_MAX;
			
			printf ("Digite o i� numero: \n");
			
			for (i = 0; i < 5; i++){
				printf ("Digite o primeiro n�mero %i: ", i + 1);
			scanf ("%i",&numero[i]);
			
			if (numero[i] < menorNumero){
				menorNumero = numero[i];
				
		  } if (numero[i] > maiorNumero) {
		  	    maiorNumero = numero[i];}
		  }
			
 
		
		 	for (i = 0; i < 5; i++) {
		 		printf ("%i� numero: %.1i\n", i +1, numero[i]);
			 }
			 
			 printf ("\nMaior n�mero: %.1i", maiorNumero);
			  printf ("\nMenor n�mero: %.1i", menorNumero);
			return 0;
			
		}
	
