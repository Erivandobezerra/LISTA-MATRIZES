#include <stdio.h>
#include <locale.h>

#define A_LIN 2
#define A_COL 2

#define B_LIN 2
#define B_COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int m_A[A_LIN] [A_COL], m_B[B_LIN] [B_COL];
	int mul[A_LIN] [B_COL];
	
	
	
	printf("Digite os valores da matriz A:\n\n");
	for(int i = 0; i < A_LIN; i++){ 
		for(int j = 0; j < A_COL; j++){ 
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &m_A[i][j]);
		}	
	}
	
	printf("\nDigite os valores da matriz B:\n\n");
	for(int i = 0; i < B_LIN; i++){ 
		for(int j = 0; j < B_COL; j++){ 
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &m_B[i][j]);
		}
	}
	
	printf("\n Os valores da matriz A são:\n");
	for(int i = 0; i < A_LIN; i++){ 
		for(int j = 0; j < A_COL; j++){ 
			printf("%d \t", m_A[i][j]);
		}
		printf("\n");	
	}
	
	printf("\nOs valores da matriz B são:\n");
	for(int i = 0; i < B_LIN; i++){ 
		for(int j = 0; j < B_COL; j++){ 
			printf("%d \t", m_B[i][j]);
		}
		printf("\n");	
	}
		
	for(int i = 0; i < A_LIN; i++){
		for(int j = 0; j < B_COL; j++){
			mul[i][j] = 0;
			for(int c = 0; c < A_COL; c++){
				mul[i][j] += m_A[i][c] * m_B[c][j];				
			}
		}
	}
	
	printf("\nResultado da multiplicação:\n");
	for(int i=0; i < A_LIN; i++){
		for(int j=0; j < B_COL; j++){
			printf("%d\t", mul[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}
