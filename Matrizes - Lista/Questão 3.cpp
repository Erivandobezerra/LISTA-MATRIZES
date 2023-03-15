#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float matriz_original[LIN][COL];
	float matriz_inversa[LIN][COL];
	float determinante, dp = 1, ds = 1, aux;
	
	printf("\t\t\t\t\tMATRIZ INVERSA\n\n");
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%f", &matriz_original[i][j]);
		}
	}
	
	printf("\nMatriz Original:\n"); 
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++){
	    	printf("%.2f\t", matriz_original[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++) {
	      	if(i==j){
	      		dp*= matriz_original[i][j];
		 	}
		  	if(j==(COL - 1)- i){
		  		ds*= matriz_original[i][j];
			}
	    }
	}
	
	determinante = dp - ds; 

  	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++) {
	  		matriz_inversa[i][j] = matriz_original[i][j]/determinante;	
		}
	}
	
	for(int i = 0; i < LIN; i++) {
	    for (int j = 0; j < COL; j++) {
		  	if(j==(COL - 1) - i){
		  		matriz_inversa[i][j] = -matriz_inversa[i][j];
		  	}
	    }
	}
	
	aux = matriz_inversa[0][0];
	matriz_inversa[0][0] = matriz_inversa[1][1];
	matriz_inversa[1][1] = aux;

	printf("\nMatriz Inversa:\n");
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++){
	    	printf("%.2f\t", matriz_inversa[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
