// 15 de maio de 2024, terça feira.
// Vídeo 11 - Operadores AND, OR, NOT.

#include<iostream>
#include<string>
#include<locale.h>
#include<math.h>

using namespace std;

int main(){
	
		setlocale(LC_ALL, "Portuguese_Brazil");
		
		int num;
		
		/*1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20*/
		
		num = 12;
		// Operador END:
		if(num > 4 and num < 7){
			cout << "\n\n Valor aceito.\n";
		}
		else{
			cout << "\n\n Valor não aceito.\n";
		}
		//-----------------------------------------
		//Operador OR:
		if(num < 3 || num > 8){
			cout << "\n\n Valor aceito.\n";
		}
		else{
			cout << "\n\n Valor não aceito.\n";
		}
		//-----------------------------------------
		//Operador OR:
		if(num < 3 || num > 8){
			cout << "\n\n Valor aceito.\n";
		}
		else{
			cout << "\n\n Valor não aceito.\n";
		}
		
		if( (num >=3 and num <= 6) || (num > 9 and num < 15) || (num > 15 and num < 20)){
			cout << "\n\n Valor aceito.\n";
		}
		else{
			cout << "\n\n Valor não aceito.\n";
		}
		
		//-----------------------------------------	
		//Operador NOT
		
		int nr;
		
		//1 = verdadeiro;
		//0 = falso
		
		nr = 1;
		if(nr){
			cout << "\n\n Vou ao clube.\n";
		}else{
			cout << "\n\n Vou ao cinema.\n";
		}
		
		system("pause");
		
		return 0;
}
