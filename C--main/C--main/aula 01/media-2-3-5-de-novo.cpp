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
	
	num1 = num1 * 0.2;
	num2 = num2 * 0.3;
	num3 = num3 * 0.5;
	
		media = (num1 + num2 + num3);
	cout << "A sua media foi:" << media;
}

