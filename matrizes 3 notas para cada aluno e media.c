#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main() {
		setlocale(LC_ALL, "");

	char alunos[4][200]; //Vetor para quatro nomes.
	float notas [4][3]; // Matriz com 3 notas para quatro alund
	float soma = 0, media[4];
	int i, j;

			for(i = 0; i < 4; i++) {
	printf("Digite o nome do %iº aluno: ", i+1);
		scanf("%s",&alunos[i]);

			for(j = 0; j < 3; j++) {
	printf("Digite a %iª nota: ", j+1);
		scanf("%f",&notas[i][j]);
	
		soma += notas[i][j];
			
		}

		media[i] = soma / j;
		soma = 0;
		
		printf("\n"); // Somente para pular uma Linha.
	}


	printf("\n --- Exibindo resultados --- \n");
			for(i = 0; i < 4; i++) {
				
		printf("%iº aluno: %s \n", i+1, alunos[1]);
	
			for(j = 0; j < 3; j++) {
		printf("%d nota: %.1f \n", j+1, notas[i][j]);
}
	printf("Media do %iº aluno: %.1f \n", i+1, media[i]);
	printf("\n"); // Somente para pular uma Linha.
}

return 0;


}
