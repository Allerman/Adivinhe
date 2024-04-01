#include<iostream>
using namespace std;

int main(){    
	cout << "*********************" << endl;
	cout << "Bem vindo ao jooginho" << endl;
	cout << "*********************" << endl;

	int nSecreto = 42;
	int chute;	
	
	cout << "Qual seu chute?" << endl;
	cin >> chute;
	
	cout << "Voce tem certeza que o valor é " << chute << "?" <<endl;
 	
	if(chute == nSecreto){	
	cout << "Voce acertou secreto é " << nSecreto << ". nao conte a ninguém" << endl;	
	}
	else if(chute > nSecreto){
	cout << "Chutou auto, tente mais baixo" << endl;
	}
	else if(chute < nSecreto){
	cout << "Chutou baixo, tente mais auto" << endl;
	}
	
}
