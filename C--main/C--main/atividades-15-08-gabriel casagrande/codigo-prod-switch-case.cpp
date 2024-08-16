#include <iostream>
#include <string>

using namespace std;

int main(){
     int alimento;
     
     cout << "Digite o código do produto:";
     cin >> alimento;
     
     switch(alimento){
     	case 1:
     		cout << "Alimento nao-perecivel";
     		break;
		case 2:
		case 3:
		case 4:
     		cout << "Alimento perecivel";
     		break;
     	case 5:
     	case 6:
     		cout << "Vestuario";
     		break;
     	case 7:
     		cout << "Higiene pessoal";
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			cout << "Limpeza e utensilios";
			break;	
		default:
			cout << "Digite o numero certo";	
		
	 }
}
