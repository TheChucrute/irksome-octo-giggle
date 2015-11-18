#include<iostream>
#include<fstream>
#include"cartao.h"
using namespace std;


void Cartao::ler(){

	int c1,id;

	cout << "Insira o cartao: " << endl;
	cin >> c1;

	if(c1==1){	

	ifstream file("cartao1.txt");
	
	cout << "estou no ler do cartao" << endl;

	file >> id;

	cout << id << endl;
	};

	
	if(c1==2){	

	ifstream file("cartao2.txt");
	
	cout << "estou no ler do cartao" << endl;

	file >> id;

	cout << id << endl;
	};

	
};
