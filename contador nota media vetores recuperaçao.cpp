#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

		int main() {
			
			float media, notas [4], soma = 0;
			int i, contador;
			
			printf ("Digite a iª nota: \n");
			
			for (i = 0; i < 4; i++){
				printf ("Notas %i: ", i + 1);
			scanf ("%f",&notas[i]);
	
			soma += notas[i];
		}
		
		for (i = 0; i < 4; i++) {
			printf ("Notas %i: %.1f \n", i+1, notas[i]);
			}  	
			
			media = soma / i;
			
			printf ("Media: %.1f \n", media);
			
			 if (media >= 7) {
    		printf ("Aprovado!");}
    		
			 if (media <= 4)  {
			printf ("Reprovado!");}
			
			if (media > 4 && media < 7) {
			printf ("Recuperaçao");}
		
		return 0;
		
	}
		

