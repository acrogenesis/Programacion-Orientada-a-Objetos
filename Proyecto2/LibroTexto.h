#include <iostream>
#include <string>

using namespace std;
class LibroTexto{
	private:
		string titulo;
		string isbn;
		int cantAutores;
		int listaAutores[15];
		int autor;
	public:
		LibroTexto();
		LibroTexto(string t, string is, int cant);
		string getTitulo();
		void setTitulo(string t);
		string getIsbn();
		void setIsbn(string is);
		int getCantautores();
		void setCantautores(int cant);
		int getListaautores();
		
		int getAutor(int num);
		void setAutor(int num, int aut);
		void muestra();
};

LibroTexto::LibroTexto(){
	titulo = "";
	isbn = "";
	cantAutores = 0;
}

LibroTexto::LibroTexto(string t, string is, int cant){
	titulo = t;
	isbn = is;
	cantAutores = cant;
}
string LibroTexto::getTitulo(){
	return titulo;
}

void LibroTexto::setTitulo(string t){
	titulo = t;
}

string LibroTexto::getIsbn(){
	return isbn;
}

void LibroTexto::setIsbn(string is){
	isbn = is;
}

int LibroTexto::getCantautores(){
	return cantAutores;
}

void LibroTexto::setCantautores(int aut){
	cantAutores = aut;
}
int LibroTexto::getAutor(int num){
	return listaAutores[num];
}
void LibroTexto::setAutor(int num, int aut){
    listaAutores[num]=aut;
}


void LibroTexto::muestra(){
	cout << "ISBN: " << isbn << "Titulo: " << titulo << "Autor: ";
	for (int i = 0; i < cantAutores; i++) {
		cout << listaAutores[i] << ", ";
	}
	cout << endl;
}

