#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;

class Articulo{
	private:
		int claveArt, numeroPro;
		string descripcion;
		double precio;
		
	public:
		Articulo();
		Articulo(int idarti, string nom, double price, int idProv);
		void setClave(int idarti);
		void setDescripcion(string nom);
		void setPrecio(double price);
		void setNumProveedor(int idProv);
		int getClave();
		string getDescripcion();
		double getPrecio();
		int getNumProveedor();
};
Articulo::Articulo(){
	claveArt = 0;	
	descripcion = "";
	precio = 0.00;
	numeroPro = 0;
}
Articulo::Articulo(int idarti, string nom, double price, int idProv){
	claveArt = idarti;
	descripcion = nom;
	precio = price;
	numeroPro = idProv;
}
int Articulo::getClave(){
	return claveArt;
}
string Articulo::getDescripcion(){
	return descripcion;
}
double Articulo::getPrecio(){
	return precio;
}
int Articulo::getNumProveedor(){
	return numeroPro;
}

void Articulo::setClave(int idarti){
	claveArt = idarti;
}
void Articulo::setDescripcion(string nom){
	descripcion = nom;
}
void Articulo::setPrecio(double price){
	precio = price;
}
void Articulo::setNumProveedor(int idProv){
	numeroPro = idProv;
}

class Proveedor{
	private:
		string nombre;
		int numero;
	public:
		Proveedor();
		Proveedor(int id, string nom);
		void setNumero(int id);
		void setNombre(string nom);
		int getNumero();
		string getNombre();	
};
Proveedor::Proveedor(){
	numero = 0;
	nombre = "";
}
Proveedor::Proveedor(int id, string nom){
	numero = id;
	nombre = nom;
}
void Proveedor::setNumero(int id){
	numero = id;
}
void Proveedor::setNombre(string nom){
	nombre = nom;
}
int Proveedor::getNumero(){
	return numero;
}
string Proveedor::getNombre(){
	return nombre;
}

class OrdenCompra{
	private:
		int claveArti, numeroPro, cantidad;
	public:
		OrdenCompra();
		OrdenCompra(int idArti, int idProv, int canti);
		void setClaveArticulo(int idArti);
		void setNumProveedor(int idProv);
		void setCantidad(int canti);
		int getClaveArticulo();
		int getNumProveedor();
		int getCantidad();
};
OrdenCompra::OrdenCompra(){
	claveArti = 0;
	numeroPro = 0;
	cantidad = 0;
}
OrdenCompra::OrdenCompra(int idArti, int idProv, int canti){
	claveArti = idArti;
	numeroPro = idProv;
	cantidad = canti;
}
void OrdenCompra::setClaveArticulo(int idArti){
	claveArti = idArti;
}
void OrdenCompra::setNumProveedor(int idProv){
	numeroPro = idProv;
}
void OrdenCompra::setCantidad(int canti){
	cantidad = canti;
}
int OrdenCompra::getClaveArticulo(){
	return claveArti;
}
int OrdenCompra::getNumProveedor(){
	return numeroPro;
}
int OrdenCompra::getCantidad(){
	return cantidad;
}

int main () 
{
	int idArt, idProv, cantidad;
	int numero;
	string nomArt, nomProv;
	double precio;
	int N = 1;
	int count;
	string line;
	string numerost, nombre; 
	bool noesta = true;
	
	//cin >> cantidad;
	Articulo arra[N];
	Proveedor arrp[10];
	
	ifstream myFile;
	myFile.open("provees.txt");
	count = 0;
	while(myFile.good()){
		getline(myFile,line);
		numerost = line.substr(0,4);
		nombre = line.substr(5,line.length());
		
		stringstream convert(numerost);	
		if ( !(convert >> numero) )
			numero = 0;
		
		arrp[count].setNombre(nombre);
		arrp[count].setNumero(numero);
		count++;
		
	}
	myFile.close();
	
	
	
	for (int i = 0; i < N; i++) {
		cout << "Dar idArt: ";
		cin >> idArt;
		cout << "Dar nomArt: ";
		cin >> nomArt;
		cout << "Dar precio: ";
		cin >> precio;

		arra[i].setClave(idArt);
		arra[i].setDescripcion(nomArt);
		arra[i].setPrecio(precio);
		arra[i].setNumProveedor(idProv);
		
		for (int j = 0; j < count; j++) {
			if(arra[i].getClave() != arrp[j].getNumero()){
				noesta = true;
			}else {
				noesta = false;
				j = count;
			}
		}
		while (noesta) {
			cout << "El proveedor: " << arra[i].getClave() << " no existe" << endl;
			noesta = false;
		}
					
	}
		
	
	for (int i = 0; i < N; i++) {
		cout << "El usuario ingreso: " << arra[i].getClave() << " " << arra[i].getDescripcion() << endl;
	}
	for (int i = 0; i < count; i++) {
		cout << "El archivo contiene: " << arrp[i].getNumero() << " " << arrp[i].getNombre() << endl;
	}
	
	
	
		
	Articulo objArt(idArt, nomArt, precio, idProv);

	Proveedor objProv(idProv, nomProv);
	
	OrdenCompra objOrden(idArt, idProv, cantidad);
	
	cout << fixed;

	
	
	
	return 0;
}