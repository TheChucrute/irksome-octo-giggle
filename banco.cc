#include<iostream>
#include<fstream>

using namespace std;

class Banco {

public:

    void ler();


private:


};

void Banco::ler() {

    int ID;

    ifstream file("banco.txt");

    cout << "estou no ler" << endl;

    file >> ID;

    cout << ID << endl;

};

int main() {

    Banco b;

    b.ler();
}








