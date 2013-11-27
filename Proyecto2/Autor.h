#include <iostream>
#include <string>

using namespace std;
class Autor{
	private:
		int id;
		string nombre;
		int claveMateria;
	public:
		Autor();
		Autor(int ids, string nom, int cMat);
		int getId();
		void setId(int ids);
		string getNombre();
		void setNombre(string nom);
		int getclaveMateria();
		void setclaveMateria(int cMat);
		void muestra();
		
};

Autor::Autor(){
	id = 0;
	nombre = "";
	claveMateria = 0;
}
Autor::Autor(int ids, string nom, int cMat){
	id = ids;
	nombre = nom;
	claveMateria = cMat;
}
int Autor::getId(){
	return id;
}
void Autor::setId(int ids){
	id = ids;
}
string Autor::getNombre(){
	return nombre;
}
void Autor::setNombre(string nom){
	nombre = nom;
}
int Autor::getclaveMateria(){
	return claveMateria;
}
void Autor::setclaveMateria(int cMat){
	claveMateria = cMat;
}
void Autor::muestra(){
	cout << "ID: " << id << ", Autor: " << nombre << ", Clave Materia: " << claveMateria << endl;
}