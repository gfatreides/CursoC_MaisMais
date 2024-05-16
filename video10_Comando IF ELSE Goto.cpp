// 15 de maio de 2024, quarta-feira.
// Vídeo 10. Comando de decisão IF ELSE e comando Goto

#include<iostream>
#include<string>
#include<locale.h>
#include<math.h>

using namespace std;

int main(){
	
		setlocale(LC_ALL, "Portuguese_Brazil");
		
		cout << endl;
		
		int n1, n2, res;
		char opc;
		
		//Criando um label associado ao go to:
		inicio:
		
		cout << "\n Digite o valor da nota 1: ";
		cin >> n1;
		
		cout << "\n Digite o valor da nota 2: ";
		cin >> n2;
		
		res = n1 + n2;
		
		/*
		Notas >= 60: aluno aprovado;
		>= 40 e < 59: aluno em recuperação;
		< 40: aluno reprovado
		*/
		
		//Limpando a tela.
		system("cls");
		
		if(res >= 60){
			cout << "\n Aluno aprovado.\n";
		}else if(res >= 40){ 
			cout << "\n Aluno em recuperação.\n";
		}else(
			cout << "\n Aluno reprovado"
		);
		
		
		cout << "\n Deseja digitar outras notas: (s/n)";
		cin >> opc;
		
		if(opc == 's' or opc == 'S'){
			goto inicio;
		}
		
		cout << "\n";
		
		system("pause");
		
		return 0;
	}
