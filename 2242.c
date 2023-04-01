/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: Huaauhahhuahau;
*/

#include <stdio.h>
#include <string.h>
int main() {
    
    int i, j;
    char VarPalavra[50];
    int palindromo = 1;

    scanf("%s", VarPalavra);

    int tamanho = strlen(VarPalavra);

    for(i = 0, j = 0; i < tamanho; i++) {
        if(VarPalavra[i] == 'a' || VarPalavra[i] == 'e' || VarPalavra[i] == 'i' || VarPalavra[i] == 'o' || VarPalavra[i] == 'u'){
            VarPalavra[j++] = VarPalavra[i];
        }
    }
    
    VarPalavra[j] = '\0';
    tamanho = strlen(VarPalavra);

        for(i = 0, j = tamanho - 1; i < j; i++, j--) {
            if(VarPalavra[i] != VarPalavra[j]) {
                palindromo = 0;
                break;
                
        }
    }

    if(palindromo){
        printf("S\n");
        return 0;
        
    }else{
        printf("N\n");
        return 0;
    }
