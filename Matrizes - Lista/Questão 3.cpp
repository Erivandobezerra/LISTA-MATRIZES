#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float m_o[LIN][COL];
	
	float m_i[LIN][COL];
	
	float det, dp = 1, ds = 1, aux;
	
	
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%f", &m_o[i][j]);
		}
	}
	
	printf("\nMatriz Original:\n"); 
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++){
	    	printf("%.2f\t", m_o[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++) {
	      	if(i==j){
	      		dp*= m_o[i][j];
		 	}
		  	if(j==(COL - 1)- i){
		  		ds*= m_o[i][j];
			}
	    }
	}
	
	det = dp - ds; 

  	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++) {
	  		m_i[i][j] = m_o[i][j]/det;	
		}
	}
	
	for(int i = 0; i < LIN; i++) {
	    for (int j = 0; j < COL; j++) {
		  	if(j==(COL - 1) - i){
		  		m_i[i][j] = -m_i[i][j];
		  	}
	    }
	}
	
	aux = m_i[0][0];
	m_i[0][0] = m_i[1][1];
	m_i[1][1] = aux;

	printf("\nMatriz Inversa:\n");
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++){
	    	printf("%.2f\t", m_i[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
