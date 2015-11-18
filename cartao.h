#include<iostream>
#include<fstream>

using namespace std;



class Cartao{
friend ostream& operator<<(ostream& s, Cartao& lst);
	public:
	 
	 void ler();
	private:
	 int id;
};

