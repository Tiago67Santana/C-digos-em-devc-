		#include <stdio.h>
		#include <stdlib.h>
		#include <locale.h>
		#include <string.h>
		
		int main () {
			setlocale (LC_ALL, "");
			int i;
			float nota, soma = 0, media;
			
			
			for (i = 1; i <= 3; i++) {
				printf ("Digite %iª nota: ", i);
				scanf ("%f",&nota);
				
				soma += nota;

			}
			
			media = soma / 3;
			
			printf ("A media das notas é: %.2f\n", media);
			
			 if (media >= 7) {
    		printf ("Aprovado!");}
    		
			 if (media <= 4)  {
			printf ("Reprovado!");}
			
			if (media > 4 && media < 7) {
			printf ("Recuperaçao");}
						
			return 0;
			
		}
