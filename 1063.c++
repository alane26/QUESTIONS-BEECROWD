/*
  @autor: Alane;
  @data: 08/06/2023;
  @nome: Trilhos Novamente... Traçando Movimentos;
*/

#include <stdio.h>
#include <stack>

int main(){
    int size, i, j;
    char line[2000];
    char input[1000], output[1000];
    std::stack<char> stack;

    while(scanf("%d", &size) && size){
        for (i = 0; i < size; i++) 
            scanf(" %c", &input[i]);
        
        for (i = 0; i < size; i++) 
            scanf(" %c", &output[i]);
        
        input[size] = output[size] = '\0';
        i = j = 0;
        
        while(1){
            if(!stack.empty() && j < size && stack.top() == output[j]){
                stack.pop();
                printf("R");
                j++;
            }
            else if(i < size){
                stack.push(input[i]);
                printf("I");
                i++;
            }
            else
                break;
        }
        
        if(stack.empty())
            printf("\n");
        else
            printf(" Impossible\n");
        
        while (!stack.empty()){
            stack.pop();
        }
    }
    return 0;
}
