//Revisar a matemática. Problema de base.



#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int m_o[LIN][COL];
	int m_c[LIN][COL];
	int aux;
	
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
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
	  		m_c[i][j] = m_o[i][j];	
		}
	}
	
	for(int i = 0; i < LIN; i++) {
	    for (int j = 0; j < COL; j++) {
		  	if(j==(COL - 1)- i){
		  		m_c[i][j] = -m_c[i][j];
		  	}
	    }
	}
	
	
	//Revisar essa parte para a prova: Dúvidas no cálculo matemático.
	
	aux = m_c[0][0];
	m_c[0][0] = m_c[1][1];
	m_c[1][1] = aux;
	
	aux = m_c[0][1];
	m_c[0][1] = m_c[1][0];
	m_c[1][0] = aux;

	printf("\nMatriz Cofatora:\n");
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++){
	    	printf("%d\t", m_c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
