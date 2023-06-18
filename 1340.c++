/*
  @autor: Alane;
  @data: 18/06/2023;
  @nome: Eu Posso Adivinhar a Estrutura de Dados!;
*/

#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, queryType, value;
    bool isPriorityQueue, isQueue, isStack;

    // Loop principal para processar os casos de teste
    while (scanf("%d", &n) != EOF)
    {
        // Inicialização das estruturas de dados e variáveis
        priority_queue<int> priorityQ;  // Fila de prioridade
        queue<int> queueQ;              // Fila
        stack<int> stackQ;              // Pilha
        isPriorityQueue = true;         // Indica se é uma fila de prioridade válida
        isQueue = true;                 // Indica se é uma fila válida
        isStack = true;                 // Indica se é uma pilha válida

        // Processamento das consultas
        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &queryType, &value);

            // Consulta de tipo 1: inserção de elemento nas estruturas de dados
            if (queryType == 1)
            {
                priorityQ.push(value);  // Inserção na fila de prioridade
                queueQ.push(value);     // Inserção na fila
                stackQ.push(value);     // Inserção na pilha
            }
            // Consulta de tipo 2: remoção de elemento e verificação de consistência
            else
            {
                // Verifica se a fila de prioridade está correta
                if (priorityQ.top() != value)
                    isPriorityQueue = false;
                // Verifica se a fila está correta
                if (queueQ.front() != value)
                    isQueue = false;
                // Verifica se a pilha está correta
                if (stackQ.top() != value)
                    isStack = false;

                // Remoção dos elementos das estruturas de dados
                priorityQ.pop();  // Remoção da fila de prioridade
                queueQ.pop();     // Remoção da fila
                stackQ.pop();     // Remoção da pilha
            }
        }

        // Verificação do tipo de estrutura de dados válida
        if ((isPriorityQueue && isQueue && isStack) || (!isPriorityQueue && isQueue && isStack) || (isPriorityQueue && !isQueue && isStack) || (isPriorityQueue && isQueue && !isStack))
            printf("not sure\n");  // Não é possível determinar com certeza o tipo de estrutura
        else if (isPriorityQueue && !isQueue && !isStack)
            printf("priority queue\n");  // É uma fila de prioridade válida
        else if (!isPriorityQueue && isQueue && !isStack)
            printf("queue\n");  // É uma fila válida
        else if (!isPriorityQueue && !isQueue && isStack)
            printf("stack\n");  // É uma pilha válida
        else
            printf("impossible\n");  // Não é possível formar uma estrutura válida
    }

    return 0;
}
