// 14 de maio de 2024, ter�a feira.
// V�deo 6 - Vari�veis globais e locais, operadores matem�ticos.

#include<iostream>
#include<string>
#include<locale.h>
#include<math.h>

using namespace std;


//Vari�veis globais (fora de uma fun��o):
//Usadas por todo o programa, podem ser acessadas de qualquer lugar.
int n1, n2;

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	//Vari�veis locais (dentro da fun��o main):
	int n3, n4;
	
	//Operadores matem�ticos
	int res1, res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	//res = n1+n2+n3+n4;
	//res = (n1+n2+n3+n4) - 11;
	//res = n1+n2*n4;
	
	res1=n1/n2;
	res2=n1%n2;
	
	//cout << "Soma de todas as vari�veis: " << res << " \n\n";
	//cout << "Soma de todas as vari�veis: " << res << " \n\n";
	
	cout << "Divis�o: " << res1 << "\n";
	cout << "Resto: " << res2 << "\n";
	
	system("pause");
	
	return 0;
}
