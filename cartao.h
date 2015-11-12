#include<iostream>

using namespace std;



class Cartao{
    //friend std::ostream& operator<<(std::ostream&, const Cartao&);
private:
int ID;
int dia;
int mes;
int ano;

public:
Cartao (int ID, int dia, int mes, int ano);
void ler();
};

//Cartão tem que receber os dados do txt (relacionado ao cartao)

//Catraca recebe dados e compara com o do txt do banco de dados
//
