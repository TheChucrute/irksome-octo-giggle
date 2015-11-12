#include<fstream>
#include<iostream>
#include "banco.h"
#include "cartao.h"

class Catraca{

	public:
	int cartao;
	int banco;
	int lerbanco(); 
	Catraca(int cartao, int banco);
	private:



};

Catraca::Catraca(int cartao, int banco){

	cartao=cartao;
	banco=banco;

};

int Catraca::lerbanco(){

	int ID;

	ifstream file("banco.txt");

	cout << "estou no ler" << endl;

	file >> ID;

	cout << ID << endl;
};

int main() {

    //int cartao, banco;
    
    Cartao ca;
    Banco b; 	
  

    b.ler();
    ca.inserir();
    

   

if (cartao==banco){

cout << "entre" << endl;

}else cout << "cartao nao existe" << endl;



}
