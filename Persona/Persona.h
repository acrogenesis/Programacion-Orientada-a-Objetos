#include <iostream>
#include <string>
using namespace std;
class Persona{
	protected:
		string nombre;
		int edad;
	public:
		Persona();
		Persona(string nom, int eda);
		string getNombre();
		int getEdad();
		void setNombre(string nom);
		void setEdad(int eda);
		void muestraDatos();
};
Persona::Persona(){
	nombre = "No Tiene ";
	edad = 0;
}

Persona::Persona(string nom, int eda){
	nombre = nom;
	edad = eda;
}
string Persona::getNombre(){
	return nombre;
}
int Persona::getEdad(){
	return edad;
}
void Persona::setNombre(string nom){
	nombre = nom;
}
void Persona::setEdad(int eda){
	edad = eda;
}
void Persona::muestraDatos(){
	cout << "Nombre: " << nombre << " Edad: " << edad << endl;
}