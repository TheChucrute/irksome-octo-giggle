#include<iostream>

using namespace std;

friend std::ostream& operator<<(std::ostream&, const Cartao&);

class Cartao{

private:
int ID;
int dia;
int mes;
int ano;

public:
Cartao (int i, int d, int m, int a);
}
