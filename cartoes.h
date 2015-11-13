#include<iostream>


using namespace std;



class Cartoes {

private:


public:
    void inserir();

};


void Cartoes::inserir() {
	
    int cartoes;

    ifstream file("cartoes.txt");

    cout << "estou no inserir" << endl;

    file >> cartoes;

    cout << cartoes << endl;


};

//Cartão tem que receber os dados do txt (relacionado ao cartao)

//Catraca recebe dados e compara com o do txt do banco de dados
//
