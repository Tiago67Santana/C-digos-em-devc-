#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Crie uma fun�ao em linguagem C que receba um n�mero e mostre uma mensagem informando se o n�mero � par ou �mpar*/

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
		 	
		printf ("Digite um n�mero: ");
		scanf ("%i",&numero);
		 	
		 	
		ParOuImpar(numero);
		 	
	}
