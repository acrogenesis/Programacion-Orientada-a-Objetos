#include <iostream>
#include <string>
using namespace std;
class CuentaBancaria{
	protected:
		string nombre;
		int num_cuenta;
		double saldo;
	public:
		CuentaBancaria();
		CuentaBancaria(string nom, int num, double sal);
		virtual void consultaSaldo() = 0;
		virtual void deposita(double cant) = 0;
		virtual bool retira(double cant) = 0;
};
CuentaBancaria::CuentaBancaria(){
	nombre = "N/A";
	num_cuenta = 0;
	saldo = 0.00;
}
CuentaBancaria::CuentaBancaria(string nom, int num, double sal){
	nombre = nom;
	num_cuenta = num;
	saldo = sal;
}


