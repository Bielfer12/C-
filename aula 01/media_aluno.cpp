# include <iostream>

using namespace std;

int main(){
	double num1,num2,num3,media;
	cout << "Digite um numero ";
	cin >> num1;
	cout << "Digite um numero ";
	cin >> num2;
	cout << "Digite um numero ";
	cin >> num3;
	
	media = (num1 + num2 + num3)/3;
	cout << "A sua media foi:" << media%.2f;
}

