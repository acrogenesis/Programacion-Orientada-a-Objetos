#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "LibroTexto.h"
#include "Autor.h"
#include "Materia.h"

using namespace std;
void menu(){
	cout << "Opciones seleccione una: " << endl << "A: Dar de alta un autor        - " << "B: Dar de alta un libro" <<
	endl << "C: Listado de materias         - " << "D: Listado de autores" << endl << "E: Listado de libros           - " 
	<< "F: Consulta libros por materia" << endl << "G: Consulta de libro por autor - " << "H: Terminar" << endl;
}
int main(int argc, char *argv[]) {
	string line, opcion, strings ;
	ifstream myFile;
	int clave, clavem, a = 0, b = 0, libro = 0,clavemi;
	bool c = true;
	string nombre;
	Materia mate[5];
	Autor autor [15];
    LibroTexto libroText [30];
	int contador = 0;
	myFile.open("Materias.txt");
 	if (! myFile){
		cout << "Error opening file"  << endl;
		return -1;
	}
	while (myFile.good()){
		getline(myFile, line);
		istringstream iss(line);
		iss >> clave;
		iss >> nombre;
		mate[contador].setClave(clave);
		mate[contador].setNombre(nombre);
		contador++;
	}
	contador = 0;
	myFile.close();
	
	menu();
	cin >> opcion;
	while (true) {
		//Autor
		if (opcion == "A" or opcion == "a"){
			
				while (c) {
					cout<<"Clave de Materia?"<<endl;
					cin >> clavem;
					for (int i = 0; i < 5; i++) {
						if (clavem == mate[i].getClave()) {
							c = false;
						}			
					}
				}
				autor[a].setclaveMateria(clavem);
				cout<<"ID del autor?"<<endl;
				cin >> clavem;
				autor[a].setId(clavem);
				cin.ignore();
				cout << "Nombre del Autor?" << endl;
				getline(cin,strings);
				autor[a].setNombre(strings);
				a++;
				c=true;
				menu();
				cin >> opcion;
		}
		//libro
		if (opcion == "B" or opcion == "b"){
			
			cout<<"Titulo del libro?"<<endl;
			cin.ignore();
			getline(cin, strings);
			libroText[libro].setTitulo(strings);
			
			cout<<"Isbn del libro?"<<endl;
			cin >> strings;
			libroText[libro].setIsbn(strings);
			
			cout <<"Cantidad de autores?" << endl;
			cin >>clavemi;
			
			libroText[libro].setCantautores(clavem);
			for (int i = 0; i < clavemi; i++) {
				while(c){
					cout << "Id del autor #" << i+1 << endl;
					cin >> clavem;
					for (int j = 0; j < 15; j++) {
						if (clavem==autor[j].getId()){
							c = false;
						}
					}
				}
				c=true;
				libroText[libro].setAutor(b, clavem);
				b++;
			}
			
			libro++;
			menu();
			c=true;
			cin >> opcion;
		}
		if (opcion == "C" or opcion == "c"){
			menu();
			for (int i = 0; i < 5; i++) {
				cout << "Clave: " << mate[i].getClave() << ", Nombre: " << mate[i].getNombre() << endl;
				//cout << mate[i].muestra();
				cout << " ";
			}
			cout << endl;
			cin >> opcion;
		}
		if (opcion == "D" or opcion == "d"){
			menu();
			for (int i = 0; i < 15; i++) {
				if(autor[i].getNombre()!="")
					autor[i].muestra();
			}
			cout << endl;
			cin >> opcion;		
		}
		if (opcion == "E" or opcion == "e"){
			menu();
			for (int i = 0; i < 30; i++) {
				if (libroText[i].getTitulo()!="")
					libroText[i].muestra();
			}
			cout << endl;
			cin >> opcion;
		}
		if (opcion == "F" or opcion == "f"){
			menu();
			c = true;
			while (c) {
				cout<<"Clave de Materia?"<<endl;
				cin >> clavem;
				for (int i = 0; i < 5; i++) {
					if (clavem == mate[i].getClave()) {
						c = false;
					}			
				}
			}
			for (int i = 0; i < 15; i++) {
				if(autor[i].getclaveMateria()==clavem){
					for (int j = 0; j < 30; j++) {
						for (int k = 0; k < 15; k++) {
							if(autor[i].getId()==libroText[j].getAutor(k))
								cout << libroText[j].getTitulo() << endl;
						}
					}
				}
			}			
			cin >> opcion;			
		}
		if (opcion == "G" or opcion == "g"){
			menu();
			c = true;
			while (c) {
				cout << "Id del autor: "<< endl;
				cin >> clavem;
				for (int i = 0; i < 15; i++) {
					if (clavem == autor[i].getId())
						c = false;
				}
			}
			for (int i = 0; i < 30; i++) {
				for (int j = 0; j < 15; j++) {
					if(clavem == libroText[i].getAutor(j))
					cout << libroText[i].getTitulo() << endl;
				}
			}
			
			
			cin >> opcion;			
		}
		if (opcion == "H" or opcion == "h"){
			return 0;
		}
	}
	
	
}