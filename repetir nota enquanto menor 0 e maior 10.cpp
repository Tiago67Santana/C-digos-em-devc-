#include <stdio.h>
		#include <stdlib.h>
		#include <locale.h>
		#include <string.h>
		
		int main () {
			setlocale (LC_ALL, "");
			float primeiraNota, segundaNota, media;
			
		do {
			printf ("Digite sua primeira nota: ");
			scanf ("%f",&primeiraNota);
		} while (primeiraNota < 0 || primeiraNota > 10);
		
		do { 
			printf ("Digite sua segunda nota: ");
			scanf ("%f",&segundaNota);
		} while (segundaNota < 0 || segundaNota > 10);
		
		media = (primeiraNota + segundaNota) / 2;
		
		printf ("Media: %.1f", media);
		
		return 0;
		
	}
			
		
