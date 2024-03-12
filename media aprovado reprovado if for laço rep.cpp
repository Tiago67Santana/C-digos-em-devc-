		#include <stdio.h>
		#include <stdlib.h>
		#include <locale.h>
		#include <string.h>
		
		int main () {
			setlocale (LC_ALL, "");
			
			float primeiraNota, segundaNota, terceiraNota, media;
			
			
			do {
				printf ("Digite sua primeira nota: ");
				scanf ("%f",&primeiraNota);
			} while (primeiraNota < 0 || primeiraNota > 10);
			
			do {
				printf ("Digite sua segunda nota: ");
				scanf ("%f",&segundaNota);
			} while (segundaNota < 0 || segundaNota > 10);
			
			do {
				printf ("Digite sua terceira nota: ");
				scanf ("%f",&terceiraNota);
			} while (terceiraNota < 0 || terceiraNota > 10);
			
			media = (primeiraNota + segundaNota + terceiraNota) / 3;
			
			printf ("Media: %.1f", media);
			
			 if (media >= 7) {
    		printf ("Aprovado!");}
    		
			 if (media <= 4)  {
			printf ("Reprovado!");}
			
			if (media > 4 && media < 7) {
			printf ("Recuperaçao");}
			
			return 0;
			
		}
			
			
