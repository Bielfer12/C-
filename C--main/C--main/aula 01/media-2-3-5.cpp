#include <iostream>

using namespace std;


int main(){
	double num1,num2,num3,media;
	cout << "Digite a nota do trabalho ";
	cin >> num1;
	cout << "Digite um numero ";
	cin >> num2;
	cout << "Digite um numero ";
	cin >> num3;
	
	if(num1 > 2 || num2 > 3  || num3 > 5 ){
		cout << "Nao tem como ser este peso, volte e faça novamente";
		return 0;
	}
	
	media = (num1 + num2 + num3)/3;
	cout << "A sua media foi:" << media;
}

