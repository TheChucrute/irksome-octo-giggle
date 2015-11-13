#include<iostream>

using namespace std;

<<<<<<< HEAD


class Cartao{
    //friend std::ostream& operator<<(std::ostream&, const Cartao&);
=======
class Cartao{

friend std::ostream& operator<<(std::ostream&, const Cartao&);

>>>>>>> 675d2e8cebde08c5a06b9347c23fe3d6f513f83b
private:
int ID;
int dia;
int mes;
int ano;

public:
<<<<<<< HEAD
Cartao (int ID, int dia, int mes, int ano);
void ler();
=======
Cartao (int i, int d, int m, int a);
>>>>>>> 675d2e8cebde08c5a06b9347c23fe3d6f513f83b
};

//Cartão tem que receber os dados do txt (relacionado ao cartao)

//Catraca recebe dados e compara com o do txt do banco de dados
//
