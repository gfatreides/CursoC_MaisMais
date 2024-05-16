// 14 de maio de 2024, terça feira.
// Vídeo 8 - Inversão de variáveis.

#include<iostream>
#include<string>
#include<locale.h>
#include<math.h>

using namespace std;

int main(){
	
		setlocale(LC_ALL, "Portuguese_Brazil");
		
		int num = 10;
		
		cout << num << "\n\n";
		
		//Invertendo o valor da variável.
		//Método tradicional
		
		//num = num * -1;
		cout << num << "\n\n";
		
		//Não grava o valor na variável
		cout << -num << "\n\n";
		
		//Maneira simplificada
		num-=10;  //Subtrai
		//Inverte
		num=-num;
		
		system("pause");
		
		return 0;
	}
