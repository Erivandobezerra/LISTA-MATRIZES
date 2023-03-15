#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int m_o[LIN][COL];
	int m_r[LIN][COL];
	
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite a posição [%d][%d]: ", i, j);
			scanf("%d", &m_o[i][j]);
		}
	}
	
	printf("\nMatriz Original:\n");
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++){
	    	printf("%d\t", m_o[i][j]);
		}
		printf("\n");
	}
		
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++) {
	    	if(j == 0) {
	    		m_r[i][j] = -m_o[i][j];	
			} else {
				m_r[i][j] = m_o[i][j];
			}
	    }
	}
	
	printf("\nA Matriz reflexão ao eixo y é:\n");
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%d\t", m_r[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
