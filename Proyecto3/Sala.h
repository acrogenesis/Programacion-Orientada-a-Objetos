#include <iostream>
#include <string>
using namespace std;
class Sala
{
    private:
        int idSala, capacidad;
        bool proyector, computadora;
        string nomSala;
    public:
        Sala();
        Sala(int id, int cap, bool pro, bool comp, string nom);

        int getIdSala();
        int getCapacidad();
        bool getProyector();
        bool getComputadora();
        string getNomSala();

        void setIdSala(int id);
        void setCapacidad(int cap);
        void setProyector(bool pro);
        void setComputadora(bool comp);
        void setNomSala(string nom);

        void Muestra();
};

Sala::Sala(){
    idSala=0;
    capacidad=0;
    proyector=false;
    computadora=true;
    nomSala="N/A";
}

Sala::Sala(int id, int cap, bool pro, bool comp, string nom){
    idSala=id;
    capacidad=cap;
    proyector=pro;
    computadora=comp;
    nomSala=nom;
}

int Sala::getIdSala(){
    return idSala;
}

int Sala::getCapacidad(){
    return capacidad;
}

bool Sala::getProyector(){
    return proyector;
}

bool Sala::getComputadora(){
    return computadora;
}

string Sala::getNomSala(){
    return nomSala;
}

void Sala::setIdSala(int id){
    idSala=id;
}

void Sala::setCapacidad(int cap){
    capacidad=cap;
}

void Sala::setProyector(bool pro){
    proyector=pro;
}

void Sala::setComputadora(bool com){
    computadora=com;
}

void Sala::setNomSala(string nom){
    nomSala=nom;
}

void Sala::Muestra(){
    cout<<"Nombre de Sala: "<<nomSala<<endl;
    cout<<"Id de Sala: "<<idSala<<endl;
    cout<<"Capacidad de la sala: "<<capacidad<<endl;
	if(proyector == 0){
		cout<<"Proyector: No"<<endl;
	}else cout<<"Proyector: Si"<<endl;
	if(computadora == 0){
		cout<<"Computadora: No"<<endl;
	}else cout<<"Computadora: Si"<<endl;
}