#include <iostream>

using namespace std;

int main(){
     double ano;
     
    cout << "Digite a quantidade de dias do seu ano: ";
	cin >> ano;
	
	if (ano > 365 && ano < 367){
		cout << "Ano bissexto";
		}else{
			cout << "Ano não é bissexto";
		}
	
	


}
