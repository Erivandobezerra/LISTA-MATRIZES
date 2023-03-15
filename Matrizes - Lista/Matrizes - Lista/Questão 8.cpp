#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int matriz_original[LIN][COL];
	int matriz_identidade[LIN][COL];
	
	printf("\t\t\t\t\tMATRIZ IDENTIDADE\n\n");
	
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
	      		matriz_identidade[i][j] = 1;
			}
		  	else{
		  		matriz_identidade[i][j] = 0;
			}
	    }
	}
	
	printf("\nMatriz Identidade:\n");
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%d\t", matriz_identidade[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
