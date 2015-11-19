//leandro-ie@hotmail.com;lucascherutti@gmail.com;octavio.carpes10@gmail.com
#include<iostream>
#include<fstream>
#include<list>
#include "cartao.h"
using namespace std;

class Banco {
friend ostream& operator<<(ostream& s, Banco& lst);
public:

    void ler();
    bool vercartao(Cartao&);

private:
	list <int> lista;

};

