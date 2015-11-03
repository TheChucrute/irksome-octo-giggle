#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream input;
	cout << "Catraca" << endl;
	
	input.open("cartoes.txt");//ler o "cartao" com id e data de validade

	int w/*id*/, x/*ano*/, y/*mes*/, z/*dia*/;

	input >> w >> x >> y >> z;//bota os valores do "cartao" nas variaveis

	cout << "ID: "<< w << endl;//mostra o id


	if( x < 2015 ) //averiguar validade
	{
		cout << "Error" << endl;
		return 1;
	}else
	{
		cout << "OK! Passe..." << endl;
	}
	input.close();

	//data e hora de entrada do id tal
	//ler cartao
	//data e hora da saida do id tal

	return 0;
}
