#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>  

	int main () {
			setlocale (LC_ALL, "");
			
			float nota, media, soma = 0;
			int i;
			
			for (i = 1; i <= 3; i++) {
				printf ("Digite %iª nota: ", i);
				scanf ("%f",&nota); 
				
				 
					
			while (nota < 0 || nota > 10){
				printf ("Digite a %iª nota: ", i);	
				scanf ("%f",&nota); }
				
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
