#include<iostream>
#include<fstream>
#include<list>
#include "banco.h"
using namespace std;


void Banco::ler() {

	int ID;

	ifstream file("banco.txt");

	cout << "estou no ler" << endl;


	file >> ID ;

	cout << ID << endl;

	lista.push_back(ID);


}

bool Banco::vercartao(Cartao& c){

//FIXME: INSERIR WHILE AQUI 


	return true;
}
