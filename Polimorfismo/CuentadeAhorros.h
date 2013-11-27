#include <iostream>
#include <string>
#include "CuentaBancaria.h"
using namespace std;
class CuentadeAhorros: public CuentaBancaria{
	public:
		CuentadeAhorros();
		CuentadeAhorros(string nom, int num, double sal);
		void deposita(double cant);
		void consultaSaldo();
		bool retira(double cant);
};
CuentadeAhorros::CuentadeAhorros() : CuentaBancaria(){}
CuentadeAhorros::CuentadeAhorros(string nom, int num, double sal) : CuentaBancaria(nom, num, sal){
	
}
void CuentadeAhorros::consultaSaldo(){
	cout << "Tu saldo es: " << saldo <<endl;
}
void CuentadeAhorros::deposita(double cant){
	saldo += cant;
}
bool CuentadeAhorros::retira(double cant){
	if(saldo < cant){
		return false;
	}else {
		saldo -= cant;
		return true;
	}
}