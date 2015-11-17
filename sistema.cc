#include <iostream>
#include <fstream>
#include <ctime>

#include "banco.h"


using namespace std;





int main() {
	
	
	Cartao c1;

	c1.ler();
	b1.ler();
	bool resp = b1.vercartao(c1);
	
	cout << resp << endl;
	
	return 0;

}
