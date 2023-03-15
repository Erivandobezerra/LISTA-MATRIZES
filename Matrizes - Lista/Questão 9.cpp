#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int matriz_original[LIN][COL];
	int ib = 0, jb =  0;
	int R[LIN][COL];

	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &matriz_original[i][j]);
		}
	}
	
	printf("\nMatriz Original:\n");
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%d\t", matriz_original[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\nMatriz na rotação 90 graus:\n");
	for(int j = 0; j < COL; j++){
		jb = 0;
		for(int i = LIN - 1; i >= 0; i--){
			R[ib][jb] = matriz_original[i][j];
			printf("%d \t", matriz_original[i][j]);	
			jb++;
		}
		printf("\n");
		ib++;
	}
	
	return 0;
}
