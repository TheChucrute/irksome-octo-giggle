#include <iostream>
#include <fstream>
#include "cartao.h"
using namespace std;

Cartao::Cartao (int ID, int dia, int mes, int ano){
	ID=ID;
	dia=dia;
	mes=mes;
	ano=ano;

};

void Cartao::ler(){
	int ID;
	int dia;
	int mes;
	int ano;
	ifstream file;
	file.open("cartao.txt", ios::in);
	if (!file.is_open())
    {
        cout << "Erro fatal!" << endl;
        return; // Aborta programa
    }
	file>>ID>>dia>>mes>>ano;
	
	cout<< ID<<endl;
	cout<< dia<<endl;	
	cout<< mes<<endl;
	cout<< ano<<endl;		
	file.close();
	};
//
int main(){
	Cartao b;
	Cartao b(ID,dia,mes,ano);

	b.ler();
}
