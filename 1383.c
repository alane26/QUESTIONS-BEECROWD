/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Sudoku;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
  	int Matriz[9][9], Testes[10], i, VarAux1, VarAux2, VarAux3, n, teste = 0;
   
  	scanf("%d",&n);
  
  	for(VarAux3 = 1; VarAux3 <= n; VarAux3++){
    	
    	teste = 0;
    	
    	for(i = 0; i < 9; i++){
      		for(VarAux1 = 0; VarAux1 < 9; VarAux1++)
    			scanf("%d",&Matriz[i][VarAux1]);
    	}
     
	    for(i = 0 ; i < 9 && !teste; i++){
	      	memset(Testes, 0, sizeof(Testes));
	      	for(VarAux1 = 0; VarAux1 < 9 && !teste; VarAux1++){
	    		if(Testes[Matriz[i][VarAux1]])
	      			teste = 1;
	    		else
	      			Testes[Matriz[i][VarAux1]] = 1;
	      	}
	    }
	     
	    for(i = 0; i < 9 && !teste; i++){
	      	memset(Testes, 0, sizeof(Testes));
	      	for(VarAux1 = 0; VarAux1 < 9 && !teste; VarAux1++){
	    		if(Testes[Matriz[VarAux1][i]])
	      			teste = 1;
	    		else
	      			Testes[Matriz[VarAux1][i]] = 1;
	      	}
	    }
	     
	    for(i = 2; i < 9 && !teste; i+=3){
	      	memset(Testes, 0, sizeof(Testes));
	      	for(VarAux1 = i - 2; VarAux1 <= i && !teste; VarAux1++){
	    		for(VarAux2 = i - 2; VarAux2 <= i && !teste; VarAux2++){
	      			if(Testes[Matriz[VarAux1][VarAux2]])
	        			teste = 1;
	      			else
	        			Testes[Matriz[VarAux1][VarAux2]] = 1;
	    		}
	      	}
	    }

	    printf("Instancia %d\n",VarAux3);
	    printf("%s\n\n",(!teste)?"SIM":"NAO");
  	}
  	
  	return 0 ; 
}
