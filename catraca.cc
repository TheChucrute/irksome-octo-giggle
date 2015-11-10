#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream input;
	cout << "Catraca" << endl;
	
	input.open("cartoes.txt");//ler o "cartao" com id e data de validade

	int colocada, id, ano, mes, dia;

	input >> id >> ano >> mes >> dia;//bota os valores do "cartao" nas variaveis

	cout << "124568079" << endl << endl;//FIXME: deletar

	cout << "Insira o cartão: ";//Pede o número do cartão

	cin >> colocada;

	if ( colocada != id )
	{
		cout << "Erro! Cartão inválido...";
		return 1;
	}else /*verifica validade*/if( ano < 2016 ) //se o ano for menor que 2016 verificar mes
	{
		if( mes < 8)// se o mes for menor que 8 verificar dia
		{
			if( dia < 13)//se o dia for menor que 13 finalizar programa
			{
				cout << "Erro!!" << endl;
				return 1;
			}else
			{
				cout << "OK! Passe..." << endl;
			}
		}else
		{
			cout << "OK! Passe..." << endl;
		}
	}
	else
	{
		cout << "OK! Passe..." << endl;
	}//se tudo checar aparece OK! Passe...
	input.close();

	//data e hora de entrada do id tal
	//ler cartao
	//data e hora da saida do id tal

	return 0;
}
