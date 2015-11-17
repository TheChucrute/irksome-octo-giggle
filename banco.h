#include<iostream>
#include<fstream>
#include<list>
#include "cartao.h"
using namespace std;

class Banco {

public:

    void ler();
    bool vercartao(Cartao&);

private:
	list <int> lista;

};

