/*
  @autor: Alane;
  @data: 01/04/2023;
  @nome: 2048;
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main()
{
	
	int n;
	int Vetor[4][4];
	
	std::cin >> n;
	
	while (n--)
	{
		int AuxNone = 0;
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				std::cin >> Vetor[i][j];
				if (Vetor[i][j] == 2048) AuxNone = 1;
			}
		}
		if (AuxNone)
		{
			std::cout << "NONE\n";
			continue;
		}
		int down = 0;
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 3; ++j)
				if ((Vetor[j][i] != 0 && Vetor[j + 1][i] == 0) || (Vetor[j][i] == Vetor[j + 1][i] && Vetor[j][i])) down = 1;
			
			if (down) {break;} 
		}
		int left = 0;
		
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 1 ; j < 4; ++j)
			{
				if ((Vetor[i][j - 1] == 0 && Vetor[i][j] != 0) || (Vetor[i][j - 1] == Vetor[i][j] && Vetor[i][j])) left = 1;
			}
			if (left) {break;} 
		}
		
		int right = 0;
		
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0 ; j < 3; ++j)
			{
				if ((Vetor[i][j + 1] == 0 && Vetor[i][j] != 0) || (Vetor[i][j + 1] == Vetor[i][j] && Vetor[i][j])) right = 1;
			}
			if (right) {break;} 
		}
		
		int up = 0;
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 3; ++j)
				if ((Vetor[j + 1][i] != 0 && Vetor[j][i] == 0) || (Vetor[j][i] == Vetor[j + 1][i] && Vetor[j][i])) up = 1;
			
			if (up) {break;} 
		}
		if (!down && !left && !right && !up) std::cout << "NONE";
		int escreVetori = 0;		
		if (down) std::cout << "DOWN", escreVetori = 1;
		if (left) {if(escreVetori) std::cout << ' '; escreVetori = 1;std::cout << "LEFT"; }
		if (right) {if(escreVetori) std::cout << ' '; escreVetori = 1;std::cout << "RIGHT" ; }
		if (up) {if(escreVetori) std::cout << ' '; escreVetori = 1;std::cout << "UP";}
		std::cout << '\n';
	}
}
