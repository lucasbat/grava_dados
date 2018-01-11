/*

Programa em C++ que grava idades fornecidas pelo usuário em arquivo de texto.

NOTA: ainda tem que corrigir a repetição do primeiro dado na listagem.

*/


#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	int x, y, op;
	char d;
	ofstream gravar;
	ifstream ler;
	do{
		cout<<"\n1 - Cadastro";
		cout<<"\n2 - Listagem \n\n";
		cout<<"\nDigite sua opcao [   ]\b\b\b";
		cin>>op;
		switch(op){
			case 1:
				gravar.open("dados.txt",fstream::app);
					do{
						cout<<"\nQual sua idade? ";cin>>x;
						gravar<<x<<"\n";
						cout<<"\nMais idades <s/n> ? ";cin>>d;
					}while(d=='S' || d=='s');
				gravar.close();
			break;
			case 2:
				ler.open("dados.txt");
				while(ler){
					ler>>y;
					cout<<y<<"\n";
				}
				ler.close();
			break;
			default:
				cout<<"\nOpcao invalida";
			break;
		}
		cout<<"\nVoltar ao menu principal <s/n> ?";cin>>d;
	}while(d=='S' || d=='s');
	cout<<"\n\n";
	return 0;
}
