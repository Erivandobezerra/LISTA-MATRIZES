//Revisar durante recesso: Muita dificuldade.


#include <stdio.h>
#include <locale.h>

#define LIN 3
#define COL 3

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int m_o[LIN][COL];
	int m_d[LIN][COL];
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &m_o[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSua Matriz Original:\n");
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++){
	    	printf("%d\t", m_o[i][j]);
		}
		printf("\n");
	}
		
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++) {
	    	if(i==j){
	      		m_d[i][j] = m_o[i][j];
			}
		  	else{
		  		m_d[i][j] = 0;
			}
	    }
	}
	
	printf("\nSua Matriz Diagonal:\n");
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%d\t", m_d[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
