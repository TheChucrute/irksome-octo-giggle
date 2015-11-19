//leandro-ie@hotmail.com;lucascherutti@gmail.com;octavio.carpes10@gmail.com

#include <iostream>
#include <fstream>
#include <ctime>
#include "banco.h"


using namespace std;





int main() {
	
	Banco b1;
	Cartao c1;

	
	b1.ler();
	bool resp = b1.vercartao(c1);
	
	
	
	return 0;

}
