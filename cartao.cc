#include <iostream>
#include <fstream>
#include "cartao.h"
using namespace std;

Cartao::Cartao (int ID, int dia, int mes, int ano)
{
	ID=ID;
	dia=dia;
	mes=mes;
	ano=ano;
};

void Cartao::ler(){
	int ID;
	int Dia;
	int Mes;
	int Ano;
	ifstream file;
	file.open("cartao.txt", ios::in);
	if (!file.is_open())
    {
        cout << "Erro fatal!" << endl;
        return; // Aborta programa
    }
	file>>ID>>Dia>>Mes>>Ano;
	cout<< ID<<endl;
	cout<< Dia<<endl;	
	cout<< Mes<<endl;
	cout<< Ano<<endl;		
	file.close();
	};
int main(){

	Cartao b;

	b.ler();
}
