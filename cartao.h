#include<iostream>
#include<fstream>

using namespace std;

class Cartao {

public:

    void ler();


private:


};

void Cartao::ler() {

	int ID;

	ifstream file("cartao2.txt");

	cout << "estou no ler do cartao.h" << endl;


	file >> ID;

	cout << ID << endl;



}
