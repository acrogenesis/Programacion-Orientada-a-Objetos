#include <iostream>
#include <string>
#include "CuentadeAhorros.h"
#include "CuentadeInversion.h"
using namespace std;
int main() {
	CuentaBancaria* arr[5];
	arr[0] = new CuentadeAhorros("Adrian",1,30.30);
	arr[1] = new CuentadeAhorros("Sofia",2,300.30);
	
	arr[2] = new CuentadeInversion("Adrian",3,30.3,10);
	arr[3] = new CuentadeInversion("Sofia",4,300.3,10);
	arr[4] = new CuentadeInversion("Eva",5,3000.3,10);
	
	arr[0]->deposita(50);
	arr[0]->consultaSaldo();
	if ((arr[1]->retira(50)) == true){
		cout << "si puedes retirar"<<endl;	
	}else 
		cout << "no tienes suficiente dinero"<<endl;
	arr[1]->deposita(50);
	arr[1]->consultaSaldo();
	arr[2]->deposita(50);
	arr[2]->consultaSaldo();
	arr[3]->deposita(50);
	arr[3]->consultaSaldo();
	arr[4]->deposita(50);
	if ((arr[4]->retira(3055.3)) == true){
		cout << "si puedes retirar"<<endl;	
	}else 
		cout << "no tienes suficiente dinero"<<endl;
	arr[4]->consultaSaldo();
	
	return 0;
}