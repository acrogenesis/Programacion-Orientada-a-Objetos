#include <iostream>

using namespace std;

int main(){
	cout <<"Dar el inf: ";
	int inf, sup, cont;
	cin >> inf;
	cout <<"Dar el sup: ";
	cin >> sup;
	for(int i=inf; i<=sup; i++){
		if (i%3 == 0 && i%5 == 0){
			cout << "Este si: " << i << endl;
			cont++;
		}
	}
	cout << "El total fueron: " << cont << endl;
	return 0;
}