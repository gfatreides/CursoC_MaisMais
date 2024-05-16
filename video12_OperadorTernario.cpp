// 16 de maio de 2024, terça feira.
// Vídeo 12 - Operador Ternário.

#include<iostream>
#include<string>
#include<locale.h>
#include<math.h>

using namespace std;

int main(){
	
		setlocale(LC_ALL, "Portuguese_Brazil");
		
		//Operador ternário: IF mais simples.
		//Operações simples.
		//Necessita de uma expressão.
		//É mais restrito.
		
		//(expressão: teste lógico)? valor1 : valor2
	
	/*	
		int 	n1, n2, nota;
		string 	res;
		
		cout << "Digite a primeira nota: ";
		cin >> n1;
		
		cout << "Digite a segunda nota: ";
		cin >> n2;
		
		nota = n1 + n2;
		
		// >= 60: aprovado;
		// < 60: reprovado;
		
		
		//(nota >= 60) ? res = "Aprovado." : res = "Reprovado";
		cout << "\n";
		
		res = (nota >= 60) ? "Aprovado" : "Reprovado";
		cout << "Situação do aluno: " << res << "\n";
		*/
		
		int n1, x;
		
		x = 5;
		
		cout << "Digite um valor: ";
		cin >> n1;
		
		 (n1 >= 10)? x++ : x--;
		 
		 cout << "\n Novo valor de x: " << x << "\n";
		
		
		system("pause");
		
		return 0;
}

