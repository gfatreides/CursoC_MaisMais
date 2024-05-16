// 14 de maio de 2024, terça feira.
// Vídeo 5 - Declarações múltiplas de variáveis conntantes.
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
	
	//Declarações múltiplas.
	//Decladas de forma individual.
	/*int vidas;
	int tiros;
	int life;

	//As formas abaixo deram certo, mas não podem ser compiladas junto com o exemplo acima,
	// ou seja, cada exemplo deve ser compilado separadamente.
	//int vidas; int tiros; int life;
	
	//Usando uma linha para declarar as variáveis;
	//int vidas, tiros, life;*/
	
	//Declarando e inicializando com um valor.
	int vidas=3, tiros=500, life=100;
	
	//Exibindo a diretiva (saida diferente da mostrada no vídeo.):
	cout << pi << "\n"; 
	cout << "\n";
	canal;
	
	//system("pause");
	return 0;
}
