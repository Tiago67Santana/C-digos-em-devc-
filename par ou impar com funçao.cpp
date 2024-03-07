#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Crie uma funçao em linguagem C que receba um número e mostre uma mensagem informando se o número é par ou ímpar*/

    void ParOuImpar (int numero) {

         if (numero % 2 == 0) {
              printf ("Par.");
		} else {
		 	  printf ("Impar.");
	  }
	}
		 
	int main () {
		setlocale (LC_ALL, "");
		int numero;
		 	
		printf ("Digite um número: ");
		scanf ("%i",&numero);
		 	
		 	
		ParOuImpar(numero);
		 	
	}
