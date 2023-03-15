#include <stdio.h>
#include <locale.h>

#define A_LIN 2
#define A_COL 2
#define B_LIN 2
#define B_COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int matriz_A[A_LIN] [A_COL], matriz_B[B_LIN] [B_COL];
	int multi[A_LIN] [B_COL];
	
	printf("\t\t\t\t\tMULTIPLICAÇÃO DE MATRIZES\n\n");
	
	printf("Digite os valores da matriz A:\n\n");
	for(int i = 0; i < A_LIN; i++){ 
		for(int j = 0; j < A_COL; j++){ 
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &matriz_A[i][j]);
		}	
	}
	
	printf("\nDigite os valores da matriz B:\n\n");
	for(int i = 0; i < B_LIN; i++){ 
		for(int j = 0; j < B_COL; j++){ 
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &matriz_B[i][j]);
		}
	}
	
	printf("\nValores da matriz A:\n");
	for(int i = 0; i < A_LIN; i++){ 
		for(int j = 0; j < A_COL; j++){ 
			printf("%d \t", matriz_A[i][j]);
		}
		printf("\n");	
	}
	
	printf("\nValores da matriz B:\n");
	for(int i = 0; i < B_LIN; i++){ 
		for(int j = 0; j < B_COL; j++){ 
			printf("%d \t", matriz_B[i][j]);
		}
		printf("\n");	
	}
		
	for(int i = 0; i < A_LIN; i++){
		for(int j = 0; j < B_COL; j++){
			multi[i][j] = 0;
			for(int c = 0; c < A_COL; c++){
				multi[i][j] += matriz_A[i][c] * matriz_B[c][j];				
			}
		}
	}
	
	printf("\nResultado da multiplicação das matrizes:\n");
	for(int i=0; i < A_LIN; i++){
		for(int j=0; j < B_COL; j++){
			printf("%d\t", multi[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}
