// 14 de maio de 2024, terça feira.
// Vídeo 7 - Incremento e Decremento de variáveis, Operadores pos e pré-fixados.

#include<iostream>
#include<string>
#include<locale.h>
#include<math.h>

using namespace std;

int main(){
	
		setlocale(LC_ALL, "Portuguese_Brazil");
		
		int n1, n2;
		
		
		cout << "\n";
		
		//n1=1; 
		//n2=10;
		
		//Incremento
		cout << n1 << "\n\n";
		//n1 = n1 + 1;
		//Forma contraida:
		//n1+=1;
		//Adicionando 1 ao valor de uma variável:
		//n1++;
		
		//Decremento
		//n1-=1;
		//n1--;
		
		//Pós incremento
		//n1++ Usa o valor e depois incrementa
		//n1--

		//Pré incremento
		//++n1 Incrementa e depois usa o valor da variável;
		//--n1;
		
		//int n1=10;
		
		
		cout  << n1 << "\n\n";
		
		system("pause");
		
		return 0;
}

