#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main() {
		setlocale(LC_ALL, "");

	char disciplinas [3][200]; //Vetor para quatro nomes.
	float notas [3][2]; // Matriz com 3 notas para quatro alund
	float soma = 0, media[3];
	int i, j;

			for(i = 0; i < 3; i++) {
	printf("Digite o nome da %iª disciplina: ", i+1);
		scanf("%s",&disciplinas[i]);

			for(j = 0; j < 2; j++) {
	printf("Digite a %iª nota: ", j+1);
		scanf("%f",&notas[i][j]);
	
		soma += notas[i][j];
			
		}

		media[i] = soma / j;
		soma = 0;
		
		printf("\n"); // Somente para pular uma Linha.
	}


	printf("\n --- Exibindo resultados --- \n");
			for(i = 0; i < 3; i++) {
				
		printf("%iª dsiciplina: %s \n", i+1, disciplinas[1]);
	
			for(j = 0; j < 2; j++) {
		printf("%d nota: %.1f \n", j+1, notas[i][j]);
}
	printf("Media na %iª disciplina: %.1f \n", i+1, media[i]);
	printf("\n"); // Somente para pular uma Linha.
}

return 0;


}
