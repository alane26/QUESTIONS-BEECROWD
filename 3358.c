/*
  @autor: Alane;
  @data: 04/04/2023;
  @nome: Sobrenome Não é Fácil;
*/

#include <stdio.h>
#define tam_vet 42

int main() {
 
    char nome [tam_vet];
    int dificil = 0, t, n;
        scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", nome);
    
    t = strlen (nome);
    for(int i = 0; i < (t - 2); i++)
    {
      if(((nome[i] != 'a') && (nome[i] != 'A')) && ((nome[i] != 'e') && (nome[i] != 'E')) && ((nome[i] != 'i') && (nome[i] != 'I')) && ((nome[i] != 'o') && (nome[i] != 'O')) && (( nome[i] != 'u') && (nome[i] != 'U')))
        {
            if(((nome[i+1] != 'a') && (nome[i] != 'A')) && ((nome[i+1] != 'e') && (nome[i+1] != 'E')) && ((nome[i+1] != 'i') && (nome[i+1] != 'I')) && ((nome[i+1] != 'o') && ( nome[i+1] != 'O' )) && (( nome[i+1] != 'u') && ( nome[i+1] != 'U')))
            {
                if(((nome[i+2] != 'a') && (nome[i+2] != 'A')) && ((nome[i+2] != 'e') && (nome[i+2] != 'E')) && ((nome[i+2] != 'i') && (nome[i+2] != 'I')) && ((nome[i+2] != 'o') && (nome[i+2] != 'O')) && ((nome[i+2] != 'u') && (nome[i+2] != 'U')))
                {
                    dificil++;
                }
            }

        }
    }
if(dificil == 0){
printf("%s eh facil\n", nome);
}else{
printf("%s nao eh facil\n", nome);

} dificil = 0;
}
 return 0;
}
