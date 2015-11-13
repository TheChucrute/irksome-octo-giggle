#include<iostream>
#include<fstream>

using namespace std;

class Banco {

public:

    void ler();


private:


};

void Banco::ler() {

	int ID, ano, mes, dia;

	ifstream file("banco.txt");

	cout << "estou no ler" << endl;

	file >> ID >> ano >> mes >> dia;

	cout << ID << endl << ano << endl << mes << endl << dia << endl;

};







