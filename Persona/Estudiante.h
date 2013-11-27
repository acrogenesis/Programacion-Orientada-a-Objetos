#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;
class Estudiante: public Persona{
	private:
		string carrera;
	public:
		Estudiante();
		Estudiante(string nom, int eda, string ca);
		string getCarrera();
		void setCarrera(string ca);
		void muestraDatos();
};
Estudiante::Estudiante() : Persona(){
	carrera = "No Carrera";
}
Estudiante::Estudiante(string nom, int eda, string ca):Persona(nom,eda){
	carrera = ca;
}
string Estudiante::getCarrera(){
	return carrera;
}
void Estudiante::setCarrera(string ca){
	carrera = ca;
}
void Estudiante::muestraDatos(){
	cout << "Nom: " << nombre << " Edad: "<< edad << " Carrera: " << carrera << endl;
}