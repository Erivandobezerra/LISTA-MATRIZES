#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int matriz[LIN][COL]; 
	int determinante, dp = 1, ds = 1; 
	
	printf("\t\t\t\t\tDETERMINANTE DA MATRIZ\n\n");
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(int i = 0; i < LIN; i++) {
	    for(int j = 0; j < COL; j++) {
	      	if(i==j){
	      		dp*= matriz[i][j];
		  	}
		  	if(j==(COL - 1)- i){
		  		ds*= matriz[i][j];
		  	}
	    }
	}
	
	determinante = dp - ds;
  	
  	printf("\n");
   	printf("O determinante dessa matriz é: %d\n", determinante);
   
	return 0;
}
