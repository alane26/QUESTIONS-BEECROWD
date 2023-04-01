/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Iu-Di-Oh;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int VetorMatriz[100][100],VetorLinha[100][100];
    int VarAux1,e,VarAux2;
    int a, c, d, f, i;

    while(scanf("%d",&f) != EOF){

        scanf("%d%d", &VarAux1, &c);
        for(i = 0; i < VarAux1; i++){
            for(VarAux2 = 0; VarAux2 < f; VarAux2++){
                scanf("%d", &VetorMatriz[i][VarAux2]);
            }
        }
        for(i = 0; i < c; i++){
            for(VarAux2 = 0; VarAux2 < f; VarAux2++){
                scanf("%d", &VetorLinha[i][VarAux2]);
            }
        }
        scanf("%d%d", &d, &e);
        scanf("%d", &a);
        if(VetorMatriz[d-1][a-1] > VetorLinha[e-1][a-1]){
            printf("Marcos\n");
        }else if(VetorMatriz[d-1][a-1] < VetorLinha[e-1][a-1]){
            printf("Leonardo\n");
        }else{
            printf("Empate\n");
        }
    }

    return 0;
}
