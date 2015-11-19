//leandro-ie@hotmail.com;lucascherutti@gmail.com;octavio.carpes10@gmail.com
#include<iostream>
#include<fstream>

using namespace std;



class Cartao{
friend ostream& operator<<(ostream& s, Cartao& lst);
	public:
		
	private:
	 int id;
};

