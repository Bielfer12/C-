#include <iostream>
#include <string>

using namespace std;

int main(){
     double alimento;
     
     cout << "Digite o código do produto:";
     cin >> alimento;
     
     if (alimento == 1){
     	cout << "Alimento nao-perecivel";
	 }
	 else if (alimento >= 2 && alimento <= 4){
	 	cout << "Alimento perecivel";
		}
	else if (alimento >= 5 && alimento <= 6){
		cout << "Vestuario";
	}
	else if (alimento == 7){
		cout << "Higiene pessoal";
	}
	else if (alimento >= 8 && alimento <= 15){
		cout << "Limpeza e utensilios";
	}
	}
	
	 

