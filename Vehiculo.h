#include <iostream>
#include <string>

class Vehiculo{
	private:
		double kilometraje;
		double gasolina;
		double kmxlitro;
		int cap_Tanque;
	public:
		Vehiculo();
		void setKilometraje(double km);
		double getKilometraje();
		//...
		bool avanza (double km);
		void llena_Tanque();
};

Vehiculo::Vehiculo(){
	kilometraje = 0;
	gasolina = 10;
	kmxlitro = 10;
	cap_Tanque = 70;
}
//...
bool Vehiculo::avanza(double km){
	if(gasonlina*kmxlitro < km)
		return false;
	kilometraje += km;
	gasolina-=(km/kmxlistro);
	return true;
};