#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Fa�a um programa em C que solicita um valor em metros e por meio de uma fun�ao, retorna o correspondente em cent�metros.*/
		float conversao (float n1) {
		float comutacao;
		comutacao = n1 * 100;
		return comutacao; 
		}
		
	int main () {
	setlocale(LC_ALL, "");	
	float metros, resultado;	
		
	printf ("Digite o n�mero a ser convertido de metros para cent�metros: ");
	scanf ("%f",&metros);
	
	resultado = conversao(metros);
	
	printf ("\nResultado: %.0f cm \n", resultado);
	
	return 0;
	}	
	
