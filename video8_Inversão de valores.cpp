// 14 de maio de 2024, ter�a feira.
// V�deo 8 - Invers�o de vari�veis.

#include<iostream>
#include<string>
#include<locale.h>
#include<math.h>

using namespace std;

int main(){
	
		setlocale(LC_ALL, "Portuguese_Brazil");
		
		int num = 10;
		
		cout << num << "\n\n";
		
		//Invertendo o valor da vari�vel.
		//M�todo tradicional
		
		//num = num * -1;
		cout << num << "\n\n";
		
		//N�o grava o valor na vari�vel
		cout << -num << "\n\n";
		
		//Maneira simplificada
		num-=10;  //Subtrai
		//Inverte
		num=-num;
		
		system("pause");
		
		return 0;
	}
