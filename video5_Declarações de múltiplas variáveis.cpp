// 14 de maio de 2024, ter�a feira.
// V�deo 5 - Declara��es m�ltiplas de vari�veis conntantes.
// # Define

#include<iostream>
#include<string>
#include<locale.h>
#include<math.h>

using namespace std;

//Diretiva #define (constante);

#define pi 3.1415
#define canal cout << "Canal Fessor Bruno\n\n";

int main(){
	
		setlocale(LC_ALL, "Portuguese_Brazil");
	
	//Declara��es m�ltiplas.
	//Decladas de forma individual.
	/*int vidas;
	int tiros;
	int life;

	//As formas abaixo deram certo, mas n�o podem ser compiladas junto com o exemplo acima,
	// ou seja, cada exemplo deve ser compilado separadamente.
	//int vidas; int tiros; int life;
	
	//Usando uma linha para declarar as vari�veis;
	//int vidas, tiros, life;*/
	
	//Declarando e inicializando com um valor.
	int vidas=3, tiros=500, life=100;
	
	//Exibindo a diretiva (saida diferente da mostrada no v�deo.):
	cout << pi << "\n"; 
	cout << "\n";
	canal;
	
	//system("pause");
	return 0;
}
