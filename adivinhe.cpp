#include<iostream>
#include <limits>
using namespace std;

int main(){    
	cout << "*********************" << endl;
	cout << "Bem vindo ao jooginho" << endl;
	cout << "Adivinhe o numero" << endl;
	cout << "*********************" << endl;

	int nSecreto = 42;
	int chute;	

while(true){
	cout << "Qual seu chute?" << endl;
	cin >> chute;

	if(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	 	cout << "Erro: Digite apenas números inteiros." << endl;
    } 
	else {
    	break;
    }
}
	//cout << "Voce tem certeza que o valor é " << chute << "?" <<endl;
 	
	if(chute == nSecreto){	
	cout << "Voce acertou secreto é " << nSecreto << ". Nao conte a ninguém!" << endl;	
	}
	else if(chute > nSecreto){
	cout << "Chutou auto, tente mais baixo" << endl;
	}
	else if(chute < nSecreto){
	cout << "Chutou baixo, tente mais auto" << endl;
	}
	
	return 0;
}
