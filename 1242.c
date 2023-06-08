/*
  @autor: Alane;
  @data: 08/06/2023;
  @nome: Ácido Ribonucleico Alienígena;
*/

#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <stack>


using namespace std;

int main()
{
    string rna;  // Variável para armazenar a sequência de bases do RNAA
    
    while (cin >> rna)
    {
        string complement;  // Variável para armazenar a sequência complementar
        
        int pairs = 0;  // Variável para contar o número de pares de bases
        stack<char> baseStack;  // Pilha para verificar as ligações entre as bases
        
        // Gera a sequência complementar
        for (int i = 0; i < rna.size(); i++)
        {
            if (rna[i] == 'S')
                complement += 'B';
            else if (rna[i] == 'B')
                complement += 'S';
            else if (rna[i] == 'C')
                complement += 'F';
            else if (rna[i] == 'F')
                complement += 'C';
        }
        
        // Verifica as ligações entre as bases
        for (int i = 0; i < rna.size(); i++)
        {
            if (baseStack.empty() || baseStack.top() != complement[i])
            {
                baseStack.push(rna[i]);
            }
            else
            {
                while (true)
                {
                    if (baseStack.empty())
                    {
                        i--;
                        break;
                    }
                    else if (complement[i] == baseStack.top())
                    {
                        pairs++;
                        baseStack.pop();
                        i++;
                    }
                    else
                    {
                        i--;
                        break;
                    }
                    
                    if (i >= complement.size())
                    {
                        i--;
                        break;
                    }
                }
            }
        }
        
        printf("%d\n", pairs);  // Imprime o número total de ligações realizadas
    }
    
    return 0;
}
