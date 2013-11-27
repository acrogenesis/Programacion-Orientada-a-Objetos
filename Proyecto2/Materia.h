#include <iostream>
#include <string>

using namespace std;

class Materia{
	private:
		int clave;
		string nombre;
	public:
		Materia();
		Materia(int c, string nom);
		int getClave();
		void setClave(int c);
		string getNombre();
		void setNombre(string nom);
		void muestra();
};

Materia::Materia(){
	clave = 0;
	nombre = "";
}
Materia::Materia(int c, string nom){
	clave = c;
	nombre = nom;
}
int Materia::getClave(){
	return clave;
}
void Materia::setClave(int c){
	clave = c;
}
string Materia::getNombre(){
	return nombre;
}
void Materia::setNombre(string nom){
	nombre = nom;
}
void Materia::muestra(){
	cout << "Clave: " << clave << ", Nombre: " << nombre << endl;
}