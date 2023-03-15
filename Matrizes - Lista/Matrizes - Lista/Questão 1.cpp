#include <stdio.h>
#include <locale.h>

#define LIN 3
#define COL 3

int main (){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int matriz_original[LIN] [COL];
	int matriz_t[COL] [LIN];
	
	printf("\t\t\t\t\tMATRIZ TRANSPOSTA\n\n");
	
	for(int i = 0; i < LIN; i++){ 
		for(int j = 0; j < COL; j++){ 
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &matriz_original[i][j]);
		}
		printf("\n");	
	}
	
	printf("Matriz Original:\n");
	for(int i = 0; i < LIN; i++){ 
		for(int j = 0; j < COL; j++){ 
			printf("%d \t", matriz_original[i][j]);
		}	
		printf("\n");
	}

	for(int i = 0; i < COL; i++){ 
		for(int j = 0; j < LIN; j++){ 
			matriz_t[i][j] = matriz_original[j][i];
		}		
	}
	
	printf("\nMatriz Transposta:\n");
	for(int i = 0; i < LIN; i++){ 
		for(int j = 0; j < COL; j++){ 
			printf("%d \t", matriz_t[i][j]);
		}	
		printf("\n");	
	}
	
	return 0;
}
