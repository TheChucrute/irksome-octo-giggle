#include<iostream>
#include<fstream>

using namespace std;

class Banco {

public:

    void ler();


private:


};

void Banco::ler() {

    int banco;

    ifstream file("banco.txt");

    cout << "estou no ler" << endl;

    file >> banco;

    cout << banco << endl;

};










