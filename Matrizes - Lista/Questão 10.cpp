#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int matriz_original[LIN][COL];
	int matriz_reflexao[LIN][COL];
	
	printf("\t\t\t\t\tMATRIZ REFLEXÃO\n\n");
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &matriz_original[i][j]);
		}
	}
	
	printf("\nMatriz Original:\n");
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++){
	    	printf("%d\t", matriz_original[i][j]);
		}
		printf("\n");
	}
		
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++) {
	    	if(j == 0) {
	    		matriz_reflexao[i][j] = -matriz_original[i][j];	
			} else {
				matriz_reflexao[i][j] = matriz_original[i][j];
			}
	    }
	}
	
	printf("\nMatriz reflexão ao eixo y:\n");
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%d\t", matriz_reflexao[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
