#include <stdio.h>
#include <locale.h>

#define LIN 3
#define COL 3

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int matriz_original[LIN][COL];
	int matriz_diagonal[LIN][COL];
	
	printf("\t\t\t\t\tMATRIZ DIAGONAL\n\n");
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &matriz_original[i][j]);
		}
		printf("\n");
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
	    	if(i==j){
	      		matriz_diagonal[i][j] = matriz_original[i][j];
			}
		  	else{
		  		matriz_diagonal[i][j] = 0;
			}
	    }
	}
	
	printf("\nMatriz Diagonal:\n");
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%d\t", matriz_diagonal[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
