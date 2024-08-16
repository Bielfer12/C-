#include <iostream>
#include <string>

using namespace std;

int main(){
     double salario,aum,porc,valor;
     
     cout << "Digite seu salario: ";
     cin >> salario;
     
     
     if (salario <= 280){
     	aum = salario + (salario * 0.2);
     	valor = aum - salario ;
     	cout << "Seu salario: " << salario << "\nPercentual aumentado foi 20%\nFoi aumentado:" << valor << "\nSeu aumento foi de: " << aum;
	 }
	 else if (salario > 280 && salario <= 700){
	 	aum = salario + (salario * 0.15);
	 	valor = aum - salario ;
     	cout << "Seu salario: " << salario << "\nPercentual aumentado foi 15%\nFoi aumentado:" << valor << "\nSeu aumento foi de: " << aum;
	 }
     else if (salario > 700 && salario <= 1500){
	 	aum = salario + (salario * 0.10);
	 	valor = aum - salario;
     	cout << "Seu salario: " << salario << "\nPercentual aumentado foi 10%\nFoi aumentado:" << valor << "\nSeu aumento foi de: " << aum;
	 }
	 else if (salario > 1500){
	 	aum = salario + (salario * 0.05);
	 	valor = aum - salario;
     	cout << "Seu salario: " << salario << "\nPercentual aumentado foi 5%\nFoi aumentado:" << valor << "\nSeu aumento foi de: " << aum;
	 }
     

}
