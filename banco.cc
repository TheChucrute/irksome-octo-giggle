#include<iostream>
#include<fstream>

using namespace std;

	class Banco{

		public: 
		
		void ler();	
		

		private:
	

	};

void Banco::ler(){

		 ifstream file("banco.txt");

		cout << "estou no ler" << endl;

};

int main(){

	Banco b;

	b.ler();
}	








