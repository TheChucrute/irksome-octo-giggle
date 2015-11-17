#include<iostream>
#include<fstream>
#include"cartao.h"
using namespace std;


void Cartao::ler(){

	int id;
	ifstream file("cartao1.txt");
	file >> id;

	cout << id << endl;
};
