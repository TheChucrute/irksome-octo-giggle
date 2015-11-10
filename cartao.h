#include<iostream>

using namespace std;

friend std::ostream& operator<<(std::ostream&, const Cartao&);

class Cartao{

private:
int ID;
int dia;
int mes;
int ano;

public:
Cartao (int i, int d, int m, int a);
}

//Cartão tem que receber os dados do txt (relacionado ao cartao)

//Catraca recebe dados e compara com o do txt do banco de dados
//
