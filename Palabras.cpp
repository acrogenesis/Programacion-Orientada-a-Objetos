#include <iostream>
#include <string>

using namespace std;

int main(){
	int reng;
	cout << "Dar el numero de renglones: ";
	cin >> reng;
	string datos[reng];
	cin.ignore(); //es para ignorar el salto de renglon de entero y prepararte para el getline
	
	for (int i=0; i<reng;i++){
		getline(cin,datos[i]);
	}
	for (int i=0; i<reng; i+=2){
		if (i!=reng-1)
			cout << datos[i+1]<<endl;
		cout << datos[i]<<endl;
	}
	return 0;
}