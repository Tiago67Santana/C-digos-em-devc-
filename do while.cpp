		#include <stdio.h>
		#include <stdlib.h>
		#include <locale.h>
		#include <string.h>
		
		
			int main() {
				
				float nota;
				
				do {
				
				printf ("Digite sua nota: ");
				scanf ("%f",&nota);
				
			} while (nota < 0 || nota > 10);
			
			return 0;
			
		}
