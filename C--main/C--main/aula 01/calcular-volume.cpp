#include <iostream>

using namespace std;

int main(){
     double comprimento,largura,altura,volume;
     
    cout << "Digite o comprimento: ";
	cin >> comprimento;
	cout << "Digite o altura: ";
	cin >> largura;
	cout << "Digite o largura: ";
	cin >> altura;
	
	volume = comprimento * largura * altura;
	
	cout << "O seu volume deu:" << volume;
}
