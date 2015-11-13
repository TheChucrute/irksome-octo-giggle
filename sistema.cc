#include <iostream>
#include <fstream>
#include <ctime>
#include "cartao.h"
#include "banco.h"


using namespace std;


class Sistema {

private:

	Sistema mostrarHora();

public:
	void verificar();
};

void Sistema::verificar()
{
	Banco b;

	b.ler();
}

int main() {
	int banco, cartao;
	
	Sistema s;

	s.verificar();

	cout << "VAI FUNFA" << endl;
	
	return 0;

}
