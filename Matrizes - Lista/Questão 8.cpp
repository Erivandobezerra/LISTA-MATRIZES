//Revisar matemática básica antes da prova.



#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int m_o[LIN][COL];
	int m_i[LIN][COL];
	
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
	      		m_i[i][j] = 1;
			}
		  	else{
		  		m_i[i][j] = 0;
			}
	    }
	}
	
	printf("\nSua matriz Identidade:\n");
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%d\t", m_i[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
