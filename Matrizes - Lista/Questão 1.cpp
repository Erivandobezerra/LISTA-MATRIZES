#include <stdio.h>
#include <locale.h>

#define LIN 3
#define COL 3

int main (){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int m_o[LIN] [COL];
	int m_t[COL] [LIN];
	
	for(int i = 0; i < LIN; i++){ 
		for(int j = 0; j < COL; j++){ 
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &m_o[i][j]);
		}
		printf("\n");	
	}
	
	printf("A sua Matriz Original:\n");
	for(int i = 0; i < LIN; i++){ 
		for(int j = 0; j < COL; j++){ 
			printf("%d \t", m_o[i][j]);
		}	
		printf("\n");
	}

	for(int i = 0; i < COL; i++){ 
		for(int j = 0; j < LIN; j++){ 
			matriz_t[i][j] = m_o[j][i];
		}		
	}
	
	printf("\nSua Matriz Transposta:\n");
	for(int i = 0; i < LIN; i++){ 
		for(int j = 0; j < COL; j++){ 
			printf("%d \t", m_t[i][j]);
		}	
		printf("\n");	
	}
	
	return 0;
}
