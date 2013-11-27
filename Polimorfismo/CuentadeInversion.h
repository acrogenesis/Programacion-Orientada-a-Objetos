#include <iostream>
#include <string>
using namespace std;
class CuentadeInversion: public CuentaBancaria{
	private:
		int porcentaje;
	public:
		CuentadeInversion();
		CuentadeInversion(string nom, int num, double sal, int por);
		void deposita(double cant);
		bool retira(double cant);
		void consultaSaldo();
		
};
CuentadeInversion::CuentadeInversion() : CuentaBancaria(){
	porcentaje = 10;
}
CuentadeInversion::CuentadeInversion(string nom, int num, double sal, int por) : CuentaBancaria(nom, num, sal){
	porcentaje = por;
}
void CuentadeInversion::consultaSaldo(){
	cout << "Tu saldo es: " << saldo <<endl;
}
void CuentadeInversion::deposita(double cant){
	saldo += cant + (cant*(porcentaje/100));
}
bool CuentadeInversion::retira(double cant){
	if(saldo < cant){
		return false;
	}else {
		saldo -= cant;
		return true;
	}
}