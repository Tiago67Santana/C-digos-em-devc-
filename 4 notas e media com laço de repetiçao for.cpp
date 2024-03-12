#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

		int main () {
			setlocale (LC_ALL, "");
			int i;
			float nota, soma = 0, media;
			
			
			for (i = 1; i <= 4; i++) {
				printf ("Digite %iª nota: ", i);
				scanf ("%f",&nota);
				
				soma += nota;

			}
			
			media = soma / 4;
			
			printf ("A media das notas é: %.2f\n", media);
			
			return 0;
			
		}
