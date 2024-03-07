#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Faça um programa em C que solicita um valor em metros e por meio de uma funçao, retorna o correspondente em centímetros.*/
		float conversao (float n1) {
		float comutacao;
		comutacao = n1 * 100;
		return comutacao; 
		}
		
	int main () {
	setlocale(LC_ALL, "");	
	float metros, resultado;	
		
	printf ("Digite o número a ser convertido de metros para centímetros: ");
	scanf ("%f",&metros);
	
	resultado = conversao(metros);
	
	printf ("\nResultado: %.0f cm \n", resultado);
	
	return 0;
	}	
	
