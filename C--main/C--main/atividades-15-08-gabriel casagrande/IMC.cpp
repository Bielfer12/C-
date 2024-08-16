#include <iostream>
#include <string>

using namespace std;

int main(){
     double h,homem,mulher;
     string sexo;
     
     
     cout << "Digite seu sexo(M/F): ";
     cin >> sexo;
	 cout <<" Digite sua altura: ";
     cin >> h;
     
     if (sexo == "M" || sexo == "m"){
	 homem = (72.7 * h) - 58;
	 cout <<  "Seu peso ideal e: " << homem << "Kg" << endl;
	 }else if(sexo == "F" || sexo == "f"){
	 mulher = (62.1*h) - 44.7;
	 cout << "Seu peso ideal e: " << mulher << "Kg" << endl;	
	 }else{
	 	cout << "Nao ha este sexo";
	 }

}
