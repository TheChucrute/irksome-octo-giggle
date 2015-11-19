//leandro-ie@hotmail.com;lucascherutti@gmail.com;octavio.carpes10@gmail.com
#include<iostream>
#include<fstream>
#include<list>
#include "banco.h"
using namespace std;


void Banco::ler() {

	int ID[10];

	ifstream file("banco.txt");

	cout << "Estou lendo o banco de dados..." << endl;
	int i=0;
	while(i<10){
	i++;
	file >> ID[i] ;

	//cout << ID[i] << endl;
	
	
	lista.push_back(ID[i]);	

	}

}

bool Banco::vercartao(Cartao& c){

	int c1;

	cout << "Insira o cartao: " << endl;
	cin >> c1;




	list<int>::iterator iter;
	for (iter = lista.begin(); iter != lista.end(); iter++){
		if(*iter==c1){
			cout<<"Pode passar!"<<endl;
			return true;
		}
	cout<<"Erro: Cartao nao cadastrado!"<<endl;
	return false;
	}
}
	
