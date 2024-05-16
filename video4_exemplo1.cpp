#include <iostream>

using namespace std;

int main(){
	
	//TIPO NOME;
	//TIPO NOME = VALOR;
	
	int vidas=0;		//Números inteiros;
	char letra='B';		//letras entre aspas;
	double decimal=5.2;	//números decimais;
	float decimal2=5.2;	//decimal com menor precisão;
	bool vivo=true;		//Verdadeiro (1) ou falso (0);
	string nome="Bruno";		//Recebe textos entre aspas;
	
	cout << vidas << "\n";
	cout << letra << "\n";
	cout << decimal << "\n";
	cout << nome << "\n";
	cout << vivo << "\n";
	
	cout << "Digite o número de vidas.";
	cin >> vidas;
	cout << "Digite uma letra:";
	cin >> letra;
	
	return 0;
}
